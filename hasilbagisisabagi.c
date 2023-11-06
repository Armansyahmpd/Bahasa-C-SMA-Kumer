/*
Problem 3 : Hasil Bagi dan Sisa Pembagian 
Buku Informatika Kurikulum Merdeka, Hal. 169
Oleh : Armansyah, S.Kom, M.Pd
Guru Informatika SMAN Sumatera Selatan 
armansyah@smansumsel.sch.id
Alumni CS50 for Teachers Harvard-Indonesia 2022/2023
Validasi Sertifikat : https://bit.ly/ceksertifikatcs50
Setiap copy-paste dan pengembangan harus mencantumkan informasi HAKI diatas

*/

#include <stdio.h>

int main() {
    long long int a, b;
    long long int hasilPembagian, sisaPembagian;

    // Input dua bilangan positif a dan b
    printf("Masukkan dua bilangan positif a dan b: ");
    scanf("%lld %lld", &a, &b);

    // Menghitung hasil dan sisa pembagian
    hasilPembagian = a / b;
    sisaPembagian = a % b;

    // Menampilkan hasil pembagian
    printf("%lld\n", hasilPembagian);
    
    // Menampilkan sisa pembagian
    printf("%lld\n", sisaPembagian);

    return 0;
}
