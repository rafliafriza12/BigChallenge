#include "header.h"

int countCharacter(int character){
    char huruf;
    FILE * input;
    input = fopen("./assets/input/input.txt","r");
    if(input==NULL){
        printf("Tidak dapat membuka file...");
        exit(1);
    }

    huruf=fgetc(input);
    while(!feof(input)){
        // if(isalpha(huruf)||isdigit(huruf)||huruf==' '||huruf=='\n'){
            character++;
        // }
        huruf=fgetc(input);
    }
    fclose(input);
    character+=1;
    return character;
}