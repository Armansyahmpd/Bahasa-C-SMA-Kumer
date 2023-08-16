/*
Buku Siswa IKM Informatika untuk SMA Kelas X 
Bab 7 Algoritma dan Pemrograman Hal. 164
Ayo, Kita Berlatih 3: Menulis dan Memperbaiki Program
Problem 1: Belajar Baca Tulis
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
    
    // Membaca tiga jenis bilangan dari input
    scanf("%d %f %d", &bilangan1, &bilangan2, &bilangan3);
    
    // Mencetak kembali bilangan sesuai format yang diberikan
    printf("%d\n", bilangan1);
    printf("%.2f\n", bilangan2);
    printf("%d\n", bilangan3);
    
    return 0;
}
