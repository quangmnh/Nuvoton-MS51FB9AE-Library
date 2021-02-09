/*--------------------------------------------------------------------------
ms51.h

Header file for Nuvoton ms51
--------------------------------------------------------------------------*/
#ifndef MS51_H_
#define MS51_H_
__sfr __at(0x80) P0;//					= 0x80;
__sfr __at(0x81) SP;//					= 0x81;
__sfr __at(0x82) DPL;//					= 0x82;
__sfr __at(0x83) DPH;//					= 0x83;
__sfr __at(0x84) RCTRIM0;//			= 0x84;
__sfr __at(0x85) RCTRIM1;//			= 0x85;	
__sfr __at(0x86) RWK;//         = 0x86;
__sfr __at(0x87) PCON;//        = 0x87;

__sfr __at(0x88) TCON;//        = 0x88;
__sfr __at(0x89) TMOD;//        = 0x89;
__sfr __at(0x8A) TL0;//         = 0x8A;
__sfr __at(0x8B) TL1;//         = 0x8B;
__sfr __at(0x8C) TH0;//         = 0x8C;
__sfr __at(0x8D) TH1;//         = 0x8D;
__sfr __at(0x8E) CKCON;//       = 0x8E;
__sfr __at(0x8F) WKCON;//       = 0x8F;

__sfr __at(0x90) P1;//          = 0x90;
__sfr __at(0x91) SFRS;//        = 0x91; //TA Protection
__sfr __at(0x92) CAPCON0;//     = 0x92;
__sfr __at(0x93) CAPCON1;//     = 0x93;
__sfr __at(0x94) CAPCON2;//     = 0x94;
__sfr __at(0x95) CKDIV;//       = 0x95;
__sfr __at(0x96) CKSWT;//       = 0x96; //TA Protection
__sfr __at(0x97) CKEN;//        = 0x97; //TA Protection

__sfr __at(0x98) SCON;//        = 0x98;
__sfr __at(0x99) SBUF;//        = 0x99;
__sfr __at(0x9A) SBUF_1;//      = 0x9A;
__sfr __at(0x9B) EIE;//         = 0x9B;
__sfr __at(0x9C) EIE1;//        = 0x9C;
__sfr __at(0x9F) CHPCON;//      = 0x9F; //TA Protection

__sfr __at(0xA0) P2;//          = 0xA0;
__sfr __at(0xA2) AUXR1;//       = 0xA2;
__sfr __at(0xA3) BODCON0;//     = 0xA3; //TA Protection
__sfr __at(0xA4) IAPTRG;//      = 0xA4; //TA Protection
__sfr __at(0xA5) IAPUEN;//      = 0xA5;	//TA Protection
__sfr __at(0xA6) IAPAL;//       = 0xA6;
__sfr __at(0xA7) IAPAH;//       = 0xA7;

__sfr __at(0xA8) IE;//          = 0xA8;
__sfr __at(0xA9) SADDR;//       = 0xA9;
__sfr __at(0xAA) WDCON;//       = 0xAA; //TA Protection
__sfr __at(0xAB) BODCON1;//     = 0xAB; //TA Protection
__sfr __at(0xAC) P3M1;//        = 0xAC;
__sfr __at(0xAC) P3S;//         = 0xAC; //Page1
__sfr __at(0xAD) P3M2;//        = 0xAD;
__sfr __at(0xAD) P3SR;//        = 0xAD; //Page1
__sfr __at(0xAE) IAPFD;//       = 0xAE;
__sfr __at(0xAF) IAPCN;//       = 0xAF;

__sfr __at(0xB0) P3;//          = 0xB0;
__sfr __at(0xB1) P0M1;//        = 0xB1;
__sfr __at(0xB1) P0S;//         = 0xB1; //Page1
__sfr __at(0xB2) P0M2;//        = 0xB2;
__sfr __at(0xB2) P0SR;//        = 0xB2; //Page1
__sfr __at(0xB3) P1M1;//        = 0xB3;
__sfr __at(0xB3) P1S;//         = 0xB3; //Page1
__sfr __at(0xB4) P1M2;//        = 0xB4;
__sfr __at(0xB4) P1SR;//        = 0xB4; //Page1
__sfr __at(0xB5) P2S;//         = 0xB5; 
__sfr __at(0xB7) IPH;//         = 0xB7;
__sfr __at(0xB7) PWMINTC;//			= 0xB7;	//Page1

