#ifndef HEADER_H
#define HEADER_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct dataMentah
{
    double skor;
    char kata[50];
    int panjangKata;

} data;

int countCharacter(int);
int countLine(int);
int countLenght(int);
void characterToVariable(int, int, char *);
void strtokCharacter(char *, char *,data datas[]);
int countWord(int ,int ,char *);
int scoring(char *);
void bubbleSort(data datas[],int );
void selectionSort(data datas[],int );
void writeToBinary(data datas[],int );
void readBinary(data hasil[],int );

#endif