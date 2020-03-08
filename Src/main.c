
#include "stdio.h"
#include "stdlib.h"
#include "stdint.h"
#include "../Inc/memoryMapping.h"
/**
  * while(1)
  * provjeravamo stanje buttona
  * ako je stisnut -> promijeni stanje ledica
  * koristi changeState() funkciju
*/
uint8_t count = 0;



int main()
{
	ledInit();

	while(1){
		if(isButton()){
			changeState(count % 4, BINARY);
			count++;
		}
	}
	return 0;
}
