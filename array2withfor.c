/*
Buku Siswa IKM Informatika untuk SMA Kelas X 
Bab 7 Algoritma dan Pemrograman Hal. 179
Pengembangan untuk pengenalan Array dan perulangan for
Programmed by : Armansyah, S.Kom, M.Pd
Guru Informatika SMAN Sumatera Selatan 
armansyah@smansumsel.sch.id
Alumni CS50 for Teachers Harvard-Indonesia 2022/2023
Validasi Sertifikat : https://bit.ly/ceksertifikatcs50
Setiap copy-paste dan pengembangan harus mencantumkan informasi HAKI diatas

*/


#include <stdio.h>

void main(){
    // membuat array kosong
    int nilai[5];

    // mengisi array
    nilai[0] = 32;
    nilai[1] = 42;
    nilai[2] = 76;
    nilai[3] = 31;
    nilai[4] = 57;
    nilai[5] = 80;
    nilai[6] = 85;
    nilai[7] = 45;
    nilai[8] = 100;

    // mencetak isi array dengan perulangan
    for(int i; i < 9; i++){
        printf("Nilai ke-1: %d\n", nilai[i]);
    }
}

