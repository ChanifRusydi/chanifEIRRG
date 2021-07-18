int xcop;
int ycop;
int leftfootforce=0;
int rightfootforce=0;
float averageforce=(leftfootforce+rightfootforce)/2;


import processing.serial.*;
//grafik kaki kiri
int FSRLeftWidth=100;
int FSRLeftHeight=100;
int FSRLeftXPosition=800;
int FSRLeftYPosition=100;
//grafik kaki kanan
int FSRRightWidth=100;
int FSRRRightWidth=100;
int FSRRightPosition=
Serial myPort;        // The serial port
int xPos = 1;         // horizontal position of the graph
float inByte = 0;

//besaran kaki
int lebarkaki=12;
int panjangkaki=20
int[] forceleft= new int[8];
int[] posisisensorleft = new int[8];
int[] forceright= new int[8];
int[] posisisensorright = new int[8];
for(int i=0;i<force.length;i++){
  leftfootforce+=forceleft[i];
  rightfootforce+=forceright[i];
}
void setup () {
    // set the window size:
   size(1000, 600);

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
  String mode;
 //tentukan mode
 if(leftfootforce>0 && rightfootforce>0){
   xcop=new countCoP(forceleft,forceright,Xpositionleft,Xpositionright);
   ycop=new countCoP();
   mode="Double Support Phase";
 }
 else if (leftfootforce>0 && rightfootforce==0) {
   xcop=
 }
  }

void draw () {
  ilustrasiposisi();
  tulisan();

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
void visualCoP(){
  size(1000,600);
  text("Left Foot",50,15);

  fill(255,255,255);
  rect(20,20,120,200);
  fill(0);
  ellipse(30,30,20,20);
  text("Right Foot",170,15);
  fill(255,255,255);
  rect(160,20,120,200);
}
void tulisan(){


  text(" Gait Phase  : "+mode,24,180);
  //float leftfootforce;
  //float rightfootforce;
  float averageforce=(leftfootforce+rightfootforce)/2;

  //CoP
  String textCoP="CoP Position : ";
  String nilaiCoP=xcop+" , "+ycop;
  text(textCoP+nilaiCoP, 24,200);
  
  String textLeftForce="Force on Left :"
  text(textLeftForc+leftfootforce,24,210);

  String textRightForce="Force on Right :";
  text(textRightForce+rightfootforce,24,220);

  String textaverageforce="Average Force :";
  text(textaverageforce+averageforce,24,220);
}
/* class countCoP(){
  int[] force,posisiX, posisiY;
  countCoP(){
    for(int i=0;i<force.length;i++){
      momenkiri=forceleft[i]*posisisensorleft[i];
      momenkanan=forceright[i]*posisisensorright[i];
    }
      pembilang=momenkanan*rightfootforce+momenkiri*leftfootforce;
      penyebut=leftfootforce+rightfootforce;
    }
  }
  float countCoP(){
    float pembilang=0;
    float penyebut=0;
    if(leftfootforce>0 && rightfootforce>0){ 
      for(int i=0;i<force.length;i++){
        momenkiri=forceleft[i]*posisisensorleft[i];
        momenkanan=forceright[i]*posisisensorright[i];
      }
      pembilang=momenkanan*rightfootforce+momenkiri*leftfootforce;
      penyebut=leftfootforce+rightfootforce;
    }
    else if(leftfootforce==0 || rightfootforce==0){
      for(int i=0;i<force.length();i++){  
        pembilang=force[i]*posisisensor[i]
        penyebut=penyebut+force[i]
      }
    }
    return pembilang/penyebut;
  }
} */
class SSP(){
  int[] force, positionX, positionY;
  SSP(int[] tekanan,int[] posisiX,int posisiY){
    force=force;
    positionX=posisiX;
    positionY=posisiY;
  }
  int calculateCoP(){
    for(int i=0;i<force.length();i++){  
        pembilang=force[i]*posisisensor[i];
        penyebut=penyebut+force[i];
     }
     return pembilang/penyebut;
  
}
class DSP(){
  int[]
  for(int i=0;i<force.length;i++){
      momenkiri=forceleft[i]*posisisensorleft[i];
      momenkanan=forceright[i]*posisisensorright[i];
  }
      pembilang=momenkanan*rightfootforce+momenkiri*leftfootforce;
      penyebut=leftfootforce+rightfootforce;
    }
void grafik(){

}

void ilustrasiposisi(){
  rect(50, 50, lebarkaki, panjangkaki);
  rect(lebarkaki+100, 50, lebarkaki, lebarkaki);
  ellipse(75, 75, 20, 20);
  ellipse(panjangkaki-75, y, width, height);

}