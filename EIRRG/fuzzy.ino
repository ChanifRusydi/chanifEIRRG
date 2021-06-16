#include <stdio.h>
#include <math.h>

int input=5;
int banyaknya_rule=4;
float weight[banyaknya_rule];
float nilai[banyaknya_rule];

//fuzzifikasi
//x=posisi
//titik 1,2,3 = a,b,c
float segitiga(float titik_1, float titik_2, float titik_3 float posisi){
    if(posisi<=a || posisi>=c){
        return 0;
    }
    else if(posisi<=titik_2 && posisi>=titik_1) {
       float keanggotaan_segitiga=(posisi-titik_1)/(titik_2-titik_1);
       return keanggotaan_segitiga;
    }
    else if(posisi<=titik_3 && posisi>=titik_2){
       float keanggotaan_segitiga=titik_2-posisi)/(titik_3-titik_2);
       return keanggotaan_segitiga;
    }

}
//x=posisi
//titik 1,2,3,4 = a,b,c,d
float trapesium(float titik_1, float titik_2, float titik_3, float titik_4, float posisi){
    if(posisi<=titik_3 && posisi>=titik_2){
        return 1;
    }
    else if(posisi<=titik_1 || posisi>=titik_4){
        return  0;
    }
    else if(posisi>titik_1 && posisi<titik_2){
       float keanggotaan_trapesium=(posisi-titik_1)/(titik_2-titik_1);
       return keanggotaan_trapesium;
    }
    else if(posisi>titik_3 && posisi<titik_4){
        float keanggotaan_trapesium=(titik_4-posisi)/(titik_4-titik_3));
        return keanggotaan_trapesium;
    }
}


float linear_naik(float titik_1,float titik_2, float posisi){
    if (posisi>titik_1 && posisi<titik_2){
        float hasil_keanggotaan=(posisi-titik_1)/(titik_2-titik_1);
        return hasil_keanggotaan;
    }
    else if(posisi<=titik_1){
        return 0;
    }
    else if(posisi>titik_2){
        return 1;
    }
}
void linear_turun(float titik_1,float titik_2, float posisi){
    if (posisi>titik_1 && posisi<=titik_2){
        float hasil_keanggotaan= (titik_2-posisi)/(titik_2-titik_1);
        return hasil_keanggotaan;
    }
    else if(posisi==titik_1){
        return 1;
    }
    else if(posisi>titik_2){
        return 0;
    }

}
float bahu_naik(float titik_1, float titik_2, float titik_3, float posisi){
    if (posisi>titik_1 && posisi<=titik_2){
        float hasil_keanggotaan= (titik_3-posisi)/(titik_3-titik_1);
        return hasil_keanggotaan;
    else if(posisi==titik_1 || posisi<<=titik_2){
        return 1;
    }
    else if(posisi>titik_3){
        return 0;
    }
}
//sesuaikan problem
void aturan(int i ,float keanggotaan1, float keanggotaan2, int input_variabel1, int input_variabel2){
    switch (i){
        case 0: 
            weight[i]= fmin(keanggotaan1, keanggotaan2);
            nilai[i]=input_variabel1-input_variabel2;
            break;
        case 1: 
            weight[i]= fmin(variabel1, variabel2)
            nilai[i]=input_variabel1;
            break;
        case 2:
            weight[i]= fmin(variabel1, variabel2)
            nilai[i]=input_variabel1;
        case 3:
            weight[i]= fmin(variabel1, variabel2)
            nilai[i]=.125*input_variabel1-input_variabel2;
    }
}
void weight(){

}
float average_result(){
    float atas=0;
    float bawah=0;
    for(int i=0;i<banyaknya_rule;i++){
        atas=atas+(weight[i]*nilai[i]);
        bawah=bawah+nilai[i]
    }
    return atas/bawah;
}