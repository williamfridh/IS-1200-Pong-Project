#include <pic32mx.h>

void canvasAction(int x, int y, int width, int height, int val);

void canvasPaint(int x, int y, int width, int height);

void canvasErase(int x, int y, int width, int height);

void canvasClear();

bool ifPixelIsFilled(int x, int y);

void canvasInsertModel(
    int x,
    int y,
    int modelWidth,
    int modelHeight,
    uint8_t modelData[][modelHeight], 
    bool merge
);

uint8_t* canvasGetData(void);
