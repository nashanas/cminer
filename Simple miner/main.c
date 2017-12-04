//
//  main.c
//  Simple miner
//
//  Created by Rinat Kuzmin on 02.12.17.
//  Copyright © 2017 Rinat Kuzmin. All rights reserved.
//

#include <stdio.h>
#include "blake2.h"
#define SIZE 1024

int blake2hash(uint8_t *out, const void *in);

int main(int argc, const char * argv[]) {


    //выходная переменная
    uint8_t md[50];
    
    //входная переменная
    unsigned char in[] = {'p','r','i','v','e','t'};    //{0x70, 0x72, 0x69, 0x76, 0x65, 0x74};


    blake2hash(md, in);

    for (int i = 0; i<50; i++){
        printf("%x ", md[i]);
    }
    printf("\n");
    
    uint32_t ar[30];
    int j = 0;
    for(int i =0; i < 10; i=i+2){
        ar[i] = (((md[j]<<8)|md[j+1])<<4)|(md[j+2]>>4);
        ar[i+1] = ((((md[j+2]&0xf)<<8)|md[j+3])<<8)|md[j+4];
        j = j+5;
    }
    for (int i = 0; i<10; i++){
        printf("%x ", ar[i]);
    }
    printf("\n");
    

    
    return 0;
}

int blake2hash(uint8_t *out, const void *in){
    unsigned char t[] = {0x5a, 0x63, 0x61, 0x73, 0x68, 0x50, 0x6f, 0x57, 0xc8, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00};
    const size_t inlen = 6;
    const size_t outlen = 50;
    blake2b_state S[1];
    blake2b_param D[1];
    
    for (int i = 0; i<16; i++){
        D->personal[i] = t[i];
    }
    D->digest_length = outlen;
    D->key_length    = 0;
    D->fanout        = 1;
    D->depth         = 1;
    D->leaf_length   = 0;
    D->node_offset   = 0;
    D->node_depth    = 0;
    D->inner_length  = 0;
    
    blake2b_init_param(S, D);
    blake2b_update( S, ( const uint8_t * )in, inlen );
    blake2b_final( S, out, outlen );
    return 0;
}

