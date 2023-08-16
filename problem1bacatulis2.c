/*
Buku Siswa IKM Informatika untuk SMA Kelas X 
Bab 7 Algoritma dan Pemrograman Hal. 164
Ayo, Kita Berlatih 3: Menulis dan Memperbaiki Program
Problem 1: Belajar Baca Tulis (pengembangan)
Programmed by : Armansyah, S.Kom, M.Pd
Guru Informatika SMAN Sumatera Selatan 
armansyah@smansumsel.sch.id
Alumni CS50 for Teachers Harvard-Indonesia 2022/2023
Validasi Sertifikat : https://bit.ly/ceksertifikatcs50
Setiap copy-paste dan pengembangan harus mencantumkan informasi HAKI diatas
*/

#include <stdio.h>

int main() {
    int bilangan1, bilangan3;
    float bilangan2;
    
    printf("Masukkan bilangan bulat pertama, bilangan riil kedua, dan bilangan bulat ketiga (dipisahkan oleh spasi):\n");
    scanf("%d %f %d", &bilangan1, &bilangan2, &bilangan3);
    
    printf("\nBilangan yang dimasukkan:\n");
    printf("Bilangan pertama: %d\n", bilangan1);
    printf("Bilangan kedua: %.2f\n", bilangan2);
    printf("Bilangan ketiga: %d\n", bilangan3);
    
    return 0;
}
