

/**
  * inicijalizacija buttona, provjera je li button stisnut ili ne
  * ako je -> promijeni stanje (ne detektira držanje)
  * ako nije -> stanje ostane

  * button mijenja stanje ledica, parsira bite

  * changeState() funkcija koja se poziva u mainu ?
  * nekako implementirati restrikciju na držanje buttona


*/

#include "stdio.h"
#include "stdlib.h"
#include "stdint.h"
#include "../Inc/memoryMapping.h"



int* gpio_a_idr = (int*)GPIOA_IDR;
int* gpio_g_odr = (int*)GPIOG_ODR;   
 

//chage state koji se poziva iz maina
void changeState(uint8_t count, uint8_t type){
	int state = *gpio_a_idr & (1 << 0);
	if (state){
		*gpio_g_odr |= (((type >> count) & 3) << 13);
		while(state){
			if (!state) break;
		}
	}
}

uint8_t isButton(){
	int state = *gpio_a_idr & (1 << 0);
	return state == 1 ? 1 : 0; 
}