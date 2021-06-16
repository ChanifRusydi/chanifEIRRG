#include <stdio.h>
#include <stdint.h>
float penjumlahan(float a, float b){
    return a+b;
}
int main(){
    printf("Hello World");
    unsigned char i=0;
    for(i=0;i<10;i++){
        printf("%d \n",i);
    }
    
    float hasil=penjumlahan(2,3);
    printf("%f \n",hasil);
}