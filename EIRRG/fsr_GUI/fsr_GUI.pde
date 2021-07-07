int  xcop;
int ycop;
float leftfootforce;
float rightfootforce;
float averageforce=(leftfootforce+rightfootforce)/2;

import processing.serial.*;

int FSRLeftWidth==100;
int FSRLeftHeight=100;
int FSRLeftPosition=800;

int FSRRightWidth=100;
int FSRRightWidth=100;
Serial myPort;        // The serial port
int xPos = 1;         // horizontal position of the graph
float inByte = 0;

int[8] force = new int[8];
int[8] posisisensor = new int[8]
void setup () {
    // set the window size:
   size(400, 300);

    // List all the available serial ports
    // if using Processing 2.1 or later, use Serial.printArray()
   println(Serial.list());

    // I know that the first port in the serial list on my Mac is always my
    // Arduino, so I open Serial.list()[0].
    // Open whatever port is the one you're using.
    myPort = new Serial(this, Serial.list()[0], 9600);

    // don't generate a serialEvent() unless you get a newline character:
    myPort.bufferUntil('\n');

    // set initial background:
    background(0);
  }

void draw () {
    // draw the line:
    stroke(127, 34, 255);
    line(xPos, height, xPos, height - inByte);

    // at the edge of the screen, go back to the beginning:
    if (xPos >= width) {
      xPos = 0;
      background(0);
    } else {
      // increment the horizontal position:
      xPos++;
    }
  }

void serialEvent (Serial myPort) {
    // get the ASCII string:
    String inString = myPort.readStringUntil('\n');

    if (inString != null) {
      // trim off any whitespace:
      inString = trim(inString);
      // convert to an int and map to the screen height:
      inByte = float(inString);
      println(inByte);
      inByte = map(inByte, 0, 1023, 0, height);
    }
  }

void tulisan(){
  int  xcop;
int ycop;
float leftfootforce;
float rightfootforce;
float averageforce=(leftfootforce+rightfootforce)/2;
  //CoP
  String textCoP="CoP Position : ";
  text(textCoP, 24,100);
  
  String textLeftForce="Force on Left Position :"
  text(textLeftForce,24,250);

  String textRightForce="Force on Right :";
  text(textRightForce,24,300);

  String averageforce="Average Force :";
  text(averageforce,24,350);
}
void countCoP(){
  jumlahsensor=8;
  for(int i=0;i<jumlahsensor;i++){
    pembilang=force[i]*posisisensor[i]
  }
}