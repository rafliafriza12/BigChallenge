#ifndef HEADER_H
#define HEADER_H

typedef struct dataMentah
{
    double skor;
    char kata[50];
    int panjangKata;

} data;

typedef struct dataHasil{
    double skor;
    char kata[50];
    int panjangKata;
} result;

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
void readBinary(result hasil[],int );

#endif