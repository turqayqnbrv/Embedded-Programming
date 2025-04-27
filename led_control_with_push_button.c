/* 
 * File:   blink_led.c
 * Author: turqay
 *
 * Created on March 27, 2025, 8:59 PM
 */
#pragma config FOSC = INTOSCCLK 
#pragma config WDTE = OFF      
#pragma config PWRTE = OFF      
#pragma config MCLRE = OFF      
#pragma config BOREN = OFF      
#pragma config LVP = OFF        
#pragma config CPD = OFF        
#pragma config CP = OFF         


#define _XTAL_FREQ 8000000

#include <stdio.h>
#include <stdlib.h>
#include <xc.h>

void main() {
    TRISB.F0 = 0; //output
    TRISA.F0 = 1; //input
    
    while(1){
        if (PORTA.F0 == 1){
            PORTB.F0 = 1; //LED turns on if push button pressed
        }
        else{
           PORTB.F0 = 0; //LED turns off if push button released
        }
    }
}