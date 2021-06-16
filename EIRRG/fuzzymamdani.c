#include <stdio.h>
#include <stdlib.h>

float permintaan, persediaan;
float permSepi, permSedang, permRamai;
float persSedikit, persSetengah, persBanyak;

float rul1, rul2, rul3, rul4, rul5, rul6, rul7, rul8, rul9;
float z1, z2, z3, z4, z5a, z5b, z6a, z6b, z7, z8a, z8b, z9;

void uPermsepi(){
if (permintaan < 10 ) {permSepi = 1;}
else if (permintaan >= 10 && permintaan < 15){ permSepi = (15 - permintaan) / 5;}
else if (permintaan >= 15) {permSepi = 0;}
}

void uPermsedang(){
if (permintaan < 10 ) {permSedang = 0;}
else if (permintaan >= 10 && permintaan < 15){ permSedang = (permintaan - 10) / 5;}
else if (permintaan >= 15 && permintaan < 20){ permSedang = (20 - permintaan) / 5;}
else if (permintaan >= 20) {permSedang = 0;}
}

void uPermramai(){
if (permintaan < 15 ) {permRamai = 0;}
else if (permintaan >= 15 && permintaan < 20){ permRamai = (permintaan - 15) / 5;}
else if (permintaan >= 20) {permRamai = 1;}
}

void uPerssedikit(){
if (persediaan < 25 ) {persSedikit = 1;}
else if (persediaan >= 25 && persediaan < 50){ persSedikit = (50 - persediaan) / 25;}
else if (persediaan >= 50) {persSedikit = 0;}
}

void uPerssetengah(){
if (persediaan < 25 ) {persSetengah = 0;}
else if (persediaan >= 25 && persediaan < 50){ persSetengah = (persediaan - 25) / 25;}
else if (persediaan >= 50 && persediaan < 75){ persSetengah = (75 - persediaan) / 25;}
else if (persediaan >= 75) {persSetengah = 0;}
}

void uPersbanyak(){
if (persediaan < 50 ) {persBanyak = 0;}
else if (persediaan >= 50 && persediaan < 75){ persBanyak = (persediaan - 50) / 25;}
else if (persediaan >= 75) {persBanyak = 1;}
}

void fuzzyfikasi(){
uPermsepi();
uPermsedang();
uPermramai();
uPerssedikit();
uPerssetengah();
uPersbanyak();
}

float min (float a, float b){
if (a < b){
    return a;
}
else if (b < a){
    return b;
}

else {
    return a;
}
}

void rule (){
fuzzyfikasi();
//If permintaan sepi and persediaan sedikit then produksi small
rul1 = min (permSepi, persSedikit);
z1 = 25 - (10*rul1);
//If permintaan sepi and persediaan setengah then produksi small
rul2 = min (permSepi, persSetengah);
z2 = 25 - (10*rul2);
//If permintaan sepi and persediaan banyak then produksi small
rul3 = min(permSepi, persBanyak);
z3 = 25 - (10*rul3);
//If permintaan sedang and persediaan sedikit then produksi small
rul4 = min(permSedang, persSedikit);
z4 = 25 - (10*rul4);
//If permintaan sedang and persediaan setengah then produksi medium
rul5 = min(permSedang, persSetengah);
z5a = (10*rul5) + 15;
z5b = 35 - (10*rul5);
//If permintaan sedang and persediaan banyak then produksi medium
rul6 = min(permSedang, persBanyak);
z6a = (10*rul6) + 15;
z6b = 35 - (10*rul6);
//If permintaan ramai and persediaan sedikit then produksi small
rul7 = min(permRamai, persSedikit);
z7 = 25 - (10*rul7);
//If permintaan ramai and persediaan setengah then produksi medium
rul8 = min(permRamai, persSetengah);
z8a = (10*rul8) + 15;
z8b = 35 - (10*rul8);
//If permintaan ramai and persediaan banyak then produksi large
rul9 = min(permRamai, persBanyak);
z9 = (10*rul9) + 25;
}

float defuzyfikasi(){
rule();

float A = ((rul1 *z1) + (rul2 *z2) + (rul3 *z3) + (rul4 *z4) + (rul5 *z5a) + (rul5 *z5b) + (rul6 *z6a)+ (rul6 *z6b)+ (rul7 *z7)+ (rul8 *z8a)+ (rul8 *z8a) + + (rul9 *z9));
float B = rul1+rul2+rul3+rul4+rul5+rul6+rul7+rul8+rul9;
printf("\nA :%f", A);
printf("\nB :%f", B);
return A/B;
}

int main()
{
    printf("Masukan Jumlah Permintaan :");
    scanf("%f", &permintaan);
    printf("Masukan Jumlah Persediaan :");
    scanf("%f", &persediaan);
    printf("\n\n");
    rule();

    printf("----Hasil Perhitungan Fuzzyfikasi----\n");
    printf("Anggota Permintaan Sepi : ");
    printf("%f\n", permSepi);
    printf("Anggota Permintaan sedang : ");
    printf("%f\n", permSedang);
    printf("Anggota Permintaan ramai : ");
    printf("%f\n", permRamai);

    printf("Anggota Persediaan Sedikit : ");
    printf("%f\n", persSedikit);
    printf("Anggota Persediaan Setengah : ");
    printf("%f\n", persSetengah);
    printf("Anggota Persediaan banyak : ");
    printf("%f\n", persBanyak);
    printf("\n\n");

    printf("----Hasil Perhitungan Min Rule----\n");

    printf("rul1 :%f", rul1);
    printf("\nrul2 :%f", rul2);
    printf("\nrul3 :%f", rul3);
    printf("\nrul4 :%f", rul4);
    printf("\nrul5 :%f", rul5);
    printf("\nrul6 :%f", rul6);
    printf("\nrul7 :%f", rul7);
    printf("\nrul8 :%f", rul8);
    printf("\nrul9 :%f", rul9);
    printf("\n\n");

    printf("----Hasil Perhitungan Output rule----\n");

    printf("z1 :%f", z1);
    printf("\nz2 :%f", z2);
    printf("\nz3 :%f", z3);
    printf("\nz4 :%f", z4);
    printf("\nz5a :%f", z5a);
    printf("\nz5b :%f", z5b);
    printf("\nz6a :%f", z6a);
    printf("\nz6b :%f", z6b);
    printf("\nz7 :%f", z7);
    printf("\nz8a :%f", z8a);
    printf("\nz8b :%f", z8b);
    printf("\nz9 :%f", z9);
    printf("\n\n");

    printf("----Hasil Perhitungan Output Defuzzyfikasi----\n");

    printf("\nDefuzzyfikasi :%f", defuzyfikasi());
    printf("\n\n");

    printf("-------Selesai------\n");
    return 0;
}