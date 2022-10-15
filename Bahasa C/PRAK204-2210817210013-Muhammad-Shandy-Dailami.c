#include <stdio.h>

int main(){
    float jariJariBejana, tinggiBejana, volume, phi, luas, keliling;
    printf("Masukkan jari-jari bejana: ");
    scanf("%f", &jariJariBejana);
    printf("Masukkan tinggi bejana: ");
    scanf("%f", &tinggiBejana);
    volume = 22 * jariJariBejana * jariJariBejana * tinggiBejana / 7;
    luas = 2 * 22 * jariJariBejana / 7 * (jariJariBejana + tinggiBejana);
    keliling = 2 * 22 * jariJariBejana / 7;
    printf("Volume = %.2f\n", volume);
    printf("Luas = %.2f\n", luas);
    printf("Keliling = %.2f\n", keliling);

    return 0;
}