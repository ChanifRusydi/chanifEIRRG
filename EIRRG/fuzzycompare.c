#include <stdio.h>
#include <stdlib.h>

float segitiga1(float a, float b, float c, float CRISP)
{
     if(CRISP < a)return(0);
     else
     {
        if(CRISP <= b)
        {
                if(b == a)
                {
                        return(1);
                }
                else
                {
                        return((CRISP-a)/(b-a));
                }
        }
        else
        {
                if(CRISP <= c)
                {
                        if(c == b)
                        {
                                return(1);
                        }
                        else
                        {
 
                                return(-(CRISP-c)/(c-b));
                        }
                }
                else
                {
                        return(0);
                }
        }
     }
 }
 
 float trapesium1(float a, float b, float c, float d, float CRISP)
{
     if(CRISP < a)return(0);
     else
     {
        if(CRISP <= b)
        {
                if(b == a)
                {
                        return(1);
                }
                else
                {
                        return((CRISP-a)/(b-a));
                }
 
        }
        else
        {
                if(CRISP < c)  return(1);
                else
                {
                        if(CRISP <= d)
                        {
                                if(d == c)
                                {
                                        return(1);
                                }
                                else
                                {
                                        return(-(CRISP-d)/(d-c));
                                }
                        }
                        else
                        {
                                return(0);
                        }
                }
        }
     }
 }

float segitiga2(float titik_1, float titik_2, float titik_3, float posisi){
    if(posisi<=titik_1 || posisi>=titik_3){
        return 0;
    }
    else if(posisi<=titik_2 && posisi>=titik_1) {
       float keanggotaan_segitiga=(posisi-titik_1)/(titik_2-titik_1);
       return keanggotaan_segitiga;
    }
    else if(posisi<=titik_3 && posisi>=titik_2){
       float keanggotaan_segitiga=(titik_2-posisi)/(titik_3-titik_2);
       return keanggotaan_segitiga;
    }

}
//x=posisi
//titik 1,2,3,4 = a,b,c,d
float trapesium2(float titik_1, float titik_2, float titik_3, float titik_4, float posisi){
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
        float keanggotaan_trapesium=(titik_4-posisi)/(titik_4-titik_3);
        return keanggotaan_trapesium;
    }
}


int main(){
    float hasilsegitiga1= segitiga1(1,2,3,1.5);
    float hasiltrapesium1=trapesium1(1,2,3,4,2.5);
    float hasilsegitiga2= segitiga2(1,2,3,1.5);
    float hasiltrapesium2=trapesium2(1,2,3,4,2.5);
    printf("%f %f /n %f %f",hasilsegitiga1, hasiltrapesium1, hasilsegitiga2, hasiltrapesium2);
}