__sfr __at(0xB8) IP;//          = 0xB8;
__sfr __at(0xB9) SADEN ;//      = 0xB9;
__sfr __at(0xBA) SADEN_1 ;//    = 0xBA;
__sfr __at(0xBB) SADDR_1 ;//    = 0xBB;
__sfr __at(0xBC) I2DAT;//       = 0xBC;
__sfr __at(0xBD) I2STAT;//      = 0xBD;
__sfr __at(0xBE) I2CLK;//       = 0xBE;
__sfr __at(0xBF) I2TOC;//       = 0xBF;

__sfr __at(0xC0) I2CON;//       = 0xC0;
__sfr __at(0xC1) I2ADDR;//      = 0xC1;
__sfr __at(0xC2) ADCRL;//       = 0xC2;
__sfr __at(0xC3) ADCRH;//       = 0xC3;
__sfr __at(0xC4) T3CON;//       = 0xC4;
__sfr __at(0xC4) PWM4H;//       = 0xC4; //Page1
__sfr __at(0xC5) RL3;//         = 0xC5;
__sfr __at(0xC5) PWM5H;//       = 0xC5;	//Page1
__sfr __at(0xC6) RH3;//         = 0xC6;
__sfr __at(0xC6) PIOCON1;//     = 0xC6; //Page1
__sfr __at(0xC7) TA;//          = 0xC7;

__sfr __at(0xC8) T2CON;//       = 0xC8;
__sfr __at(0xC9) T2MOD;//       = 0xC9;
__sfr __at(0xCA) RCMP2L;//      = 0xCA;
__sfr __at(0xCB) RCMP2H;//      = 0xCB;
__sfr __at(0xCC) TL2;//         = 0xCC; 
__sfr __at(0xCC) PWM4L;//       = 0xCC; //Page1
__sfr __at(0xCD) TH2;//         = 0xCD;
__sfr __at(0xCD) PWM5L;//       = 0xCD; //Page1
__sfr __at(0xCE) ADCMPL;//      = 0xCE;
__sfr __at(0xCF) ADCMPH;//      = 0xCF;

__sfr __at(0xD0) PSW;//         = 0xD0;
__sfr __at(0xD1) PWMPH;//       = 0xD1;
__sfr __at(0xD2) PWM0H;//				= 0xD2;
__sfr __at(0xD3) PWM1H;//				= 0xD3;
__sfr __at(0xD4) PWM2H;//				= 0xD4;
__sfr __at(0xD5) PWM3H;//				= 0xD5;
__sfr __at(0xD6) PNP;//					= 0xD6;
__sfr __at(0xD7) FBD;//					= 0xD7;

__sfr __at(0xD8) PWMCON0;//			= 0xD8;
__sfr __at(0xD9) PWMPL;//       = 0xD9;
__sfr __at(0xDA) PWM0L;//				= 0xDA;
__sfr __at(0xDB) PWM1L;//				= 0xDB;
__sfr __at(0xDC) PWM2L;//				= 0xDC;
__sfr __at(0xDD) PWM3L;//				= 0xDD;
__sfr __at(0xDE) PIOCON0;//			= 0xDE;
__sfr __at(0xDF) PWMCON1;//     = 0xDF;

__sfr __at(0xE0) ACC;//         = 0xE0;
__sfr __at(0xE1) ADCCON1;//     = 0xE1;
__sfr __at(0xE2) ADCCON2;//     = 0xE2;
__sfr __at(0xE3) ADCDLY;//      = 0xE3;
__sfr __at(0xE4) C0L;//         = 0xE4;
__sfr __at(0xE5) C0H;//         = 0xE5;
__sfr __at(0xE6) C1L;//         = 0xE6;
__sfr __at(0xE7) C1H;//         = 0xE7;

