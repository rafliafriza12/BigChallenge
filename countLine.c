#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "header.h"

int countLine(int n)
{
    char huruf;
    FILE * input;
    input = fopen("./assets/input.txt","r");

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