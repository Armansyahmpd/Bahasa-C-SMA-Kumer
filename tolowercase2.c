/*

Aktivitas SAP-K11-09: Latihan Karakter dan String
Buku Siswa IKM Informatika untuk SMA Kelas XI Hal. 51
Program akan membaca sebuah string, mengubahnya ke dalam huruf non kapital, lalu mencetaknya kelayar
Dalam bahasa C dengan pengembangan pembacaan string setelah spasi
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

void toLowerCase(char *str) {
    while (*str) {
        if (!isspace(*str)) {
            *str = tolower(*str);
        }
        str++;
    }
}

int main() {
    char input[100];
    printf("Masukkan sebuah string: ");
    
    // Menggunakan fungsi scanf dengan format %[^\n] untuk membaca baris lengkap
    scanf(" %[^\n]", input);

    // Mengubah karakter yang bukan spasi menjadi huruf kecil
    toLowerCase(input);

    printf("Hasil: %s\n", input);

    return 0;
}
