/*

Aktivitas SAP-K11-09: Latihan Karakter dan String
Buku Siswa IKM Informatika untuk SMA Kelas XI Hal. 51
Membaca banyak string hingga membaca string “STOP”. Setiap string yang dibaca akan diubah ke huruf non kapital dan dicetak.
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

    printf("Masukkan string (ketik 'STOP' dalam huruf kapital untuk berhenti):\n");

    while (1) {
        scanf("%s", input);

        if (strcmp(input, "STOP") == 0) {
            break;
        }

        for (int i = 0; input[i]; i++) {
            input[i] = tolower(input[i]);
        }

        printf("%s\n", input);
    }

    return 0;
}
