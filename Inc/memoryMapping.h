#pragma once

#ifndef MEMORY_MAP
#define MEMORY_MAP


/*
  * macro za binarno štejenje
  * macro za Grayev kod
  * adresa clocka
  *
  * ZA PORTOVE:
  * adresa porta
  * port moder
  * _IDR i _ODR registri (_IDR za button, _ODR za ledice)

  * prototipi funkcija koje se koriste
*/

#define BINARY (0xE4)           // 11|10|01|00
#define GRAY (0xB4)             // 10|11|01|00

#define RCC (0x40023800)
#define RCC_AHB1ENR (RCC + 0x30)

#define GPIOG (0x40021800)
#define GPIOG_MODER (GPIOG + 0x00)
#define GPIOG_ODR (GPIOG + 0x14)

#define GPIOA (0x40020000)
#define GPIOA_MODER (GPIOA + 0x00)
#define GPIOA_IDR (GPIOA + 0x10)


void ledInit();
uint8_t isButton();
void changeState(uint8_t, uint8_t);

#endif