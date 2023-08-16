/*
Pengembangan program Cetak Bilangan Bulat dan Desimal
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
    
    printf("Masukkan dua angka integer dan satu angka pecahan: ");
    int inputResult = scanf("%d %d %f", &a, &b, &c);
    
    if (inputResult != 3) {
        printf("Input tidak valid. Pastikan Anda memasukkan dua angka integer dan satu angka pecahan.\n");
        return 1; // Keluar dengan kode error
    }
    
    printf("Angka pertama: %d\n", a);
    printf("Angka kedua: %d\n", b);
    printf("Angka pecahan: %.3f\n", c);
    
    return 1;
}
