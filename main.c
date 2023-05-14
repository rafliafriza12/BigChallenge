#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main(){
    system("cls");
    int line = 0;
    int lenght = 0;
    int character = 0;
    int word=0;
    char fileName[20];
    char *token;

    //menghitung ada berapa banyak karakter di dalam file.txt
    character = countCharacter(character);
    
    //menghitung berapa banyak baris yang ada di file.txt
    line = countLine(line);
    
    //menghitung kalimat terpanjang ada berapa karakter
    lenght = countLenght(lenght);
    
    //mendeklarasikan array kalimat sebesar jumlah karakter
    char kalimat[character];

    //Melakukan scan baris per baris file.txt
    //dan memasukkan hasil scan ke array kalimat
    characterToVariable(line, lenght, kalimat);

    //menghitung jumlah kata yang sudah di masukkan ke array kalimat
    word = countWord(word,character,kalimat);

    //mendeklarasi struct datas dengan array sebanyak jumlah kata
    data datas[word];

    //Tokenisasi dan memasukkan hasil token ke data struct
    strtokCharacter(token, kalimat,datas);

    //Menyorting hasil token yang sudah dimasukkan ke data struct
    //secara desc
    bubbleSort(datas,word);

    //Menu tampila awal
    int jawab;
    do{
        printf("Selamat Datang di Project BIG CHALLENGE\n\n");
        // printf("MENU 1 \n\n");
        printf("[1] Masukkan Data ke File Binary\n");
        printf("[2] Tampilkan Data Dari Binary\n");
        printf("[3] Keluar Dari Program\n");
        printf("Silahkan Pilih Menu => ");
        scanf("%d",&jawab);

        //jika user memilih 1, maka akan memasukkan data ke file binary
        if(jawab==1){
            system("cls");
            writeToBinary(datas,word);
            break;
        }
        // jika user memilih 2, maka program akan memerintahkan user untuk memilih 1 dahulu
        else if(jawab==2){
            system("cls");
            printf("\nPilihlah nomor 1 terlebih dahulu\n\n");
        }
        //jika user memilih 3, maka akan keluar dari program
        else if(jawab==3){
            exit(1);
        }
        //jika user memilih angka yang buka tertera di menu, maka program akan meminta input ulang
        else{
            system("cls");
            printf("Selamat Datang di Project BIG CHALLENGE\n\n");
            printf("Pilihan kamu tidak valid !!!\nSilahkan pilih Ulang\n");
        }

    }while(jawab!=1 || jawab!=3);// akan melakukan perulangan jika user tidak memilih 1 dan 3

    //mendeklarasi struct dengan array sebanyak jumlah kata
    //untuk menampung hasil baca dari file binary
    result hasil[word];
    do{
        printf("\n\n");
        printf("[1] Masukkan Data ke File Binary\n");
        printf("[2] Tampilkan Data Dari Binary\n");
        printf("[3] Keluar Dari Program\n");
        printf("Silahkan Pilih Menu => ");
        scanf("%d",&jawab);
        //jika user memilih 1, maka akan memasukkan data ke file binary
        if(jawab==1){
            writeToBinary(datas,word);
        }
        //jika user pilih 2, maka akan membaca file binary dan menampilkan hasil bacaannya
        else if(jawab==2){
            readBinary(hasil,word);

            
        }
        //jika user memilih 3, maka akan keluar dari program
        else if(jawab==3){
            exit(1);
        }
        //jika user memilih angka yang buka tertera di menu, maka program akan meminta input ulang
        else{
            system("cls");
            printf("Pilihan kamu tidak valid !!!\n Silahkan pilih Ulang\n");
        }

    }while(jawab==1||jawab==2||jawab==3);//akan melakukan perulangan jika user memilih 1-3



   

    return 0;
}