#include "xc.h"
#include "mcc_generated_files/mcc.h"
#define _XTAL_FREQ 48000000     // Frecuencia de trabajo 48MHz
void delay_ms(unsigned int milliseconds){
    int i;
    for (i=0; i<milliseconds; i++){
        __delay_ms(1);
    }
}
void main(void)
{
    SYSTEM_Initialize();

    TRISAbits.TRISA0 = 0;
    TRISAbits.TRISA0 = 0;
    while (1)
    {
        if(PORTAbits.RA5 == 1){
            LATAbits.LATA0 = 1;
            __delay_ms(10);    
            LATAbits.LATA0 = 0;
            __delay_ms(10);
        }else{
             LATAbits.LATA0 = 0;
             __delay_ms(10);
        }
        
    }
}
/**
 End of File
*/