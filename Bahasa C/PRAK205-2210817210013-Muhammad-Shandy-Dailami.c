#include <stdio.h>
#include <math.h>

int main(){
    float tinggi, miring, alas, keliling, luas;
    printf("Masukkan tinggi: ");
    scanf("%f", &tinggi);
    printf("Masukkan miring: ");
    scanf("%f", &miring);
    alas = sqrt(miring*miring-tinggi*tinggi);
    keliling = tinggi + miring + alas;
    luas = 0.5 * alas * tinggi;
    printf("Alas = %.f cm\n", alas);
    printf("Tinggi = %.f cm\n", tinggi);
    printf("Keliling = %.f cm\n", keliling);
    printf("Luas = %.f cm^2", luas);

    return 0;
}