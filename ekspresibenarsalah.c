/*
Problem 4 : Benar atau Salah
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
    int a = 1, b = 2, c = 3;

    // Ekspresi 1
    int hasilEkspresi1 = (a < b) || (b > c);

    // Ekspresi 2
    int hasilEkspresi2 = (a >= b) || (b != c);

    // Ekspresi 3
    int hasilEkspresi3 = (b == a) && (c > a);

    // Ekspresi 4
    int hasilEkspresi4 = (b >= a) && (b < c) || (c > a);

    // Menampilkan hasil ekspresi
    printf("Hasil Ekspresi 1: %d\n", hasilEkspresi1);
    printf("Hasil Ekspresi 2: %d\n", hasilEkspresi2);
    printf("Hasil Ekspresi 3: %d\n", hasilEkspresi3);
    printf("Hasil Ekspresi 4: %d\n", hasilEkspresi4);

    return 0;
}