__sfr __at(0xE8) ADCCON0;//     = 0xE8;
__sfr __at(0xE9) PICON;//       = 0xE9;
__sfr __at(0xEA) PINEN;//       = 0xEA;
__sfr __at(0xEB) PIPEN;//       = 0xEB;
__sfr __at(0xEC) PIF;//         = 0xEC;
__sfr __at(0xED) C2L;//         = 0xED;
__sfr __at(0xEE) C2H;//         = 0xEE;
__sfr __at(0xEF) EIP;//         = 0xEF;

__sfr __at(0xF0) B;//           = 0xF0;
__sfr __at(0xF1) CAPCON3;//			= 0xF1;
__sfr __at(0xF2) CAPCON4;//			= 0xF2;
__sfr __at(0xF3) SPCR;//        = 0xF3;
__sfr __at(0xF3) SPCR2;//				= 0xF3; //Page1
__sfr __at(0xF4) SPSR;//        = 0xF4;
__sfr __at(0xF5) SPDR;//        = 0xF5;
__sfr __at(0xF6) AINDIDS;//			= 0xF6;
__sfr __at(0xF7) EIPH;//        = 0xF7;

__sfr __at(0xF8) SCON_1;//      = 0xF8;
__sfr __at(0xF9) PDTEN;//       = 0xF9; //TA Protection
__sfr __at(0xFA) PDTCNT;//      = 0xFA; //TA Protection
__sfr __at(0xFB) PMEN;//        = 0xFB;
__sfr __at(0xFC) PMD;//         = 0xFC;
__sfr __at(0xFE) EIP1;//        = 0xFE;
__sfr __at(0xFF) EIPH1;//       = 0xFF;

/*  BIT Registers  */
/*  SCON_1  */
__sbit __at(0xFF) SM0_1;//      = SCON_1^7;
__sbit __at(0xFF) FE_1;//       = SCON_1^7; 
__sbit __at(0xFE) SM1_1;//      = SCON_1^6; 
__sbit __at(0xFD) SM2_1;//      = SCON_1^5; 
__sbit __at(0xFC) REN_1;//      = SCON_1^4; 
__sbit __at(0xFB) TB8_1;//      = SCON_1^3; 
__sbit __at(0xFA) RB8_1;//      = SCON_1^2; 
__sbit __at(0xF9) TI_1;//       = SCON_1^1; 
__sbit __at(0xF8) RI_1;//       = SCON_1^0; 

/*  ADCCON0  */
__sbit __at(0xEF) ADCF;//       = ADCCON0^7;
__sbit __at(0xEE) ADCS;//       = ADCCON0^6;
__sbit __at(0xED) ETGSEL1;//    = ADCCON0^5;
__sbit __at(0xEC) ETGSEL0;//    = ADCCON0^4;
__sbit __at(0xEB) ADCHS3;//     = ADCCON0^3;
__sbit __at(0xEA) ADCHS2;//     = ADCCON0^2;
__sbit __at(0xE9) ADCHS1;//     = ADCCON0^1;
__sbit __at(0xE8) ADCHS0;//     = ADCCON0^0;

/*  PWMCON0  */
__sbit __at(0xDF) PWMRUN;//     = PWMCON0^7;
__sbit __at(0xDE) LOAD;//       = PWMCON0^6;
__sbit __at(0xDD) PWMF;//       = PWMCON0^5;
__sbit __at(0xDC) CLRPWM;//     = PWMCON0^4;


/*  PSW */
__sbit __at(0xD7) CY;//         = PSW^7;
__sbit __at(0xD6) AC;//         = PSW^6;
__sbit __at(0xD5) F0;//         = PSW^5;
__sbit __at(0xD4) RS1;//        = PSW^4;
__sbit __at(0xD3) RS0;//        = PSW^3;
__sbit __at(0xD2) OV;//         = PSW^2;
__sbit __at(0xD0) P;//          = PSW^0;

/*  T2CON  */
__sbit __at(0xCF) TF2;//        = T2CON^7;
__sbit __at(0xCA) TR2;//        = T2CON^2;
__sbit __at(0xC8) CM_RL2;//     = T2CON^0;
 
