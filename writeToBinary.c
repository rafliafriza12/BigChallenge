#include "header.h"

void writeToBinary(data datas[],int word){
    char fileName[20];

    printf("\nIngin disimpan di file yang mana (fileName.bin) ? ");
    scanf("%s",fileName);

//    char * path = strcat("./assets/outputBinary/",fileName);

    FILE * bin;
    bin = fopen(fileName,"wb");
    
    for(int i=0;i<word;i++){
        fwrite(&datas[i].skor,sizeof(datas[i].skor),1,bin);
        fwrite(datas[i].kata,sizeof(datas[i].kata),1,bin);
        fwrite(&datas[i].panjangKata,sizeof(datas[i].panjangKata),1,bin);
    }

    printf("\nBerhasil Memasukkan data ke %s\n",fileName);

    fclose(bin);
}