//Uji tampilan nilai FSR satu kaki
fsr_1=0;
fsr_2=0;
fsr_3=0;
fsr_4=0;

size(512, 512);
textFont(font, 20);
text("FSR 1 :"+fsr_1,10,100);
text("FSR 2 :"+fsr_2,10,120);
text("FSR 3 :"+fsr_3,10,120);
text("FSR 4 :"+fsr_4,10,120);



//Uji tampilan  nilai FSR dua kaki
fsr_5=10;
fsr_6=20;
fsr_7=5;
fsr_8=15;

size(512, 512);
textFont(font, 20);
text("FSR 1 :"+fsr_1,10,100);
text("FSR 2 :"+fsr_2,10,120);
text("FSR 3 :"+fsr_3,10,120);
text("FSR 4 :"+fsr_4,10,120);

//Check SSP atau DSP
sum_kakikiri=fsr_1+fsr_2+fsr_3+fsr_4;
sum_kakikanan=fsr_4+fsr_5+fsr_6+fsr_7+fsr_8;
if (sum_kakikanan>0 && sum_kakikiri>0){
    text("Double Support Phase");
}
else if(sum_kakikiri>0 && sum_kakikanan==0){
    text("Single Support Phase Kiri");
}
else if (sum_kakikanan>0 && sum_kakikiri==0) {
    text("Single Support Phase Kanan")
}
else {
    text("Sensor tidak mendapat tekanan")
}

