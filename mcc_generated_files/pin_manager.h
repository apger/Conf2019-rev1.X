/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using MPLAB(c) Code Configurator

  @Description:
    This header file provides implementations for pin APIs for all pins selected in the GUI.
    Generation Information :
        Product Revision  :  MPLAB(c) Code Configurator - 4.26
        Device            :  PIC16LF15345
        Version           :  1.01
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.35
        MPLAB             :  MPLAB X 3.40

    Copyright (c) 2013 - 2015 released Microchip Technology Inc.  All rights reserved.

    Microchip licenses to you the right to use, modify, copy and distribute
    Software only when embedded on a Microchip microcontroller or digital signal
    controller that is integrated into your product or third party product
    (pursuant to the sublicense terms in the accompanying license agreement).

    You should refer to the license agreement accompanying this Software for
    additional information regarding your rights and obligations.

    SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
    EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
    MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
    IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
    CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
    OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
    INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
    CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
    SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
    (INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.

*/


#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set LED9 aliases
#define LED9_TRIS               TRISAbits.TRISA0
#define LED9_LAT                LATAbits.LATA0
#define LED9_PORT               PORTAbits.RA0
#define LED9_WPU                WPUAbits.WPUA0
#define LED9_OD                ODCONAbits.ODCA0
#define LED9_ANS                ANSELAbits.ANSA0
#define LED9_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define LED9_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define LED9_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define LED9_GetValue()           PORTAbits.RA0
#define LED9_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define LED9_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define LED9_SetPullup()      do { WPUAbits.WPUA0 = 1; } while(0)
#define LED9_ResetPullup()    do { WPUAbits.WPUA0 = 0; } while(0)
#define LED9_SetPushPull()    do { ODCONAbits.ODCA0 = 1; } while(0)
#define LED9_SetOpenDrain()   do { ODCONAbits.ODCA0 = 0; } while(0)
#define LED9_SetAnalogMode()  do { ANSELAbits.ANSA0 = 1; } while(0)
#define LED9_SetDigitalMode() do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set LED8 aliases
#define LED8_TRIS               TRISAbits.TRISA1
#define LED8_LAT                LATAbits.LATA1
#define LED8_PORT               PORTAbits.RA1
#define LED8_WPU                WPUAbits.WPUA1
#define LED8_OD                ODCONAbits.ODCA1
#define LED8_ANS                ANSELAbits.ANSA1
#define LED8_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define LED8_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define LED8_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define LED8_GetValue()           PORTAbits.RA1
#define LED8_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define LED8_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define LED8_SetPullup()      do { WPUAbits.WPUA1 = 1; } while(0)
#define LED8_ResetPullup()    do { WPUAbits.WPUA1 = 0; } while(0)
#define LED8_SetPushPull()    do { ODCONAbits.ODCA1 = 1; } while(0)
#define LED8_SetOpenDrain()   do { ODCONAbits.ODCA1 = 0; } while(0)
#define LED8_SetAnalogMode()  do { ANSELAbits.ANSA1 = 1; } while(0)
#define LED8_SetDigitalMode() do { ANSELAbits.ANSA1 = 0; } while(0)

// get/set LED7 aliases
#define LED7_TRIS               TRISAbits.TRISA2
#define LED7_LAT                LATAbits.LATA2
#define LED7_PORT               PORTAbits.RA2
#define LED7_WPU                WPUAbits.WPUA2
#define LED7_OD                ODCONAbits.ODCA2
#define LED7_ANS                ANSELAbits.ANSA2
#define LED7_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define LED7_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define LED7_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define LED7_GetValue()           PORTAbits.RA2
#define LED7_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define LED7_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define LED7_SetPullup()      do { WPUAbits.WPUA2 = 1; } while(0)
#define LED7_ResetPullup()    do { WPUAbits.WPUA2 = 0; } while(0)
#define LED7_SetPushPull()    do { ODCONAbits.ODCA2 = 1; } while(0)
#define LED7_SetOpenDrain()   do { ODCONAbits.ODCA2 = 0; } while(0)
#define LED7_SetAnalogMode()  do { ANSELAbits.ANSA2 = 1; } while(0)
#define LED7_SetDigitalMode() do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set LED16 aliases
#define LED16_TRIS               TRISAbits.TRISA4
#define LED16_LAT                LATAbits.LATA4
#define LED16_PORT               PORTAbits.RA4
#define LED16_WPU                WPUAbits.WPUA4
#define LED16_OD                ODCONAbits.ODCA4
#define LED16_ANS                ANSELAbits.ANSA4
#define LED16_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define LED16_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define LED16_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define LED16_GetValue()           PORTAbits.RA4
#define LED16_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define LED16_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define LED16_SetPullup()      do { WPUAbits.WPUA4 = 1; } while(0)
#define LED16_ResetPullup()    do { WPUAbits.WPUA4 = 0; } while(0)
#define LED16_SetPushPull()    do { ODCONAbits.ODCA4 = 1; } while(0)
#define LED16_SetOpenDrain()   do { ODCONAbits.ODCA4 = 0; } while(0)
#define LED16_SetAnalogMode()  do { ANSELAbits.ANSA4 = 1; } while(0)
#define LED16_SetDigitalMode() do { ANSELAbits.ANSA4 = 0; } while(0)

// get/set LED17 aliases
#define LED17_TRIS               TRISAbits.TRISA5
#define LED17_LAT                LATAbits.LATA5
#define LED17_PORT               PORTAbits.RA5
#define LED17_WPU                WPUAbits.WPUA5
#define LED17_OD                ODCONAbits.ODCA5
#define LED17_ANS                ANSELAbits.ANSA5
#define LED17_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define LED17_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define LED17_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define LED17_GetValue()           PORTAbits.RA5
#define LED17_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define LED17_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define LED17_SetPullup()      do { WPUAbits.WPUA5 = 1; } while(0)
#define LED17_ResetPullup()    do { WPUAbits.WPUA5 = 0; } while(0)
#define LED17_SetPushPull()    do { ODCONAbits.ODCA5 = 1; } while(0)
#define LED17_SetOpenDrain()   do { ODCONAbits.ODCA5 = 0; } while(0)
#define LED17_SetAnalogMode()  do { ANSELAbits.ANSA5 = 1; } while(0)
#define LED17_SetDigitalMode() do { ANSELAbits.ANSA5 = 0; } while(0)

// get/set LED3 aliases
#define LED3_TRIS               TRISBbits.TRISB4
#define LED3_LAT                LATBbits.LATB4
#define LED3_PORT               PORTBbits.RB4
#define LED3_WPU                WPUBbits.WPUB4
#define LED3_OD                ODCONBbits.ODCB4
#define LED3_ANS                ANSELBbits.ANSB4
#define LED3_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define LED3_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define LED3_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define LED3_GetValue()           PORTBbits.RB4
#define LED3_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define LED3_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define LED3_SetPullup()      do { WPUBbits.WPUB4 = 1; } while(0)
#define LED3_ResetPullup()    do { WPUBbits.WPUB4 = 0; } while(0)
#define LED3_SetPushPull()    do { ODCONBbits.ODCB4 = 1; } while(0)
#define LED3_SetOpenDrain()   do { ODCONBbits.ODCB4 = 0; } while(0)
#define LED3_SetAnalogMode()  do { ANSELBbits.ANSB4 = 1; } while(0)
#define LED3_SetDigitalMode() do { ANSELBbits.ANSB4 = 0; } while(0)

// get/set LED2 aliases
#define LED2_TRIS               TRISBbits.TRISB5
#define LED2_LAT                LATBbits.LATB5
#define LED2_PORT               PORTBbits.RB5
#define LED2_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define LED2_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define LED2_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define LED2_GetValue()           PORTBbits.RB5
#define LED2_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define LED2_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)

// get/set LED1 aliases
#define LED1_TRIS               TRISBbits.TRISB6
#define LED1_LAT                LATBbits.LATB6
#define LED1_PORT               PORTBbits.RB6
#define LED1_SetHigh()            do { LATBbits.LATB6 = 1; } while(0)
#define LED1_SetLow()             do { LATBbits.LATB6 = 0; } while(0)
#define LED1_Toggle()             do { LATBbits.LATB6 = ~LATBbits.LATB6; } while(0)
#define LED1_GetValue()           PORTBbits.RB6
#define LED1_SetDigitalInput()    do { TRISBbits.TRISB6 = 1; } while(0)
#define LED1_SetDigitalOutput()   do { TRISBbits.TRISB6 = 0; } while(0)

// get/set LED10 aliases
#define LED10_TRIS               TRISBbits.TRISB7
#define LED10_LAT                LATBbits.LATB7
#define LED10_PORT               PORTBbits.RB7
#define LED10_SetHigh()            do { LATBbits.LATB7 = 1; } while(0)
#define LED10_SetLow()             do { LATBbits.LATB7 = 0; } while(0)
#define LED10_Toggle()             do { LATBbits.LATB7 = ~LATBbits.LATB7; } while(0)
#define LED10_GetValue()           PORTBbits.RB7
#define LED10_SetDigitalInput()    do { TRISBbits.TRISB7 = 1; } while(0)
#define LED10_SetDigitalOutput()   do { TRISBbits.TRISB7 = 0; } while(0)

// get/set LED6 aliases
#define LED6_TRIS               TRISCbits.TRISC0
#define LED6_LAT                LATCbits.LATC0
#define LED6_PORT               PORTCbits.RC0
#define LED6_WPU                WPUCbits.WPUC0
#define LED6_OD                ODCONCbits.ODCC0
#define LED6_ANS                ANSELCbits.ANSC0
#define LED6_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define LED6_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define LED6_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define LED6_GetValue()           PORTCbits.RC0
#define LED6_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define LED6_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define LED6_SetPullup()      do { WPUCbits.WPUC0 = 1; } while(0)
#define LED6_ResetPullup()    do { WPUCbits.WPUC0 = 0; } while(0)
#define LED6_SetPushPull()    do { ODCONCbits.ODCC0 = 1; } while(0)
#define LED6_SetOpenDrain()   do { ODCONCbits.ODCC0 = 0; } while(0)
#define LED6_SetAnalogMode()  do { ANSELCbits.ANSC0 = 1; } while(0)
#define LED6_SetDigitalMode() do { ANSELCbits.ANSC0 = 0; } while(0)

// get/set LED5 aliases
#define LED5_TRIS               TRISCbits.TRISC1
#define LED5_LAT                LATCbits.LATC1
#define LED5_PORT               PORTCbits.RC1
#define LED5_WPU                WPUCbits.WPUC1
#define LED5_OD                ODCONCbits.ODCC1
#define LED5_ANS                ANSELCbits.ANSC1
#define LED5_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define LED5_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define LED5_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define LED5_GetValue()           PORTCbits.RC1
#define LED5_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define LED5_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define LED5_SetPullup()      do { WPUCbits.WPUC1 = 1; } while(0)
#define LED5_ResetPullup()    do { WPUCbits.WPUC1 = 0; } while(0)
#define LED5_SetPushPull()    do { ODCONCbits.ODCC1 = 1; } while(0)
#define LED5_SetOpenDrain()   do { ODCONCbits.ODCC1 = 0; } while(0)
#define LED5_SetAnalogMode()  do { ANSELCbits.ANSC1 = 1; } while(0)
#define LED5_SetDigitalMode() do { ANSELCbits.ANSC1 = 0; } while(0)

// get/set LED4 aliases
#define LED4_TRIS               TRISCbits.TRISC2
#define LED4_LAT                LATCbits.LATC2
#define LED4_PORT               PORTCbits.RC2
#define LED4_WPU                WPUCbits.WPUC2
#define LED4_OD                ODCONCbits.ODCC2
#define LED4_ANS                ANSELCbits.ANSC2
#define LED4_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define LED4_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define LED4_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define LED4_GetValue()           PORTCbits.RC2
#define LED4_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define LED4_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define LED4_SetPullup()      do { WPUCbits.WPUC2 = 1; } while(0)
#define LED4_ResetPullup()    do { WPUCbits.WPUC2 = 0; } while(0)
#define LED4_SetPushPull()    do { ODCONCbits.ODCC2 = 1; } while(0)
#define LED4_SetOpenDrain()   do { ODCONCbits.ODCC2 = 0; } while(0)
#define LED4_SetAnalogMode()  do { ANSELCbits.ANSC2 = 1; } while(0)
#define LED4_SetDigitalMode() do { ANSELCbits.ANSC2 = 0; } while(0)

// get/set LED13 aliases
#define LED13_TRIS               TRISCbits.TRISC3
#define LED13_LAT                LATCbits.LATC3
#define LED13_PORT               PORTCbits.RC3
#define LED13_WPU                WPUCbits.WPUC3
#define LED13_OD                ODCONCbits.ODCC3
#define LED13_ANS                ANSELCbits.ANSC3
#define LED13_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define LED13_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define LED13_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define LED13_GetValue()           PORTCbits.RC3
#define LED13_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define LED13_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define LED13_SetPullup()      do { WPUCbits.WPUC3 = 1; } while(0)
#define LED13_ResetPullup()    do { WPUCbits.WPUC3 = 0; } while(0)
#define LED13_SetPushPull()    do { ODCONCbits.ODCC3 = 1; } while(0)
#define LED13_SetOpenDrain()   do { ODCONCbits.ODCC3 = 0; } while(0)
#define LED13_SetAnalogMode()  do { ANSELCbits.ANSC3 = 1; } while(0)
#define LED13_SetDigitalMode() do { ANSELCbits.ANSC3 = 0; } while(0)

// get/set LED14 aliases
#define LED14_TRIS               TRISCbits.TRISC4
#define LED14_LAT                LATCbits.LATC4
#define LED14_PORT               PORTCbits.RC4
#define LED14_WPU                WPUCbits.WPUC4
#define LED14_OD                ODCONCbits.ODCC4
#define LED14_ANS                ANSELCbits.ANSC4
#define LED14_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define LED14_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define LED14_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define LED14_GetValue()           PORTCbits.RC4
#define LED14_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define LED14_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define LED14_SetPullup()      do { WPUCbits.WPUC4 = 1; } while(0)
#define LED14_ResetPullup()    do { WPUCbits.WPUC4 = 0; } while(0)
#define LED14_SetPushPull()    do { ODCONCbits.ODCC4 = 1; } while(0)
#define LED14_SetOpenDrain()   do { ODCONCbits.ODCC4 = 0; } while(0)
#define LED14_SetAnalogMode()  do { ANSELCbits.ANSC4 = 1; } while(0)
#define LED14_SetDigitalMode() do { ANSELCbits.ANSC4 = 0; } while(0)

// get/set LED15 aliases
#define LED15_TRIS               TRISCbits.TRISC5
#define LED15_LAT                LATCbits.LATC5
#define LED15_PORT               PORTCbits.RC5
#define LED15_WPU                WPUCbits.WPUC5
#define LED15_OD                ODCONCbits.ODCC5
#define LED15_ANS                ANSELCbits.ANSC5
#define LED15_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define LED15_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define LED15_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define LED15_GetValue()           PORTCbits.RC5
#define LED15_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define LED15_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define LED15_SetPullup()      do { WPUCbits.WPUC5 = 1; } while(0)
#define LED15_ResetPullup()    do { WPUCbits.WPUC5 = 0; } while(0)
#define LED15_SetPushPull()    do { ODCONCbits.ODCC5 = 1; } while(0)
#define LED15_SetOpenDrain()   do { ODCONCbits.ODCC5 = 0; } while(0)
#define LED15_SetAnalogMode()  do { ANSELCbits.ANSC5 = 1; } while(0)
#define LED15_SetDigitalMode() do { ANSELCbits.ANSC5 = 0; } while(0)

// get/set LED12 aliases
#define LED12_TRIS               TRISCbits.TRISC6
#define LED12_LAT                LATCbits.LATC6
#define LED12_PORT               PORTCbits.RC6
#define LED12_WPU                WPUCbits.WPUC6
#define LED12_OD                ODCONCbits.ODCC6
#define LED12_ANS                ANSELCbits.ANSC6
#define LED12_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define LED12_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define LED12_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define LED12_GetValue()           PORTCbits.RC6
#define LED12_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define LED12_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define LED12_SetPullup()      do { WPUCbits.WPUC6 = 1; } while(0)
#define LED12_ResetPullup()    do { WPUCbits.WPUC6 = 0; } while(0)
#define LED12_SetPushPull()    do { ODCONCbits.ODCC6 = 1; } while(0)
#define LED12_SetOpenDrain()   do { ODCONCbits.ODCC6 = 0; } while(0)
#define LED12_SetAnalogMode()  do { ANSELCbits.ANSC6 = 1; } while(0)
#define LED12_SetDigitalMode() do { ANSELCbits.ANSC6 = 0; } while(0)

// get/set LED11 aliases
#define LED11_TRIS               TRISCbits.TRISC7
#define LED11_LAT                LATCbits.LATC7
#define LED11_PORT               PORTCbits.RC7
#define LED11_WPU                WPUCbits.WPUC7
#define LED11_OD                ODCONCbits.ODCC7
#define LED11_ANS                ANSELCbits.ANSC7
#define LED11_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define LED11_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define LED11_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define LED11_GetValue()           PORTCbits.RC7
#define LED11_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define LED11_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define LED11_SetPullup()      do { WPUCbits.WPUC7 = 1; } while(0)
#define LED11_ResetPullup()    do { WPUCbits.WPUC7 = 0; } while(0)
#define LED11_SetPushPull()    do { ODCONCbits.ODCC7 = 1; } while(0)
#define LED11_SetOpenDrain()   do { ODCONCbits.ODCC7 = 0; } while(0)
#define LED11_SetAnalogMode()  do { ANSELCbits.ANSC7 = 1; } while(0)
#define LED11_SetDigitalMode() do { ANSELCbits.ANSC7 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/