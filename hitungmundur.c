/*
Pseudocode 4: Menghitung Mundur dari N hingga 1
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
    int N;
    printf("Masukkan nilai N: ");
    scanf("%d", &N);

    while (N > 0) {
        printf("%d\n", N);
        N--;
    }

    return 0;
}
