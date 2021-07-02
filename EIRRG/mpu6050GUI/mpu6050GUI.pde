import processing.serial.*;
 
int AXWindowWidth

Serial myPort;
int xpos=1;
float inByte=0;
void setup(){
  size(1000,1000);
  println(Serial.list());
//  myPort = new Serial(this, Serial.list()[1],9600);
// myPort.bufferUntil('\n');
 int value = (int)random(0, 200);
}
void draw(){
  stroke(100, 100, 100, 0);
  line(xpos, height, xpos, height-inByte);
  if (xpos>=width){
    xpos=0;
    background(100, 255, 255, 0);
  }
  else {
    xpos++;
  }
}
void serialEvent(Serial myPort){
  String inString = str(random(0, 200));
//  String inString = myPort.readStringUntil('\n');
  if(inString!=null){
    inString=trim(inString);
    inByte=float(inString);
    println(inByte);
    inByte= map(inByte,0,1023,0,height);
  }
}
