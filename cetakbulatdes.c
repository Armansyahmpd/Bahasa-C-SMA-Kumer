/*
Program Cetak Bilangan Bulat dan Desimal
Buku Siswa IKM Informatika untuk SMA Kelas X 
Bab 7 Algoritma dan Pemrograman Hal. 161
Programmed by : Armansyah, S.Kom, M.Pd
Guru Informatika SMAN Sumatera Selatan 
armansyah@smansumsel.sch.id
Alumni CS50 for Teachers Harvard-Indonesia 2022/2023
Validasi Sertifikat : https://bit.ly/ceksertifikatcs50
Setiap copy-paste dan pengembangan harus mencantumkan informasi HAKI diatas

*/

#include <stdio.h>
int main() {
    int a, b;
    float c;
    printf("Input Bilangan:\n");
    scanf("%d %d %f", &a, &b, &c);
    printf("%d %d %.3f\n", a, b, c);
    return 0;
}
