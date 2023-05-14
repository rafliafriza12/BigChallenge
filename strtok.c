#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "header.h"

void strtokCharacter(char *token, char *kalimat,data datas[])
{
    int i = 0;
    token = strtok(kalimat," ");
    while (token != NULL){
        // printf("%s\n",token);
        strcpy(datas[i].kata,token);
        datas[i].skor=scoring(token);
        datas[i].panjangKata=strlen(token);
        token = strtok(NULL, " ");
        i++;
    }
    
    
}