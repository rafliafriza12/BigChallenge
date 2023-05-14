#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "header.h"

void characterToVariable(int line,int lenght,char * kalimat){
    char string[line][lenght];
    int i=0;
    int a=0;
    FILE * input;
    input = fopen("./assets/input.txt","r");
    if(input==NULL){
        printf("Tidak dapat membuka file...");
        exit(1);
    }

    while(fgets(string[i],(lenght*sizeof(int)),input)!=NULL){
        i++;
    }
    for(int j=0;j < line;j++){
        for(int k=0;k < lenght;k++){
            if(string[j][k]=='\0'||string[j][k]==EOF){
                break;
            }
            if(isalpha(string[j][k])||isdigit(string[j][k])||string[j][k]==' '){
                kalimat[a]=string[j][k];
                kalimat[a]=tolower(kalimat[a]);
                a++;
            }
            else{
                kalimat[a]=' ';
                a++;
            }
            
        }
    }

    fclose(input);
}