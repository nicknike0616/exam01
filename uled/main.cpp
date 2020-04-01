
#include "mbed.h"

#include "uLCD_4DGL.h"

uLCD_4DGL uLCD(D1, D0, D2); // serial tx, serial rx, reset pin;

PwmOut PWM1(D6);

AnalogIn Ain(A0);

int main()
{
    uLCD.printf("\n106061255\n");

    uLCD.line(30, 30, 40, 30, WHITE);
    uLCD.line(40, 30, 40, 40, WHITE);
    uLCD.line(40, 40, 30, 40, WHITE);
    uLCD.line(30, 40, 30, 30, WHITE);

    float i;
    while(1){
        for( i=0; i<1; i+=0.1 ){
        PWM1.period(0.001);
        PWM1 = Ain;
        wait(0.1);
        }
    }
}
