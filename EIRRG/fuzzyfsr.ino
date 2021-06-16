
#include <math.h>


int inputpin=A0;
float xn,xze, xp;
float n,yze,yp;
float ruleNN, ruleNZ, ruleNP, ruleZN, ruleZZ, ruleZP, rulePN, rulePZ,rulePP;
float hitungCoP(float fsr1, float fsr2, floa fsr3, float fsr4){
    return xcop;
}
float linear_naik(float titik_1, float titik_2, float input){
    if (input<=titik_1){
        return 0;
    }
    if else (input>titik_1 && input<=titik_2){
        return (input-titik_1)/(titik_2-titik_1);
    }
    else Serial.print("Input diluar jangkauan");
}
float linear_turun(float titik_1, float titik_2, float input){
    if(input<=titik_1){
        return 0;
    }
    else if (input>titik_1 &&input<titik_2){
        return input-titik_1 / titik_2-titik_1;
    }
}
float segitiga(float titik_1, float titik_2, float titik_3, float input){
    if(input==titik_2) return 1;
    else if (input==titik_1 || input==titik_2) return 0;
    else if(input > titik_1 && input<titik_2){
        return (titik_2-input)/(titik_2-titik_1);
    }
    else if(input > titik_2 && input<titik_3){
        return (titik_2-input)/ (titik_3-titik_2);
    }

float weight_average(){
    
}
void fuzzifikasiX(float nilaiinput){
    if (nilaiinput>0 && nilaiinput<6){
        linear_turun(0,6,nilaiinput)
        segitiga()
    }
    else if (nilaiinput> )
}
void setup(){
    pinMode(inputpin, INPUT)
    digital
}

void loop(){
    
    int batas_bawah=0;
    int batas_atasx=12;
    int batas_atasy=20;
}