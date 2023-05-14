#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "header.h"

int countWord(int word, int character, char *kalimat){
    for (int i = 0; i < character; i++){
        if (kalimat[i] == ' '){
            word++;
            if(kalimat[i+1]==' '){
                ++i;
                if(kalimat[i+1]==' '){
                    ++i;
                }
            }
        }
    }

    word+=1;

    return word;
}