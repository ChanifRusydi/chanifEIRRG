import processing.serial.*;

import meter.*;

Serial port;

Meter m,n;

void setup(){
  size(800,300);
  background(0,0,0);
  port = new Serial(this, "COM", 9600);

  m = new Meter(this, 10,10);
  m.setTitleFontSize(16);
  m.setTitleFontName("Arial");
  m.setTitle("Suhu (C)");

  String[] labelskala = {"0", "10", "20","30", "40","50"};
  m.setScaleLabels(labelskala);
  m.setScaleFontSize(12);

  m.setDisplayDigitalMeterValue(true);
  m.setMaxScaleValue(50);
  m.setMinInputSignal(0);
  m.setMaxInputSignal(50);
  m.setNeedleThickness(2);
 
 int mx=m.getMeterX();
 int my=m.getMeterY();
 
 n = new Meter(this, 390 ,10 );
  
}
void draw(){
  int value = (int)random(0, 50);
  if (port.available >0){
    String val = port.readString();
    String[] datalist= split(val,',');
    int temperature  = float(list[0]);
    int humidity  = float(list[1]);
    m.updateMeter(value);
    n.updateMeter(value);
   
  m.updateMeter(value);
  n.updateMeter(value);
  delay(200);
}