/*  I2CON  */
__sbit __at(0xC6) I2CEN;//      = I2CON^6;
__sbit __at(0xC5) STA;//        = I2CON^5;
__sbit __at(0xC4) STO;//        = I2CON^4;
__sbit __at(0xC3) SI;//         = I2CON^3;
__sbit __at(0xC2) AA;//         = I2CON^2;
__sbit __at(0xC0) I2CPX;//	= I2CON^0;

/*  IP  */  
__sbit __at(0xBE) PADC;//       = IP^6;
__sbit __at(0xBD) PBOD;//       = IP^5;
__sbit __at(0xBC) PS;//         = IP^4;
__sbit __at(0xBB) PT1;//        = IP^3;
__sbit __at(0xBA) PX1;//        = IP^2;
__sbit __at(0xB9) PT0;//        = IP^1;
__sbit __at(0xB8) PX0;//        = IP^0;

/*  P3  */  
__sbit __at(0xB0) P30;//		= P3^0;


/*  IE  */
__sbit __at(0xAF) EA;//         = IE^7;
__sbit __at(0xAE) EADC;//       = IE^6;
__sbit __at(0xAD) EBOD;//       = IE^5;
__sbit __at(0xAC) ES;//         = IE^4;
__sbit __at(0xAB) ET1;//        = IE^3;
__sbit __at(0xAA) EX1;//        = IE^2;
__sbit __at(0xA9) ET0;//        = IE^1;
__sbit __at(0xA8) EX0;//        = IE^0;

/*  P2  */ 
__sbit __at(0xA0) P20;//        = P2^0;

/*  SCON  */
__sbit __at(0x9F) SM0;//        = SCON^7;
__sbit __at(0x9F) FE;//         = SCON^7; 
__sbit __at(0x9E) SM1;//        = SCON^6; 
__sbit __at(0x9D) SM2;//        = SCON^5; 
__sbit __at(0x9C) REN;//        = SCON^4; 
__sbit __at(0x9B) TB8;//        = SCON^3; 
__sbit __at(0x9A) RB8;//        = SCON^2; 
__sbit __at(0x99) TI;//         = SCON^1; 
__sbit __at(0x98) RI;//         = SCON^0; 

/*  P1  */     
__sbit __at(0x97) P17;//	= P1^7;
__sbit __at(0x96) P16;//	= P1^6;
__sbit __at(0x96) TXD_1;//	= P1^6; 
__sbit __at(0x95) P15;//	= P1^5;
__sbit __at(0x94) P14;//	= P1^4;
__sbit __at(0x94) SDA;//	= P1^4;    
__sbit __at(0x93) P13;//	= P1^3;
__sbit __at(0x93) SCL;//	= P1^3;  
__sbit __at(0x92) P12;//        = P1^2; 
__sbit __at(0x91) P11;//        = P1^1;
__sbit __at(0x90) P10;//        = P1^0;

/*  TCON  */
__sbit __at(0x8F) TF1;//				= TCON^7;
__sbit __at(0x8E) TR1;//				= TCON^6;
__sbit __at(0x8D) TF0;//				= TCON^5;
__sbit __at(0x8C) TR0;//				= TCON^4;
__sbit __at(0x8B) IE1;//				= TCON^3;
__sbit __at(0x8A) IT1;//				= TCON^2;
__sbit __at(0x89) IE0;//				= TCON^1;
__sbit __at(0x88) IT0;//				= TCON^0;

/*  P0  */  

__sbit __at(0x87) P07;//				= P0^7;
__sbit __at(0x87) RXD;//				= P0^7;
__sbit __at(0x86) P06;//				= P0^6;
__sbit __at(0x86) TXD;//				= P0^6;
__sbit __at(0x85) P05;//				= P0^5;
__sbit __at(0x84) P04;//				= P0^4;
__sbit __at(0x84) STADC;//				= P0^4;
__sbit __at(0x83) P03;//				= P0^3;
__sbit __at(0x82) P02;//				= P0^2;
__sbit __at(0x82) RXD_1;//				= P0^2;
__sbit __at(0x81) P01;//				= P0^1;
__sbit __at(0x81) MISO;//				= P0^1;
__sbit __at(0x80) P00;//				= P0^0;
__sbit __at(0x80) MOSI;//				= P0^0;

#endif
