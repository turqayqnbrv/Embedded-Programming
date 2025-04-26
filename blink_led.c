/* 
 * File:   blink_led.c
 * Author: turqay
 *
 * Created on March 27, 2025, 8:59 PM
 */


// PIC16F628A Configuration Bit Settings

// 'C' source line config statements

// CONFIG
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

/*
 * 
 */
void main(){
    CMCONbits.CM = 0b111;
    TRISBbits.TRISB0 = 0;
    PORTBbits.RB0 = 0;
    
    while(1){
       PORTBbits.RB0 = 1;
       __delay_ms(500);
       PORTBbits.RB0 = 0;
       __delay_ms(500);
    }
}

