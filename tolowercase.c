/*

Aktivitas SAP-K11-09: Latihan Karakter dan String
Buku Siswa IKM Informatika untuk SMA Kelas XI Hal. 51
Program akan membaca sebuah string, mengubahnya ke dalam huruf non kapital, lalu mencetaknya kelayar
Dalam bahasa C
Programmed by : Armansyah, S.Kom, M.Pd
Guru Informatika SMAN Sumatera Selatan 
armansyah@smansumsel.sch.id
Alumni CS50 for Teachers Harvard-Indonesia 2022/2023
Validasi Sertifikat : https://bit.ly/ceksertifikatcs50
Setiap copy-paste dan pengembangan harus mencantumkan informasi HAKI diatas

*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char input[100];

    printf("Masukkan sebuah string: ");
    scanf("%s", input);

    for (int i = 0; input[i]; i++) {
        input[i] = tolower(input[i]);
    }

    printf("Hasil: %s\n", input);

    return 0;
}
