
import processing.serial.*;

// Global variables
int new_sX, old_sX;
int new_sY, old_sY;

int nX, nY;
Serial myPort;

// Setup the Processing Canvas
void setup(){
  size( 800, 400 );
  strokeWeight( 20 );
 
  //Open the serial port for communication with the Arduino
   //Make sure the COM port is correct
  myPort = new Serial(this, "/dev/tty.usbmodem14101", 9600);
  myPort.bufferUntil('\n'); 
}

// Draw the Window on the computer screen
void draw(){
  
  // Fill canvas grey
  background( 100 );
    
  // Set the stroke colour to white
  stroke(255); 
  
  // Draw a circle at the mouse location
  ellipse( nX, nY, 10, 10 );

  //Draw Line from the top of the page to the bottom of the page
  //in line with the mouse.
  line(nX,0,nX,height);  
}


// Get the new mouse location and send it to the arduino
void mouseMoved(){
  nX = mouseX;
  nY = mouseY; 
  
  //map the mouse x coordinates to the LEDs on the Arduino.
  new_sX=(int)map(nX,0,800,0,16);
  
   //map the mouse y coordinates to the LEDs on the Arduino.
  new_sY=(int)map(nY,0,400,0,2);
  

  if(new_sX==old_sX){
   //do anything
  } else {
    //only send values to the Arduino when the new X coordinates are different.
       old_sX = new_sX;
  }
  
   if(new_sY==old_sY){
    //do anything
  } else {
    //only send values to the Arduino when the new X coordinates are different.
       old_sY = new_sY;
  }
  
}

void keyPressed(){
   if(keyPressed){
     if(old_sX==1 || old_sX==2 || old_sX==3 || old_sX==4 || old_sX==5 || old_sX==6 || old_sX==7 || old_sX==8 || old_sX==9 || old_sX==0){
      myPort.write(key+"0"+""+old_sX+""+old_sY);
     }else{
       myPort.write(key+""+old_sX+""+old_sY);
     }
    }
}
