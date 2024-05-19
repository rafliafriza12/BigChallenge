#include "header.h"

int countLine(int n)
{
    char huruf;
    FILE * input;
    input = fopen("./assets/input/input.txt","r");

    if(input==NULL){
        printf("Tidak bisa membuka file...");
        exit(1);
    }

    huruf=fgetc(input);
    while(!feof(input)){
        if(huruf=='\n'){
            n++;
        }
        huruf=fgetc(input);
    }
    n+=1;
    fclose(input);
    return (n);
}