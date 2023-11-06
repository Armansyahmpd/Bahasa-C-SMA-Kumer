/*
Pseudocode 1: Menghitung Luas Persegi
Buku Informatika Kurikulum Merdeka, Hal. 144
Oleh : Armansyah, S.Kom, M.Pd
Guru Informatika SMAN Sumatera Selatan 
armansyah@smansumsel.sch.id
Alumni CS50 for Teachers Harvard-Indonesia 2022/2023
Validasi Sertifikat : https://bit.ly/ceksertifikatcs50
Setiap copy-paste dan pengembangan harus mencantumkan informasi HAKI diatas

*/

#include <stdio.h>

int main() {
    double sisi, luas;

    // Meminta input panjang sisi dari pengguna
    printf("Masukkan panjang sisi persegi: ");
    scanf("%lf", &sisi);

    // Menghitung luas persegi
    luas = sisi * sisi;

    // Menampilkan hasil luas persegi
    printf("Luas persegi: %.2lf\n", luas);

    return 0;
}
