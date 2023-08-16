/*

Aktivitas SAP-K11-09: Latihan Karakter dan String
Buku Siswa IKM Informatika untuk SMA Kelas XI Hal. 52
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

int main() {
    char input[100];
    printf("Masukkan string atau karakter: ");
    scanf("%s", input);

    int len = strlen(input);

    printf("Hasil pembalikan: ");
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", input[i]);
    }
    
    printf("\n");
    return 0;
}
