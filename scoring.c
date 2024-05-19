#include "header.h"

int scoring(char * token)
{
    double skor=0;

    for(int i=0;i<strlen(token);i++){
        switch (token[i]){
        case 'h':
            skor+=2;
            break;
        case 'f':
        case 'j':
        case 'l':
        case 't':
            skor+=3;
            break;
        case 'u':
            skor+=4;
            break;
        case 'e':
        case 'i':
            skor+=5;
            break;
        case 'a':
        case 'o':
        case 'v':
            skor+=6;
            break;
        case 'c':
            skor+=7;
            break;
        case 'd':
        case 'k':
        case 'p':
            skor+=8;
            break;
        case 'm':
        case 'w':
        case 'z':
            skor+=9;
        case 'b':
            skor+=10;
        case 'g':
        case 'n':
        case 's':
            skor+=12;
            break;
        case 'r':
        case 'y':
            skor+=13;
            break;
        case 'x':
            skor+=15;
            break;
        case 'q':
            skor+=16;
            break;
        case '1':
            skor+=1;
            break;
        case '2':
            skor+=2;
            break;
        case '3':
            skor+=3;
            break;
        case '4':
            skor+=4;
            break;
        case '5':
            skor+=5;
            break;
        case '6':
            skor+=6;
            break;
        case '7':
            skor+=7;
            break;
        case '8':
            skor+=8;
            break;
        case '9':
            skor+=9;
            break;
        case '0':
            skor+=10;
            break;
        }
    }
    
    return skor;
}