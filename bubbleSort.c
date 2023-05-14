#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "header.h"

void bubbleSort(data datas[],int word)
{
    //meburutkan skor(desc)
    for(int i=0;i < word; i++){
        for(int j=0;j<word-i-1;j++){
            if(datas[j].skor<datas[j+1].skor){
                data ganti = datas[j];
                datas[j] = datas[j+1];
                datas[j+1] = ganti;
            }
        }
    }

    //mengurutkan kata sesuai abjad
    for(int i=0;i < word; i++){
        for(int j=0;j<word-i-1;j++){
            if((datas[j].skor==datas[j+1].skor)&&(strcmp(datas[j].kata, datas[j+1].kata) > 0)){
                data ganti = datas[j];
                datas[j] = datas[j+1];
                datas[j+1] = ganti;
            }
        }
    }

    
}