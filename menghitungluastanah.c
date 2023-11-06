/* 
Problem1 : Menghitung Luas Tanah
Buku Informatika Kelas 10 IKM Hal. 169
Oleh : Armansyah, S.Kom, M.Pd
Guru Informatika SMAN Sumatera Selatan 
armansyah@smansumsel.sch.id
Alumni CS50 for Teachers Harvard-Indonesia 2022/2023
Validasi Sertifikat : https://bit.ly/ceksertifikatcs50
Setiap copy-paste dan pengembangan harus mencantumkan informasi HAKI diatas

*/

#include <stdio.h>

int main() {
    int alas, tinggi;
    double luas;

    // Input alas dan tinggi dari user
    printf("Masukkan panjang alas segitiga: ");
    scanf("%d", &alas);

    printf("Masukkan tinggi segitiga: ");
    scanf("%d", &tinggi);

    // Menghitung luas segitiga
    luas = 0.5 * alas * tinggi;

    // Menampilkan hasil luas tanah dengan dua digit di belakang desimal
    printf("Luas tanah Pak Algor: %.2lf\n", luas);

    return 0;
}
