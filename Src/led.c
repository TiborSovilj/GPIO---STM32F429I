/**
  * kod u kojem inicijaliziramo, ukljucujemo i iskljucujemo ledice


  * funkcija koja prima parametar iz maina
  * parametar su dva bita
  * jedan bit je stanje crvene
  * drugi bit je stanje zelene

*/

#include "stdio.h"
#include "stdlib.h"
#include "stdint.h"
#include "../Inc/memoryMapping.h"


void ledInit(){
	int* gpio_g_moder = (int*)GPIOG_MODER;
	*gpio_g_moder |= (1 << 26);       // postavi bit
  	*gpio_g_moder &= (~(1 << 27));    // iskljuci bit
  	*gpio_g_moder |= (1 << 28);       // postavi bit
  	*gpio_g_moder &= (~(1 << 29));    // iskljuci bit  
}