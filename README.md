# STM32F769-DiscoProject01
Example project using display and pheriperals

Project settings
----------------

TAB:                  4 blank spaces
Environment:          TouchGFX 4.16.0
                      STMCubeIDE 1.5.1
                      STM32CubeMX 6.2.0
                      ST-link utility 4.6.0, driver dll 5.1.2, CLI.exe 3.6.0
                      
                      
                      
Target
------

Start and run a graphical application with low level services and peripherals up and running, also connected to graphic layer with touch

Low layer peripherals:
----------------------
 * Virtual Com Port for debug direct on USB ST-link connector
 * UART 115200 8N1 interrupt mode Rx and Tx
 * Timer interrupt (should exist a timer tick each 1ms, if usable could be used)
 * GPIO blink a led periodically each 1second. PIN PJ13 (ball B9) and PJ15 (ball M14); Note theese PIN seems to be shared with Vsync_freq2 and render_time2
 * GPIO read a push button to open a menu or other functions connected to actual visualization.
 * GPIO read an external encoder and use in menu to increment or decrement visualized values.
 * Use PWM to control luminosity of an external LED
 * Use on board SPDIF TX and RX connectors to write to/read from.
 * Attach an external CODEC, Texas TLV320AIC3204, for stereo input and output.


Menu:
-----
*Splash screen*, after a couple of seconds show a main menu made of two rows of 4 icons. Push the icons and send a message trough UART, msg to be defined, now could be “pushed ico one”.
Receive a message (to be defined, now could be “1ON”) and change actual state of (on or off) of corresponding icon on the screen.
Receive and audio from codec and TX to SPDIF, receive audio from SPDIF ad listen to codec. You should loopback input to output audio, shorting TX and RX SPDIF connectors.
Push physical button to enter menu or wake up display gone into low power mode after a while that display is not used. Menu is like main screen, max two rows of four icon:
1.	Ico 1 open display brightness, a slider or rotary encoder change brightness
2.	Ico 2 change audio gain, slider or rotary encoder
3.	Ico 3 open a display with a toggle, to activate or disactivate beep on main screen, beep should be added into audio to codec path.

