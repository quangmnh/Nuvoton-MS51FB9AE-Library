
/***********************************************************/
/* GPIO Settings                                           */
/* mostly copied from Nuvoton Keil BSP for MS51FB9AE chip  */
/***********************************************************/
#ifndef GPIO_H_
#define GPIO_H_

//------------------- Define Port as Quasi mode  -------------------
#define P00_QUASI_MODE         P0M1&=0xFE;P0M2&=0xFE
#define P01_QUASI_MODE         P0M1&=0xFD;P0M2&=0xFD
#define P02_QUASI_MODE         P0M1&=0xFB;P0M2&=0xFB
#define P03_QUASI_MODE         P0M1&=0xF7;P0M2&=0xF7
#define P04_QUASI_MODE         P0M1&=0xEF;P0M2&=0xEF
#define P05_QUASI_MODE         P0M1&=0xDF;P0M2&=0xDF
#define P06_QUASI_MODE         P0M1&=0xBF;P0M2&=0xBF
#define P07_QUASI_MODE         P0M1&=0x7F;P0M2&=0x7F
#define P10_QUASI_MODE         P1M1&=0xFE;P1M2&=0xFE
#define P11_QUASI_MODE         P1M1&=0xFD;P1M2&=0xFD
#define P12_QUASI_MODE         P1M1&=0xFB;P1M2&=0xFB
#define P13_QUASI_MODE         P1M1&=0xF7;P1M2&=0xF7
#define P14_QUASI_MODE         P1M1&=0xEF;P1M2&=0xEF
#define P15_QUASI_MODE         P1M1&=0xDF;P1M2&=0xDF
#define P16_QUASI_MODE         P1M1&=0xBF;P1M2&=0xBF
#define P17_QUASI_MODE         P1M1&=0x7F;P1M2&=0x7F
#define P30_QUASI_MODE         P3M1&=0xFE;P3M2&=0xFE
//------------------- Define Port as Push Pull mode -------------------
#define P00_PUSHPULL_MODE      P0M1&=0xFE;P0M2|=0x01
#define P01_PUSHPULL_MODE      P0M1&=0xFD;P0M2|=0x02
#define P02_PUSHPULL_MODE      P0M1&=0xFB;P0M2|=0x04
#define P03_PUSHPULL_MODE      P0M1&=0xF7;P0M2|=0x08
#define P04_PUSHPULL_MODE      P0M1&=0xEF;P0M2|=0x10
#define P05_PUSHPULL_MODE      P0M1&=0xDF;P0M2|=0x20
#define P06_PUSHPULL_MODE      P0M1&=0xBF;P0M2|=0x40
#define P07_PUSHPULL_MODE      P0M1&=0x7F;P0M2|=0x80
#define P10_PUSHPULL_MODE      P1M1&=0xFE;P1M2|=0x01
#define P11_PUSHPULL_MODE      P1M1&=0xFD;P1M2|=0x02
#define P12_PUSHPULL_MODE      P1M1&=0xFB;P1M2|=0x04
#define P13_PUSHPULL_MODE      P1M1&=0xF7;P1M2|=0x08
#define P14_PUSHPULL_MODE      P1M1&=0xEF;P1M2|=0x10
#define P15_PUSHPULL_MODE      P1M1&=0xDF;P1M2|=0x20
#define P16_PUSHPULL_MODE      P1M1&=0xBF;P1M2|=0x40
#define P17_PUSHPULL_MODE      P1M1&=0x7F;P1M2|=0x80
#define P30_PUSHPULL_MODE      P3M1&=0xFE;P3M2|=0x01
#define GPIO1_PUSHPULL_MODE    P1M1&=0xFE;P1M2|=0x01
//------------------- Define Port as Input Only mode -------------------
#define P00_INPUT_MODE         P0M1|=0x01;P0M2&=0xFE
#define P01_INPUT_MODE         P0M1|=0x02;P0M2&=0xFD
#define P02_INPUT_MODE         P0M1|=0x04;P0M2&=0xFB
#define P03_INPUT_MODE         P0M1|=0x08;P0M2&=0xF7
#define P04_INPUT_MODE         P0M1|=0x10;P0M2&=0xEF
#define P05_INPUT_MODE         P0M1|=0x20;P0M2&=0xDF
#define P06_INPUT_MODE         P0M1|=0x40;P0M2&=0xBF
#define P07_INPUT_MODE         P0M1|=0x80;P0M2&=0x7F
#define P10_INPUT_MODE         P1M1|=0x01;P1M2&=0xFE
#define P11_INPUT_MODE         P1M1|=0x02;P1M2&=0xFD
#define P12_INPUT_MODE         P1M1|=0x04;P1M2&=0xFB
#define P13_INPUT_MODE         P1M1|=0x08;P1M2&=0xF7
#define P14_INPUT_MODE         P1M1|=0x10;P1M2&=0xEF
#define P15_INPUT_MODE         P1M1|=0x20;P1M2&=0xDF
#define P16_INPUT_MODE         P1M1|=0x40;P1M2&=0xBF
#define P17_INPUT_MODE         P1M1|=0x80;P1M2&=0x7F
#define P30_INPUT_MODE         P3M1|=0x01;P3M2&=0xFE
//-------------------Define Port as Open Drain mode -------------------
#define P00_OPENDRAIN_MODE     P0M1|=0x01;P0M2|=0x01
#define P01_OPENDRAIN_MODE     P0M1|=0x02;P0M2|=0x02
#define P02_OPENDRAIN_MODE     P0M1|=0x04;P0M2|=0x04
#define P03_OPENDRAIN_MODE     P0M1|=0x08;P0M2|=0x08
#define P04_OPENDRAIN_MODE     P0M1|=0x10;P0M2|=0x10
#define P05_OPENDRAIN_MODE     P0M1|=0x20;P0M2|=0x20
#define P06_OPENDRAIN_MODE     P0M1|=0x40;P0M2|=0x40
#define P07_OPENDRAIN_MODE     P0M1|=0x80;P0M2|=0x80
#define P10_OPENDRAIN_MODE     P1M1|=0x01;P1M2|=0x01
#define P11_OPENDRAIN_MODE     P1M1|=0x02;P1M2|=0x02
#define P12_OPENDRAIN_MODE     P1M1|=0x04;P1M2|=0x04
#define P13_OPENDRAIN_MODE     P1M1|=0x08;P1M2|=0x08
#define P14_OPENDRAIN_MODE     P1M1|=0x10;P1M2|=0x10
#define P15_OPENDRAIN_MODE     P1M1|=0x20;P1M2|=0x20
#define P16_OPENDRAIN_MODE     P1M1|=0x40;P1M2|=0x40
#define P17_OPENDRAIN_MODE     P1M1|=0x80;P1M2|=0x80
#define P30_OPENDRAIN_MODE     P3M1|=0x01;P3M2|=0x01
//--------- Define all port as quasi mode ---------
#define ALL_GPIO_QUASI_MODE      P0M1=0;P0M2=0;P1M1=0;P1M2=0;P3M1=0;P3M2=0
#define ALL_GPIO_INPUT_MODE      P0M1=0xFF;P0M2=0;P1M1=0xFF;P1M2=0;P3M1=0xFF;P3M2=0
#define ALL_GPIO_PUSHPULL_MODE   P0M1=0;P0M2=0xFF;P1M1=0;P1M2=0xFF;P3M1=0;P3M2=0xFF

/********************************************************/
/*  <Define rule II> "set or clr"                       */
/********************************************************/
#define set_P00                 P00=1
#define set_P01                 P01=1
#define set_P02                 P02=1
#define set_P03                 P03=1
#define set_P04                 P04=1
#define set_P05                 P05=1
#define set_P06                 P06=1
#define set_P07                 P07=1
                                
#define clr_P00                 P00=0
#define clr_P01                 P01=0
#define clr_P02                 P02=0
#define clr_P03                 P03=0
#define clr_P04                 P04=0
#define clr_P05                 P05=0
#define clr_P06                 P06=0
#define clr_P07                 P07=0

void GPIO_Init(void);


#endif