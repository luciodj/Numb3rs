/*******************************************************************************
  Generated Main File 

  File Name:
    main.c

  Summary:
    This is the main file generated using MPLAB® Code Configurator

  *******************************************************************************/

#include "MCC_Generated_Files/mcc.h"
#include "wave.h"

uint8_t Say( uint8_t i)
{
    unsigned long lc;   // file length
    MFILE* fp;          // file pointer
    char filename[] = "0.wav";

    filename[0] = '0'+i;    // 0..9
    if( ( fp = fopenM( filename, "r")) == NULL) 
        return FError;

    lc = InitWAV( fp);
    Play( fp, lc);
    fcloseM( fp);
    return 0;
}


void main(void)
{
    // initialize the device
    SYSTEM_Initialize();

    while  (1)  // main loop
    {
        if ( mount() != 0)
        {
            uint8_t i;
            
            // look for all numbers in a row
            for( i=0; i<10; i++)
            {
                // wait for button press and release
                while( SW1_GetValue());
                while( !SW1_GetValue());
                LED0_LAT = Say( i);
            } // while 
        }
    }
} // main
