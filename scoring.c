#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "header.h"

int scoring(char * token)
{
    double skor=0;

    for(int i=0;i<strlen(token);i++){
        switch (token[i]){
        case 'a':
        case 'e':
        case 'm':
        case 'q':
            skor+=2;
            break;
        case 'b':
        case 'c':
        case 'f':
        case 'g':
        case 'k':
        case 'n':
        case 'o':
        case 'r':
            skor+=3;
            break;
        case 'd':
        case 'i':
        case 'l':
        case 'p':
        case 'h':
            skor+=4;
            break;
        case 'j':
        case 's':
        case 'u':
        case 'w':
        case 'y':
            skor+=5;
            break;
        case 't':
        case 'v':
        case 'x':
        case 'z':
            skor+=6;
            break;
        case '1':
            skor+=7;
            break;
        case '2':
            skor+=8;
            break;
        case '3':
            skor+=9;
            break;
        case '4':
            skor+=10;
            break;
        case '5':
            skor+=11;
            break;
        case '6':
            skor+=12;
            break;
        case '7':
            skor+=13;
            break;
        case '8':
            skor+=14;
            break;
        case '9':
            skor+=15;
            break;
        case '0':
            skor+=16;
            break;
        }
    }
    
    return skor;
}