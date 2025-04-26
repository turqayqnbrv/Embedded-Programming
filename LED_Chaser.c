/* 
 * File:   blink_led.c
 * Author: turqay
 *
 * Created on March 27, 2025, 8:59 PM
 */


// PIC16F628A Configuration Bit Settings

// 'C' source line config statements

// CONFIG


#define _XTAL_FREQ 8000000


#include <stdio.h>
#include <stdlib.h>
#include <xc.h>


void main() {
      TRISB = 0x00;
      PORTB = 0x00;
      
      while(1)
      {
      PORTB =  0x01;
      Delay_ms(250);
      
      PORTB =  0x02;   
      Delay_ms(250);
      
      PORTB =  0x04;
      Delay_ms(250);
      
      PORTB =  0x08;
      Delay_ms(250);
      
      PORTB =   0x10;
      Delay_ms(250);
      
      PORTB =   0x20;
      Delay_ms(250);
      
      PORTB =   0x40;
      Delay_ms(250);
      
      PORTB =  0x80;
      Delay_ms(250);
      
      
      
      
      
      }
}