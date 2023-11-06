/*
Problem 2 : Menghitung Luas Persegi
Buku Informatika IKM Hal. 169
Oleh : Armansyah, S.Kom, M.Pd
Guru Informatika SMAN Sumatera Selatan 
armansyah@smansumsel.sch.id
Alumni CS50 for Teachers Harvard-Indonesia 2022/2023
Validasi Sertifikat : https://bit.ly/ceksertifikatcs50
Setiap copy-paste dan pengembangan harus mencantumkan informasi HAKI diatas

*/
#include <stdio.h>

int main() {
    double panjangSisi, luasPermukaan;

    // Input panjang sisi dari user
    printf("Masukkan panjang sisi kubus (dalam cm): ");
    scanf("%lf", &panjangSisi);

    // Menghitung luas permukaan kubus
    luasPermukaan = 6 * panjangSisi * panjangSisi;

    // Menampilkan hasil luas permukaan
    printf("Luas permukaan kubus: %.2lf cm^2\n", luasPermukaan);

    return 0;
}
