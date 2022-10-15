#include <stdio.h>

int main() {
    char nama[30], nim[30], kelasParalel[2], tempatTanggalLahir[30],alamat[50], hobby[30], noHP[20];

    printf("\tMasukkan Biodata\n");
    printf("Nama\t\t\t: ");
    gets(nama);
    printf("NIM\t\t\t: ");
    gets(nim);
    printf("Kelas Paralel\t\t: ");
    gets(kelasParalel);
    printf("Tempat/Tanggal Lahir\t: ");
    gets(tempatTanggalLahir);
    printf("Alamat\t\t\t: ");
    gets(alamat);
    printf("Hobby\t\t\t: ");
    gets(hobby);
    printf("No. HP\t\t\t: ");
    gets(noHP);

    printf("\n\n\tBiodata\n");
    printf("Nama\t\t\t: %s\n", nama); 
    printf("NIM\t\t\t: %s\n", nim);
    printf("Kelas Paralel\t\t: %s\n", kelasParalel);
    printf("Tempat/Tanggal Lahir\t: %s\n", tempatTanggalLahir);
    printf("Alamat\t\t\t: %s\n", alamat);
    printf("Hobby\t\t\t: %s\n", hobby);
    printf("No. HP\t\t\t: %s", noHP);

    return 0;
}