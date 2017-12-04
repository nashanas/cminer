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

int main(int argc, const char * argv[]) {
//    insert code here...
//    printf("Hello, World! Rinat\n");
//    unsigned char *str, *hash;
//    str = malloc(SIZE * sizeof *str);
//    hash = malloc(50);
//    printf("> ");
//    scanf("%s", str);
//    int blake2b( uint8_t *out, const void *in, const void *key, const uint8_t outlen, const uint64_t inlen, uint8_t keylen );
//    int a = blake2b(hash, str, NULL, 32, 1024, 0);
//    if(a==0)
//        printf("%x\n", hash);
//    это мой personal
    unsigned char t[] = {0x5a, 0x63, 0x61, 0x73, 0x68, 0x50, 0x6f, 0x57, 0xc8, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00};
    //5a 63 61 73 68 50 6f 57 c8 00 00 00 09 00 00 00

    //выходная переменная
    uint8_t md[50];
    //входная переменная
    unsigned char in[] = {'p','r','i','v','e','t'};    //{0x70, 0x72, 0x69, 0x76, 0x65, 0x74};
    
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
    memset( D->reserved, 0, sizeof( D->reserved ) );
    memset( D->salt,     0, sizeof( D->salt ) );
    
    
    

//    blake2b_init(S, outlen);
//    blake2b_init_key( S, outlen, NULL, 0 );
    blake2b_init_param(S, D);
    blake2b_update( S, ( const uint8_t * )in, inlen );
    blake2b_final( S, md, outlen );
    for (int i = 0; i<50; i++){
        printf("%x ", md[i]);
    }
    printf("\n");
    return 0;
}

