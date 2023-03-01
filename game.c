#include <pic32mx.h>
#include <stdint.h>
#include <stdbool.h>
#include "main.h"
#include "menu.h"
#include "canvas.h"
#include "shieldDisplay.h"
#include "ballMath.h"

#include "ballMath.h"
#include "menu.h"
#include "model/map.c"
#include "model/paddle.c"
#include "model/ball.c"



/*
Global values
Global values that holds data of the players and the balls position.
Aswell as the score of the player. 
*/

double paddleX1 = 2;			//The initial positions of the padels. and the ball
double paddleY1 = 16;
double paddleX2 = 126;
double paddleY2 = 16;



int ballX = 64;
int ballY = 16;
int ballAngle = 0;

int p1Score = 0;
int p2Score = 0;




/*
Checks which button is pressed and if it is pressed
trigger a certain action, in this case either make the 
player go down or up
*/
void paintArena(){
	canvasInsertModel(paddleX1, paddleY1, 2, 8, model_paddle, false);		//The left side padel 
	canvasInsertModel(paddleX2, paddleY2, 2, 8, model_paddle, false);		//The right side padel 

	canvasInsertModel(0, 0, 128, 32, model_map, true);			//The map
	canvasInsertModel(ballX, ballY, 2, 2, model_ball, true);			//The ball
}



/**
 * This function determines if the paddle will move up or down.
 * The function also makes bounderies for the padels.
 * @param pos			- Current position of padel 
 * @param direction 	- The direction where the padel is going 
 * 
*/

bool upOrDown(int pos, int direction){
	int newPos = pos + direction;
		if(newPos < 24 & newPos > 0){
			return true; 
		}
	return false;
}



/**
 * This function is called from main, continuously, that checks 
 * whether a button is pressed or not. 
 * @param buttonData	- 
*/

void gameButtonTriggered(int buttonData) {

	if (buttonData == 15) {								// Detect if all buttons are pressed at the same time
		setMenuScreenCode(1);							// Set menu screen page to enter highscore
		setInGame(false);								// Leave game mode
		return;											// End function early
	}

	if(buttonData & 0x8 && upOrDown(paddleY1, 1)){
		paddleY1++;
	}

	if(buttonData & 0x4 && upOrDown(paddleY1, -1)){
		paddleY1--;
	}
	
	if(buttonData & 0x2 && upOrDown(paddleY2, 1)){
		paddleY2++;
	}

	if(buttonData & 0x1 && upOrDown(paddleY2, -1)){
		paddleY2--;
	}
}



/**
 * Functions from ball_math.h is called to here
*/

void playingGame(){
	xBallSpeed(ballX);
	yBallSpeed(ballY);
	playerScore(p1Score, ballX);
	playerScore(p2Score, ballX);
	ballHit(ballX, ballY, ballAngle, paddleX1, paddleY1);		//Player 1
	ballHit(ballX, ballY, ballAngle, paddleX2, paddleY2);		//Player 1

}



/**
 * The function that main calls when we want to load in
 * the game state.
*/



void renderGame(){
		canvasClear();									//Clear the menu 
		paintArena();									//Paint the arena 					
		playingGame();

		const uint8_t* canvas_data = canvasGetData();	//Get the data from the canvas
  		sendDisplayData(canvas_data);					//Sending that data to the OLED display
}





