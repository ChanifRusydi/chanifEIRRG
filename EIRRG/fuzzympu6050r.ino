#include <math.h>

float ppblimit=0;
float error[2];
error[0]=0;
error[1]= abs(ppblimit-pbrmeasure);
float deltaerror = abs(error[1]-error[0]);



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
}

void fuzzyerror(){
    if(error<20){{

    }
    else if(error>20 && error<40){

    }
}
void fuzzyderror({
    if (deltaerror<2.5){

    }
    else if (deltaerror<5 && deltaerror>2.5)
    {

    }
    else if(deltaerror>5 && deltaerror<7.5){

    }
    else if (deltaerrorr>7.5 && deltaerror<=10)
    {
        /* code */
    }
    
}