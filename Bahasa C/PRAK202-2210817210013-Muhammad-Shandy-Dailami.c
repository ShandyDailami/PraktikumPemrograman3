#include <stdio.h>

int main(){
    float nilai1, nilai2, result;

    printf("Masukkan angka pertama: ");
    scanf("%f", &nilai1);
    printf("Masukkan angka pertama: ");
    scanf("%f", &nilai2);
    result = nilai1 + nilai2;
    printf("Hasil dari penjumlahan nilai pertama \"%.0f\" dan nilai kedua \"%.1f\" adalah \"%.2f\"",nilai1, nilai2, result);

    return 0;
}