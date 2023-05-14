#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "header.h"

void readBinary(result hasil[],int word){
    FILE * bin;
    char fileName[20];
    printf("Ingin dibaca dari file yang mana (filename.bin)? ");
    scanf("%s",fileName);
    bin = fopen(fileName,"rb");

    if(bin==NULL){
        printf("Tidak Dapat Membuka File...\n");
        exit(1);
    }
    
    for(int i=0;i<word;i++){
        fread(&hasil[i].skor,sizeof(hasil[i].skor),1,bin);
        fread(hasil[i].kata,sizeof(hasil[i].kata),1,bin);
        fread(&hasil[i].panjangKata,sizeof(hasil[i].panjangKata),1,bin);
    }

    int n;
    int i=0;
    int j=0,k;
    do{
        printf("\n");
        printf("Berapa point yang ingin di tampilkan (0<n<=75) : ");
        scanf(" %d",&n);
        if(n<0||n>75){
            printf("\nMasukkan angka dari 1 - 75 saja!!!\n");
        }
    }while(n<0||n>75);

    for(i=0;i<n;i++){
        for(j;j<word;j++){
            printf("%.1f {%s (%d)",hasil[j].skor,hasil[j].kata,hasil[j].panjangKata);
            for(k=j+1;k<word;k++){
                if(hasil[j].skor==hasil[k].skor){
                    printf(", %s (%d)",hasil[k].kata,hasil[k].panjangKata);
                }
                else{
                    j=k;
                    break;
                }
            }
            printf("}\n");
            break;

        }
    }
}