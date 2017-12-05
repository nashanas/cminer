//
//  main.c
//  Simple miner
//
//  Created by Rinat Kuzmin on 02.12.17.
//  Copyright © 2017 Rinat Kuzmin. All rights reserved.
//
#include <stdlib.h>
#include <stdio.h>
#include "blake2.h"


int main(int argc, const char * argv[]) {


    const size_t n = 1<<21;
    const size_t m = 10;

    
    uint32_t *X;

    X = (uint32_t*) malloc(10 * n * sizeof(uint32_t));

//    unsigned char in[] = {'p','r','i','v','e','t'};    //{0x70, 0x72, 0x69, 0x76, 0x65, 0x74};
    uint8_t s[50];
    int j = 0;
    uint32_t count;
    for(int k = 0; k<n; k=k+2){
        count = k&0xffffffff;
//        unsigned char test[] = {'\0',count>>24, (count>>16)&0xff, (count>>8)&0xff, count&0xff};
        
        unsigned char test[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,count&0xff, (count>>8)&0xff, (count>>16)&0xff, count>>24};
        blake2hash(s, test, 36);
        for(int i =0; i < m; i=i+2){
            *(X + k*m + i) = (((s[j]<<8)|s[j+1])<<4)|(s[j+2]>>4);
            *(X + k*m + i+1) = ((((s[j+2]&0xf)<<8)|s[j+3])<<8)|s[j+4];
//            X[k][i] = (((s[j]<<8)|s[j+1])<<4)|(s[j+2]>>4);
//            X[k][i+1] = ((((s[j+2]&0xf)<<8)|s[j+3])<<8)|s[j+4];
            j = j+5;
        }
        for(int i =0; i < m; i=i+2){
            *(X + (k+1)*m + i) = (((s[j]<<8)|s[j+1])<<4)|(s[j+2]>>4);
            *(X + (k+1)*m + i+1) = ((((s[j+2]&0xf)<<8)|s[j+3])<<8)|s[j+4];
//            X[k+1][i] = (((s[j]<<8)|s[j+1])<<4)|(s[j+2]>>4);
//            X[k+1][i+1] = ((((s[j+2]&0xf)<<8)|[j+3])<<8)|s[j+4];
            j = j+5;
        }
        j = 0;
    }
        for (int i = 2097140; i<2097152; i++){
            for(int k = 0; k<m; k++){
                printf("%x ", *(X+ i*m + k));
            }
            printf("\n");
        }
    free(X);
    
    return 0;
}

