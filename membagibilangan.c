/*
Pseudocode 3: Membagi Bilangan
Buku Informatika Kurikulum Merdeka, Hal. 145
Oleh : Armansyah, S.Kom, M.Pd
Guru Informatika SMAN Sumatera Selatan 
armansyah@smansumsel.sch.id
Alumni CS50 for Teachers Harvard-Indonesia 2022/2023
Validasi Sertifikat : https://bit.ly/ceksertifikatcs50
Setiap copy-paste dan pengembangan harus mencantumkan informasi HAKI diatas

*/


#include <stdio.h>

int main() {
    float pembilang, penyebut, hasil;

    printf("Masukkan pembilang: ");
    scanf("%f", &pembilang);
    printf("Masukkan penyebut: ");
    scanf("%f", &penyebut);

    if (penyebut == 0) {
        printf("Penyebut tidak boleh nol.\n");
    } else {
        hasil = pembilang / penyebut;
        printf("Hasil pembagian: %.2f\n", hasil);
    }

    return 0;
}
