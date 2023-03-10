/**
 * @author Fridh, William
*/

#ifndef CANVAS
#define CANVAS

#include <stdint.h>

void canvasPaint(int x, int y, int width, int height);

void canvasErase(int x, int y, int width, int height);

void canvasClear();

bool ifPixelIsFilled(int x, int y);

void canvasWrite(char *txt, int x, int y, bool merge, bool large);

void drawButtonDescBar(bool left_arrow, bool right_arrow, bool ok, bool back);

void canvasInsertModel(
    int x,
    int y,
    int modelWidth,
    int modelHeight,
    uint8_t modelData[][modelHeight], 
    bool merge
);

uint8_t* canvasGetData(void);

#endif

