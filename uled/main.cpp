/*Draw a square and display your student ID on uLCD.
#include "mbed.h"

#include "uLCD_4DGL.h"

uLCD_4DGL uLCD(D1, D0, D2); // serial tx, serial rx, reset pin;

int main()
{
    // basic printf demo = 16 by 18 characters on screen

    uLCD.printf("\n106061255\n"); //Default Green on black text

    uLCD.line(30, 30, 40, 30, WHITE);
    uLCD.line(40, 30, 40, 40, WHITE);
    uLCD.line(40, 40, 30, 40, WHITE);
    uLCD.line(30, 40, 30, 30, WHITE);

}
/*



