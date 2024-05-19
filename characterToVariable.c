#include "header.h"

void characterToVariable(int line,int lenght,char * kalimat){
    char string[line][lenght];
    int i = 0;
    int a = 0;
    FILE *input;
    input = fopen("./assets/input/input.txt", "r");
    if (input == NULL) {
        printf("Tidak dapat membuka file...");
        exit(1);
    }

    while (i < line && fgets(string[i], lenght+1, input) != NULL) {
        // Menghapus karakter baru (\n) yang mungkin ada di akhir string
        int j = 0;
        int containEnter = 0;
        while (string[i][j] != EOF)
        {
            if(string[i][j] == '\n'){
                containEnter = 1;
            }
            j++;
        }

        if(containEnter){
            string[i][strcspn(string[i], "\n")] = '\0';
        }else{
            string[i][++j] = '\0';
        }
        
        i++;
    }

    for (int j = 0; j < line; j++) {
        for (int k = 0; k < lenght; k++) {
            if (isalpha(string[j][k]) || isdigit(string[j][k]) || string[j][k] == ' ') {
                kalimat[a] = tolower(string[j][k]); // Mengubah ke huruf kecil
                a++;
            } else if (string[j][k] == '\0') {
                break; // Keluar dari loop jika mencapai akhir string
            } else {
                kalimat[a] = ' '; // Mengganti karakter non-alfanumerik dengan spasi
                a++;
            }
        }
    }

    kalimat[a] = '\0';
    fclose(input);
}