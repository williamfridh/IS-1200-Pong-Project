/**
 * Get Char Length
 * 
 * @param {char}    - char array to calculate length of
 * @return {int}    - length of char array
 * @author Fridh, William
*/
int getCharLen(char *c) {
    int len = 0;
    while(*c) {
        len++;
        c++;
    }
    return len;
}



/**
 * Toggle Capital Letters In ASCII
 * 
 * Used for toggling ASCII characters for inputs.
 * 
 * @param {char} char pointer to char to toggle
 * 
 * @author Fridh, William
*/
void toggleCapitalLetters(char *str) {
    (*str)++;
    if (*str < 65 || *str > 90) *str = 65;
}



/**
 * A simple delay use
 * 
 * @param {int} - amount of ticks that the loop will go through
 * 
 * @author Åhlin, Pontus
*/
void delay(int ticks) {
	int i;
	for(i = ticks; i > 0; i--);
}

