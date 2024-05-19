#include "header.h"

int countWord(int word, int character, char *kalimat){
    // for (int i = 0; i < character; i++){
    //     if (kalimat[i] == ' '){
    //         word++;
    //         if(kalimat[i+1]==' '){
    //             ++i;
    //             if(kalimat[i+1]==' '){
    //                 ++i;
    //             }
    //         }
    //     }
    // }

    // word+=1;
    char countWord[strlen(kalimat)];

    strcpy(countWord,kalimat);
    word = 0;
    char * token = strtok(countWord," ");
    while (token != NULL)
    {
        word+=1;
        // printf("%s\n", token);
        token = strtok(NULL, " ");

    }
    


    return word;
}