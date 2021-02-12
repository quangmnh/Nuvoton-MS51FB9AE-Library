#ifndef TIMER_H_
#define TIMER_H_


#include "macro.h"

/****************************************************************************************************************/
/* USE Define in option For TIMER VALUE setting is base on " option -> C51 -> Preprocesser Symbols -> Define "  */
/****************************************************************************************************************/
#ifdef FOSC_160000    // if Fsys = 16MHz 
    #define TIMER_DIV12_VALUE_10us       65536-13    //13*12/16000000 = 10 uS,        // Timer divider = 12 for TM0/TM1
    #define TIMER_DIV12_VALUE_100us      65536-130    //130*12/16000000 = 10 uS,      // Timer divider = 12 
    #define TIMER_DIV12_VALUE_1ms        65536-1334  //1334*12/16000000 = 1 mS,       // Timer divider = 12 
    #define TIMER_DIV12_VALUE_10ms       65536-13334  //13334*12/16000000 = 10 mS     // Timer divider = 12 
    #define TIMER_DIV12_VALUE_40ms       65536-53336  //53336*12/16000000 = 40 ms      // Timer divider = 12 
    #define TIMER_DIV4_VALUE_10us        65536-40    //40*4/16000000 = 10 uS,        // Timer divider = 4  for TM2/TM3
    #define TIMER_DIV4_VALUE_100us       65536-400    //400*4/16000000 = 100 us        // Timer divider = 4
    #define TIMER_DIV4_VALUE_200us       65536-800    //800*4/16000000 = 200 us        // Timer divider = 4
    #define TIMER_DIV4_VALUE_416us       65536-1620  //416us
    #define TIMER_DIV4_VALUE_500us       65536-2000  //2000*4/16000000 = 500 us      // Timer divider = 4
    #define TIMER_DIV4_VALUE_1ms         65536-4000  //4000*4/16000000 = 1 mS,       // Timer divider = 4
    #define TIMER_DIV16_VALUE_10ms       65536-10000  //10000*16/16000000 = 10 ms      // Timer  divider = 16
    #define TIMER_DIV64_VALUE_30ms       65536-7500  //7500*64/16000000 = 30 ms      // Timer divider = 64
    #define TIMER_DIV128_VALUE_100ms     65536-12500  //12500*128/16000000 = 100 ms    // Timer divider = 128
    #define TIMER_DIV128_VALUE_200ms     65536-25000  //25000*128/16000000 = 200 ms    // Timer divider = 128
    #define TIMER_DIV256_VALUE_500ms     65536-31250  //31250*256/16000000 = 500 ms   // Timer divider = 256
    #define TIMER_DIV512_VALUE_1s        65536-31250  //31250*512/16000000 = 1 s.      // Timer Divider = 512
#endif
#ifdef FOSC_166000    // if Fsys = 16.6MHz 
    #define TIMER_DIV12_VALUE_10us       65536-14    //14*12/16600000 = 10 uS,        // Timer divider = 12 for TM0/TM1
    #define TIMER_DIV12_VALUE_100us      65536-138    //138*12/16600000 = 100 uS,      // Timer divider = 12 
    #define TIMER_DIV12_VALUE_1ms        65536-1384  //1384*12/16600000 = 1 mS,       // Timer divider = 12 
    #define TIMER_DIV12_VALUE_10ms       65536-13834  //13834*12/16600000 = 10 mS     // Timer divider = 12 
    #define TIMER_DIV12_VALUE_40ms       65536-55333  //55333*12/16600000 = 40 ms      // Timer divider = 12 
    #define TIMER_DIV4_VALUE_10us        65536-41    //41*4/16600000 = 10 uS,        // Timer divider = 4  for TM2/TM3
    #define TIMER_DIV4_VALUE_100us       65536-415    //415*4/16600000 = 100 us        // Timer divider = 4
    #define TIMER_DIV4_VALUE_200us       65536-830    //830*4/16600000 = 200 us        // Timer divider = 4
    #define TIMER_DIV4_VALUE_500us       65536-2075  //2075*4/16600000 = 500 us      // Timer divider = 4
    #define TIMER_DIV4_VALUE_1ms         65536-4150  //4150*4/16600000 = 1 mS,       // Timer divider = 4
    #define TIMER_DIV16_VALUE_10ms       65536-10375  //10375*16/16600000 = 10 ms      // Timer  divider = 16
    #define TIMER_DIV64_VALUE_30ms       65536-7781  //7781*64/16600000 = 30 ms      // Timer divider = 64
    #define TIMER_DIV128_VALUE_100ms     65536-12969  //12969*128/16600000 = 100 ms    // Timer divider = 128
    #define TIMER_DIV128_VALUE_200ms     65536-25937  //25937*128/16600000 = 200 ms    // Timer divider = 128
    #define TIMER_DIV256_VALUE_500ms     65536-32422  //32422*256/16600000 = 500 ms   // Timer divider = 256
    #define TIMER_DIV512_VALUE_1s        65536-32421  //32421*512/16600000 = 1 s.      // Timer Divider = 512
#endif
#ifdef FOSC_240000    // if Fsys = 24MHz 
    #define TIMER_DIV12_VALUE_10us       65536-14    //14*12/16600000 = 10 uS,        // Timer divider = 12 for TM0/TM1
    #define TIMER_DIV12_VALUE_100us      65536-138    //138*12/16600000 = 100 uS,      // Timer divider = 12 
    #define TIMER_DIV12_VALUE_1ms        65536-1384  //1384*12/16600000 = 1 mS,       // Timer divider = 12 
    #define TIMER_DIV12_VALUE_10ms       65536-13834  //13834*12/16600000 = 10 mS     // Timer divider = 12 
    #define TIMER_DIV12_VALUE_40ms       65536-55333  //55333*12/16600000 = 40 ms      // Timer divider = 12 
    #define TIMER_DIV4_VALUE_10us        65536-41    //41*4/16600000 = 10 uS,        // Timer divider = 4  for TM2/TM3
    #define TIMER_DIV4_VALUE_100us       65536-415    //415*4/16600000 = 100 us        // Timer divider = 4
    #define TIMER_DIV4_VALUE_200us       65536-830    //830*4/16600000 = 200 us        // Timer divider = 4
    #define TIMER_DIV4_VALUE_500us       65536-2075  //2075*4/16600000 = 500 us      // Timer divider = 4
    #define TIMER_DIV4_VALUE_1ms         65536-4150  //4150*4/16600000 = 1 mS,       // Timer divider = 4
    #define TIMER_DIV16_VALUE_10ms       65536-10375  //10375*16/16600000 = 10 ms      // Timer  divider = 16
    #define TIMER_DIV64_VALUE_30ms       65536-7781  //7781*64/16600000 = 30 ms      // Timer divider = 64
		#define TIMER_DIV64_VALUE_50ms       65536-12969  //12969*64/16600000 = 50 ms      // Timer divider = 64
    #define TIMER_DIV128_VALUE_100ms     65536-12969  //12969*128/16600000 = 100 ms    // Timer divider = 128
    #define TIMER_DIV128_VALUE_200ms     65536-25937  //25937*128/16600000 = 200 ms    // Timer divider = 128
    #define TIMER_DIV256_VALUE_500ms     65536-32422  //32422*256/16600000 = 500 ms   // Timer divider = 256
    #define TIMER_DIV512_VALUE_1s        65536-32421  //32421*512/16600000 = 1 s.      // Timer Divider = 512
#endif

extern unsigned char flag_timer;
void Timer0_Init();




#endif