#include "header.h"

int countLenght(int lenght){
    int n=0;
    char huruf;
    char * sementara;
    FILE * input;
    input = fopen("./assets/input/input.txt","r");

    if(input==NULL){
        printf("Tidak bisa membuka file...");
        exit(1);
    }
    huruf=fgetc(input);
    while(!feof(input)){
        if(huruf=='\n'){
            ++n;
            if(n>lenght){
            lenght=n;   
            }
            n=0;
            huruf=fgetc(input);
        }
        n++;
        huruf=fgetc(input);
        if(huruf==EOF){
            if(n>lenght){
                lenght=n;
            }
        }
    }

    fclose(input);
    return (lenght);
}