 # Trabajo Final de Arquitetura de Hardware : 
Trabajo Final de Arquitetura de Hardware | Universidad EIA

## Requerimientos
* processing | [https://processing.org/download/](https://processing.org/download/)
* arduino  |  [https://www.arduino.cc/en/Main/Software](https://www.arduino.cc/en/Main/Software)


## API
* processing | [https://processing.org/reference/](https://processing.org/reference/)
* arduino | [https://www.arduino.cc/reference/en/](https://www.arduino.cc/reference/en/)

## Uso
 1. Primero asegaurate de cambiar el puerto serial en el archivo __processingFuncional.pde__.
 
 ```
 //Open the serial port for communication with the Arduino
 //Make sure the COM port is correct
 myPort = new Serial(this, "<< el puerto serial >>", 9600);
 ```
  >( para MacOS es /dev/tty.usbmodem14101 & para Windows es COM3 )
  
 --- 
 
 2.  Suba el Sketch __"preubaFuncionalFinal.ino"__  a su Arduino.
 
 ----
 
 3.  Por ultimo, corra el programa __"processingFuncional.pde"__ en el IDE de Processing.  
 ---

## Conexion de Hardware 
<img src="configuration.png" width="500" height ="500">

## Recursos

* https://arduinobasics.blogspot.com/2012/05/mouse-controlling-arduino-leds.html




### Miembros
*  Jeisson Barrera| jbarrera094@gmail.com
*  Kevin Alexander Ibarra | 
*  Mateo Zuluaga Loaiza |zulo30@gmail.com

