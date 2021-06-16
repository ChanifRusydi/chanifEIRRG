/*======================
 Wangready_Fuzzy.c
wangready.wordpress.com
DAFTAR PUSTAKA:
-Suyanto. 2007.“Artificial Intelegent; Searching, Reasoning, Planing, and Learning”. Penerbit Informatika. Bandung.
-http://en.wikipedia.org/wiki/Fuzzy_logic
-Kusumadewi,Sri.Hartati,Sri.2010."Neuro-Fuzzy: Integrasi Sistem Fuzzy & Jaringan Syaraf Edisi 2".Graha Ilmu.Yogyakarta.
-Kuswadi,Son.2007."Kendali Cerdas: Teori dan Aplikasi Praktisnya".Penerbit ANDI.Yogyakarta.
======================*/
#include <math.h>
#include <stdio.h>
#define JUMLAH_OUTPUT 9
#define AND 0
#define OR  1
 
float   max_value[JUMLAH_OUTPUT],
        min_value[JUMLAH_OUTPUT];
 
float segitiga(float a, float b, float c, float CRISP)
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
 
 float trapesium(float a, float b, float c, float d, float CRISP)
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
 
void rule(float var_linguistik1,unsigned char OPERATOR,float var_linguistik2, unsigned char index_output)
{
        switch(OPERATOR)
        {
                case AND :
                        min_value[index_output] = fmin(var_linguistik1,var_linguistik2);
                        break;
                case OR :
                        min_value[index_output] = fmax(var_linguistik1,var_linguistik2);
                        break;
        }
        max_value[index_output] = fmax(min_value[index_output],max_value[index_output]);
}
 
void min_max_init()
{
unsigned char i = 0;
        for(i=0;i<JUMLAH_OUTPUT;i++)
        {
                min_value[i] = 0;
                max_value[i] = 0;
        }
}
 
float weighted_average(float jum_out[])
{
float   num = 0,
        denum = 0;
unsigned char i = 0;
 
        for(i=0;i<JUMLAH_OUTPUT;i++)
        {
                num += (jum_out[i]*max_value[i]);
                denum += max_value[i];
        }
        return(num/denum);
}
int main() {
    float variabel1=segitiga(1,3,5,4);
    float variabel2=trapesium(1,2,3,4,2.5);
    for(int i=0; i<JUMLAH_OUTPUT;i++){
        rule(variabel1,0,variabel2,i);
        printf("%f %f\n",min_value[i],max_value[i]);
    }
    min_max_init();
    float weight=3.2;
    printf("%f",weighted_average(weight));
}