# Counter

Playback of 10 Audio (WAV) files from SD Card (modified LPC board or microSD Click© board) using the 8-bit DAC and OPA.

Need:

* Device: PIC16F1709 (or other PIC16F1 in 20-pin DIP with 8-bit DAC and SPI + OPA)
* Board: PICDEM(tm) Low Pin Count + mikroBUS connector = [Simplicity](https://github.com/luciodj/Simplicity) 
* microSD Click© board or prototyping 
* Debugger: PICkit(tm) 3

## The Basic Idea
1. Add a [MikroBUS](http://www.mikroe.com/mikrobus/) connector to the Simplicity board 
2. Connect a microSD Click© board  (3V)
3. Launch MPLAB X and MPLAB Code Configurator to quickly initialise all the peripherals
4. Play music/voice at 44100Hz 8-bit mono)...


## Limitations
* Play 8-bit mono files only, with extension WAV 
* Won't play anything sampled faster than 44100Hz
* 8-bit resolution means less than 80dB dynamic range (FM radio or worse), wanna try with a 10-bit DAC (PIC16F1679)?

## Related Projects and Demos

* Check the [Simplicity](https://github.com/luciodj/Simplicity) project for more demo like this using the MPLAB Code Configurator and the MikroElektronika Click(tm) boards.
