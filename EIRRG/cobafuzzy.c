#include<stdio.h>



float linear_turun(float titik_1,float titik_2, float posisi){
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
int main(){
    float hasil=linear_turun(100, 200,150);
    printf("%f",hasil);
}