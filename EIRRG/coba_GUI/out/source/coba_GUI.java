import processing.core.*; 
import processing.data.*; 
import processing.event.*; 
import processing.opengl.*; 

import meter.*; 

import java.util.HashMap; 
import java.util.ArrayList; 
import java.io.File; 
import java.io.BufferedReader; 
import java.io.PrintWriter; 
import java.io.InputStream; 
import java.io.OutputStream; 
import java.io.IOException; 

public class coba_GUI extends PApplet {


Meter m,n;

public void setup(){
  
  background(0,0,0);
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
public void draw(){
  int value = (int)random(0, 50);
  m.updateMeter(value);
  n.updateMeter(value);
  delay(200);
}
  public void settings() {  size(800,300); }
  static public void main(String[] passedArgs) {
    String[] appletArgs = new String[] { "coba_GUI" };
    if (passedArgs != null) {
      PApplet.main(concat(appletArgs, passedArgs));
    } else {
      PApplet.main(appletArgs);
    }
  }
}
