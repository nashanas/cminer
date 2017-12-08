//
//  main.c
//  Simple miner
//
//  Created by Rinat Kuzmin on 02.12.17.
//  Copyright © 2017 Rinat Kuzmin. All rights reserved.
// первая версия - 36.1082 sec
#include <stdlib.h>
#include <stdio.h>
#include <memory.h>
#include <time.h>
#include "blake2.h"
//static const int32_t sol[] = {4313, 223176, 448870, 1692641, 214911, 551567, 1696002, 1768726, 500589, 938660, 724628, 1319625, 632093, 1474613, 665376, 1222606, 244013, 528281, 1741992, 1779660, 313314, 996273, 435612, 1270863, 337273, 1385279, 1031587, 1147423, 349396, 734528, 902268, 1678799, 10902, 1231236, 1454381, 1873452, 120530, 2034017, 948243, 1160178, 198008, 1704079, 1087419, 1734550, 457535, 698704, 649903, 1029510, 75564, 1860165, 1057819, 1609847, 449808, 527480, 1106201, 1252890, 207200, 390061, 1557573, 1711408, 396772, 1026145, 652307, 1712346, 10680, 1027631, 232412, 974380, 457702, 1827006, 1316524, 1400456, 91745, 2032682, 192412, 710106, 556298, 1963798, 1329079, 1504143, 102455, 974420, 639216, 1647860, 223846, 529637, 425255, 680712, 154734, 541808, 443572, 798134, 322981, 1728849, 1306504, 1696726, 57884, 913814, 607595, 1882692, 236616, 1439683, 420968, 943170, 1014827, 1446980, 1468636, 1559477, 1203395, 1760681, 1439278, 1628494, 195166, 198686, 349906, 1208465, 917335, 1361918, 937682, 1885495, 494922, 1745948, 1320024, 1826734, 847745, 894084, 1484918, 1523367, 7981, 1450024, 861459, 1250305, 226676, 329669, 339783, 1935047, 369590, 1564617, 939034, 1908111, 1147449, 1315880, 1276715, 1428599, 168956, 1442649, 766023, 1171907, 273361, 1902110, 1169410, 1786006, 413021, 1465354, 707998, 1134076, 977854, 1604295, 1369720, 1486036, 330340, 1587177, 502224, 1313997, 400402, 1667228, 889478, 946451, 470672, 2019542, 1023489, 2067426, 658974, 876859, 794443, 1667524, 440815, 1099076, 897391, 1214133, 953386, 1932936, 1100512, 1362504, 874364, 975669, 1277680, 1412800, 1227580, 1857265, 1312477, 1514298, 12478, 219890, 534265, 1351062, 65060, 651682, 627900, 1331192, 123915, 865936, 1218072, 1732445, 429968, 1097946, 947293, 1323447, 157573, 1212459, 923792, 1943189, 488881, 1697044, 915443, 2095861, 333566, 732311, 336101, 1600549, 575434, 1978648, 1071114, 1473446, 50017, 54713, 367891, 2055483, 561571, 1714951, 715652, 1347279, 584549, 1642138, 1002587, 1125289, 1364767, 1382627, 1387373, 2054399, 97237, 1677265, 707752, 1265819, 121088, 1810711, 1755448, 1858538, 444653, 1130822, 514258, 1669752, 578843, 729315, 1164894, 1691366, 15609, 1917824, 173620, 587765, 122779, 2024998, 804857, 1619761, 110829, 1514369, 410197, 493788, 637666, 1765683, 782619, 1186388, 494761, 1536166, 1582152, 1868968, 825150, 1709404, 1273757, 1657222, 817285, 1955796, 1014018, 1961262, 873632, 1689675, 985486, 1008905, 130394, 897076, 419669, 535509, 980696, 1557389, 1244581, 1738170, 197814, 1879515, 297204, 1165124, 883018, 1677146, 1545438, 2017790, 345577, 1821269, 761785, 1014134, 746829, 751041, 930466, 1627114, 507500, 588000, 1216514, 1501422, 991142, 1378804, 1797181, 1976685, 60742, 780804, 383613, 645316, 770302, 952908, 1105447, 1878268, 504292, 1961414, 693833, 1198221, 906863, 1733938, 1315563, 2049718, 230826, 2064804, 1224594, 1434135, 897097, 1961763, 993758, 1733428, 306643, 1402222, 532661, 627295, 453009, 973231, 1746809, 1857154, 263652, 1683026, 1082106, 1840879, 768542, 1056514, 888164, 1529401, 327387, 1708909, 961310, 1453127, 375204, 878797, 1311831, 1969930, 451358, 1229838, 583937, 1537472, 467427, 1305086, 812115, 1065593, 532687, 1656280, 954202, 1318066, 1164182, 1963300, 1232462, 1722064, 17572, 923473, 1715089, 2079204, 761569, 1557392, 1133336, 1183431, 175157, 1560762, 418801, 927810, 734183, 825783, 1844176, 1951050, 317246, 336419, 711727, 1630506, 634967, 1595955, 683333, 1461390, 458765, 1834140, 1114189, 1761250, 459168, 1897513, 1403594, 1478683, 29456, 1420249, 877950, 1371156, 767300, 1848863, 1607180, 1819984, 96859, 1601334, 171532, 2068307, 980009, 2083421, 1329455, 2030243, 69434, 1965626, 804515, 1339113, 396271, 1252075, 619032, 2080090, 84140, 658024, 507836, 772757, 154310, 1580686, 706815, 1024831, 66704, 614858, 256342, 957013, 1488503, 1615769, 1515550, 1888497, 245610, 1333432, 302279, 776959, 263110, 1523487, 623933, 2013452, 68977, 122033, 680726, 1849411, 426308, 1292824, 460128, 1613657, 234271, 971899, 1320730, 1559313, 1312540, 1837403, 1690310, 2040071, 149918, 380012, 785058, 1675320, 267071, 1095925, 1149690, 1318422, 361557, 1376579, 1587551, 1715060, 1224593, 1581980, 1354420, 1850496, 151947, 748306, 1987121, 2070676, 273794, 981619, 683206, 1485056, 766481, 2047708, 930443, 2040726, 1136227, 1945705, 1722044, 1971986};
static  const int32_t sol[] =
        {0x5538c, 0x1b3188, 0x1cf7f6, 0xce703, 0x1d3a87, 0x24ef7, 0x16c51c, 0xa5d26, 0xc5ee8, 0xf216b, 0x8f97f, 0x236d2, 0xd99bd, 0x10b1b7, 0x788ad, 0xd10f2, 0x646ad, 0xbe242, 0x131bfa, 0x10b02c, 0x138bf, 0x1b85c, 0x1dfe6c, 0x855b9, 0xd23ba, 0x15ff6, 0xe8003, 0x10c70b, 0x10523e, 0x1c0c87, 0x12d12f, 0x150848, 0x1d885e, 0x26412, 0x9899c, 0xe9ee5, 0x89df1, 0x14cda4, 0x14bb79, 0x66c33, 0x1c4493, 0x60b90, 0x53bb8, 0x1b1dd8, 0x1fdef8, 0x19440f, 0x1fa422, 0xf8751, 0x797f6, 0x504, 0x6ae04, 0xe7601, 0xec789, 0xbfcb3, 0x188b00, 0xfd111, 0x1e7a97, 0x485a5, 0xa487d, 0x1d3ec6, 0x13ced3, 0x11022b, 0x9c7d2, 0x15f5b1, 0x55577, 0x19f667, 0x376a7, 0x158924, 0x13a177, 0xe507d, 0x1f9e65, 0xe5293, 0x167a85, 0x3b618, 0x6f973, 0x8eebf, 0x163121, 0x13bad7, 0x13de40, 0x1747f8, 0x7a038, 0x1e31c8, 0x157378, 0x2a422, 0x467ae, 0x1c4a4, 0xcec37, 0x1e9abf, 0x37d1b, 0x5a623, 0x90849, 0x184238, 0x4c583, 0x1149da, 0x1f2b28, 0x10754b, 0x158308, 0x134767, 0x122e41, 0x18182b, 0x1b01b2, 0xfaa9a, 0x1326d9, 0x1f33b8, 0xec573, 0x18add9, 0x148a3e, 0x3c10f, 0x17acad, 0x6b2cb, 0x1e97b6, 0x1fa71c, 0x107369, 0x1be346, 0x17b2d3, 0xba006, 0x1179e4, 0x57aa6, 0x17a9ef, 0xcd0a4, 0xe699e, 0xb2df9, 0x1dd61e, 0x1d162d, 0x94509, 0x111f38, 0x17adc3, 0x1e51ca, 0x15684f, 0x1badcd, 0xb2bc4, 0x38402, 0x14cfe8, 0x12c64f, 0xe3d76, 0x194167, 0x1494ba, 0xd1d63, 0x16aedc, 0xf0b82, 0x11f9d2, 0x3e4f, 0xe5a5d, 0x1cff22, 0xb839e, 0x44b2b, 0x103746, 0x863ee, 0x10c31e, 0x1cbd76, 0x1ca732, 0x87b29, 0x12a8d3, 0xfc38e, 0x16fa31, 0x1d177, 0x1c437e, 0x65100, 0xff2a7, 0x18b4a5, 0x14c159, 0x68f75, 0xb82f3, 0x565a2, 0xe0e74, 0x133a32, 0xce652, 0x1952d5, 0x79f5b, 0x145017, 0xe85b, 0x140dab, 0x4e09, 0x70a8f, 0xa9f10, 0xabd32, 0x1d6dfa, 0xddc4a, 0x1efc15, 0xcc5b4, 0x1cf471, 0xba346, 0xa0d2, 0x17f8c2, 0x8c01b, 0x382c3, 0xd5cb4, 0x728e4, 0x1eeefe, 0x2cefc, 0x183f77, 0x16b738, 0x188030, 0xd393, 0x1c9130, 0xaf411, 0x17bbbb, 0x60539, 0x1162bb, 0x177d8e, 0xb1e64, 0x7f799, 0x177838, 0x97a65, 0x16e36f, 0x1a87b2, 0x24119, 0xde0eb, 0xa4314, 0x1be853, 0x1499ca, 0x13d658, 0x1b9428, 0xefcd6, 0x2b400, 0x1c5744, 0x1ebe58, 0x1f0f4f, 0xd158, 0xded8b, 0x1741b4, 0xd2b50, 0xc78eb, 0xfbea, 0x8d0c5, 0x3da77, 0x1d4dd0, 0xa8b83, 0x9eca2, 0x92b48, 0x16336b, 0xc34d8, 0x88ce3, 0x64540, 0x14de4e, 0x1cdc87, 0xadcf1, 0xc1809, 0x1305d1, 0xdafae, 0x1d457e, 0xd535e, 0xb5b56, 0x2b630, 0xa00be, 0x189d3d, 0x1386a9, 0x124ea4, 0x1f64a5, 0x11d99f, 0x684f7, 0x36f48, 0x1cdfdf, 0x18d57c, 0x13237f, 0xc9122
        };
uint32_t next_ar_len (uint32_t* X, int cols, int rows, int round);
void new_ar(int round, uint32_t* X, int rows, int cols, uint32_t* new_X, int new_rows, int new_cols);

//функция - компаратор для сортировки qsort, определяет корректно только для 10 -ти первых элементов массива

int cmp (const void * a, const void * b ) {
//    uint32_t s1[10], s2[10];
    int32_t s[10];
    for(int i = 0; i< 10; i++){
        s[i] = ( *((int*)a+i))-( *((int*)b+i));
    }
    if(s[0]!=0) return s[0]; else {
        if(s[1]!=0) return s[1]; else{
            if(s[2]!=0) return s[2]; else{
                if(s[3]!=0) return s[3]; else{
                    if(s[4]!=0) return s[4]; else{
                        if(s[5]!=0) return s[5]; else{
                            if(s[6]!=0) return s[6]; else{
                                if(s[7]!=0) return s[7]; else{
                                    if(s[8]!=0) return s[8]; else{
                                        if(s[9]!=0) return s[9];
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}
int cmp1 (const void * a, const void * b ) {
    int32_t s[9];
    for(int i = 0; i< 9; i++){
        s[i] = ( *((int*)a+i))-( *((int*)b+i));
    }
    if(s[0]!=0) return s[0]; else {
        if(s[1]!=0) return s[1]; else{
            if(s[2]!=0) return s[2]; else{
                if(s[3]!=0) return s[3]; else{
                    if(s[4]!=0) return s[4]; else{
                        if(s[5]!=0) return s[5]; else{
                            if(s[6]!=0) return s[6]; else{
                                if(s[7]!=0) return s[7]; else{
                                    if(s[8]!=0) return s[8];
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}
int cmp2 (const void * a, const void * b ) {
    int32_t s[8];
    for(int i = 0; i< 8; i++) s[i] = ( *((int*)a+i))-( *((int*)b+i));
    if(s[0]!=0) return s[0]; else {
        if(s[1]!=0) return s[1]; else{
            if(s[2]!=0) return s[2]; else{
                if(s[3]!=0) return s[3]; else{
                    if(s[4]!=0) return s[4]; else{
                        if(s[5]!=0) return s[5]; else{
                            if(s[6]!=0) return s[6]; else{
                                if(s[7]!=0) return s[7];
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}
int cmp3 (const void * a, const void * b ) {
    int32_t s[7];
    for(int i = 0; i< 7; i++) s[i] = ( *((int*)a+i))-( *((int*)b+i));
    if(s[0]!=0) return s[0]; else {
        if(s[1]!=0) return s[1]; else{
            if(s[2]!=0) return s[2]; else{
                if(s[3]!=0) return s[3]; else{
                    if(s[4]!=0) return s[4]; else{
                        if(s[5]!=0) return s[5]; else{
                            if(s[6]!=0) return s[6];
                        }
                    }
                }
            }
        }
    }
    return 0;
}
int cmp4 (const void * a, const void * b ) {
    int32_t s[6];
    for(int i = 0; i< 6; i++) s[i] = ( *((int*)a+i))-( *((int*)b+i));
    if(s[0]!=0) return s[0]; else {
        if(s[1]!=0) return s[1]; else{
            if(s[2]!=0) return s[2]; else{
                if(s[3]!=0) return s[3]; else{
                    if(s[4]!=0) return s[4]; else{
                        if(s[5]!=0) return s[5];
                    }
                }
            }
        }
    }
    return 0;
}
int cmp5 (const void * a, const void * b ) {
    int32_t s[5];
    for(int i = 0; i< 5; i++) s[i] = ( *((int*)a+i))-( *((int*)b+i));
    if(s[0]!=0) return s[0]; else {
        if(s[1]!=0) return s[1]; else{
            if(s[2]!=0) return s[2]; else{
                if(s[3]!=0) return s[3]; else{
                    if(s[4]!=0) return s[4];
                }
            }
        }
    }
    return 0;
}
int cmp6 (const void * a, const void * b ) {
    int32_t s[4];
    for(int i = 0; i< 4; i++) s[i] = ( *((int*)a+i))-( *((int*)b+i));
    if(s[0]!=0) return s[0]; else {
        if(s[1]!=0) return s[1]; else{
            if(s[2]!=0) return s[2]; else{
                if(s[3]!=0) return s[3];
            }
        }
    }
    return 0;
}
int cmp7 (const void * a, const void * b ) {
    int32_t s[3];
    for(int i = 0; i< 3; i++) s[i] = ( *((int*)a+i))-( *((int*)b+i));
    if(s[0]!=0) return s[0]; else {
        if(s[1]!=0) return s[1]; else{
            if(s[2]!=0) return s[2];
        }
    }
    return 0;
}
int cmp8 (const void * a, const void * b ) {
    int32_t s[2];
    for(int i = 0; i< 2; i++) s[i] = ( *((int*)a+i))-( *((int*)b+i));
    if(s[0]!=0) return s[0]; else {
        if(s[1]!=0) return s[1];
    }
    return 0;
}


int min(int a, int b);

void xor(uint32_t* X, uint32_t* sol, int sol_len);

int first_non_zero_indic(uint32_t* X, int rows, int col, int round);

void new_ar_last(uint32_t* X, int rows, int cols, uint32_t* new_X, int new_rows, int new_cols, int k);

// Returns value of Binomial Coefficient C(n, k)
int binomialCoeff(int n, int k)
{
    if(n==1) return 0;
    int C[n+1][k+1];
    int i, j;
    
    // Caculate value of Binomial Coefficient in bottom up manner
    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= min(i, k); j++)
        {
            // Base Cases
            if (j == 0 || j == i)
                C[i][j] = 1;
            
            // Calculate value using previosly stored values
            else
                C[i][j] = C[i-1][j-1] + C[i-1][j];
        }
    }
    
    return C[n][k];
}

// A utility function to return minimum of two integers
int min(int a, int b)
{
   // return b + ((a - b) & ((a - b) >> 31));      без условного оператора, надо тестить
    return (a<b)? a: b;
}


void print_ar(const uint32_t *X, int row, int col){
    for(int i=0; i< row; i++){
        for(int j = 0; j< col; j++){
            printf("%d, ", *(X+i*col + j));
//            printf("%x ", *(X+i*col + j));
        }
        printf("\n");
    }
    printf("----------------------------------------------------------------\n");
}
void print_ar_reverse(const uint32_t *X,  int col, int ind, int row){
    for(int i=ind; i< row; i++){
        for(int j = 0; j< col; j++){
            printf("0x%x, ", *(X+i*col + j));
        }
        printf("\n");
    }
    printf("----------------------------------------------------------------\n");
}

int main(int argc, const char * argv[]) {
    double start = clock();
    const size_t n = 1<<21;
    const size_t m = 11;
    uint32_t *X;
    X = (uint32_t*) malloc(m * n * sizeof(uint32_t));

    uint8_t s[50];
    int j = 0;
    uint32_t count;
    printf("START\n");
    for(int k = 0; k<n; k=k+2){
        count = (k>>1)&0xffffffff;
        unsigned char test[] = {'b','l','o','c','k',' ','h','e','a','d','e','r',0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,count&0xff, (count>>8)&0xff, (count>>16)&0xff, count>>24};
        blake2hash(s, test, 48);
        for(int i =0; i < 10; i=i+2){
            *(X + k*m + i) = (((s[j]<<8)|s[j+1])<<4)|(s[j+2]>>4);
            *(X + k*m + i+1) = (uint32_t) (((((s[j + 2] & 0xf) << 8) | s[j + 3]) << 8) | s[j + 4]);
            j = j+5;
        }
        for(int i =0; i < 10; i=i+2){
            *(X + (k+1)*m + i) = (((s[j]<<8)|s[j+1])<<4)|(s[j+2]>>4);
            *(X + (k+1)*m + i+1) = (uint32_t) (((((s[j + 2] & 0xf) << 8) | s[j + 3]) << 8) | s[j + 4]);
            j = j+5;
        }
        *(X + k*m + 10) = (uint32_t) k;
        *(X + (k+1)*m + 10) = (uint32_t) (k + 1);
        j = 0;
    }

    uint32_t *X_source;
    X_source = (uint32_t*) malloc(m * n * sizeof(uint32_t));
    memcpy(X_source, X, m * n * sizeof(uint32_t));

    qsort(X, n, sizeof(uint32_t)*11, cmp);  //сортировка
//    print_ar_reverse(X,m, n-10, n);

//    print_ar(X, 50, 11);
    uint_fast64_t f = 0;

    uint16_t x0_col = 11;
    uint32_t x0_length = next_ar_len(X, x0_col, n, 1); //определение размера длины массива Х для будущего раунда.
    uint32_t *X0;
    X0 = (uint32_t*) malloc(x0_col * x0_length * sizeof(uint32_t));
    new_ar(1, X, n, x0_col, X0, x0_length, x0_col);

    //раунд 2
    qsort(X0, x0_length, sizeof(uint32_t)*11, cmp1); //сортировка

    uint32_t x1_length = next_ar_len(X0, 11, x0_length,2); //определение размера нового массива
    uint32_t *X1;
    uint16_t x1_col = 12;
    X1 = (uint32_t*) malloc(x1_col * x1_length * sizeof(uint32_t));
    new_ar(2, X0, x0_length, m, X1, x1_length, x1_col);
    //раунд 3

    qsort(X1, x1_length, sizeof(uint32_t)*x1_col, cmp2); //сортировка

    uint32_t x2_length = next_ar_len(X1, x1_col, x1_length,3); //определение размера нового массива
    uint32_t *X2;
    uint16_t x2_col = 15;
    X2 = (uint32_t*) malloc(x2_col * x2_length * sizeof(uint32_t));
    new_ar(3, X1, x1_length, x1_col, X2, x2_length, x2_col);

//    free(X0);
    //раунд 4
    qsort(X2, x2_length, sizeof(uint32_t)*x2_col, cmp3); //сортировка

    uint32_t x3_length = next_ar_len(X2, x2_col, x2_length,4); //определение размера нового массива
    uint32_t *X3;
    uint16_t x3_col = 22;
    X3 = (uint32_t*) malloc(x3_col * x3_length * sizeof(uint32_t));
    new_ar(4, X2, x2_length, x2_col, X3, x3_length, x3_col);
//    free(X1);
    //раунд 5
    qsort(X3, x3_length, sizeof(uint32_t)*x3_col, cmp4); //сортировка
//    print_ar(X3,20, x3_col);

    uint32_t x4_length = next_ar_len(X3, x3_col, x3_length,5); //определение размера нового массива
    uint32_t *X4;
    uint16_t x4_col = 37;
    X4 = (uint32_t*) malloc(x4_col * x4_length * sizeof(uint32_t));
    new_ar(5, X3, x3_length, x3_col, X4, x4_length, x4_col);
//    print_ar(X4,20, x4_col);

//    free(X2);
    //раунд 6
    qsort(X4, x4_length, sizeof(uint32_t)*x4_col, cmp5); //сортировка
    uint32_t x5_length = next_ar_len(X4, x4_col, x4_length,6); //определение размера нового массива
    uint32_t *X5;
    uint16_t x5_col = 68;
    X5 = (uint32_t*) malloc(x5_col * x5_length * sizeof(uint32_t));
    new_ar(6, X4, x4_length, x4_col, X5, x5_length, x5_col);
//    free(X3);
    //раунд 7
    qsort(X5, x5_length, sizeof(uint32_t)*x5_col, cmp6); //сортировка
    uint32_t x6_length = next_ar_len(X5, x5_col, x5_length,7); //определение размера нового массива
    uint32_t *X6;
    uint16_t x6_col = 131;
    X6 = (uint32_t*) malloc(x6_col * x6_length * sizeof(uint32_t));
    new_ar(7, X5, x5_length, x5_col, X6, x6_length, x6_col);
//    free(X4);
//    free(X5);
    //раунд 8
    qsort(X6, x6_length, sizeof(uint32_t)*x6_col, cmp7); //сортировка
    uint32_t x7_length = next_ar_len(X6, x6_col, x6_length,8); //определение размера нового массива
    uint32_t *X7;
    uint16_t x7_col = 258;
    X7 = (uint32_t*) malloc(x7_col * x7_length * sizeof(uint32_t));
    new_ar(8, X6, x6_length, x6_col, X7, x7_length, x7_col);

//    print_ar(X0, 50, x0_col);
//    print_ar(X1, 50, x1_col);
//      print_ar(X2, 50, x2_col);
//
//   print_ar(X3, 50, x3_col);
//    print_ar(X4, 50, x4_col);
//    print_ar(X5, 50, x5_col);
//    print_ar(X6, 79, x6_col);
//    print_ar_reverse(X7, x7_col, x7_length-100, x7_length);
//    xor(X_source,sol, 256);

//    print_ar_reverse(X7, x7_col, x7_length-100, x7_length);



    //последний раунд
    qsort(X7, x7_length, sizeof(uint32_t)*x7_col, cmp8);
//    print_ar(X7, 3000, x7_col);

 int k =0;
    for(k = 0; k< x7_length; k++){
        if(*(X7+k*x7_col)!=0) break;
    }
    printf("K = %d\n", k);
    uint32_t x8_length = 0;
    uint32_t temp00 =  *X7+k*x7_col;
    uint32_t temp01 =  *X7+k*x7_col+1;
    int c = 1; //счетчик слов, с коллизией в первых 20 битах
    for(int i = 1+k; i<x7_length; i++){
        uint32_t temp10 = *(X7 + i*x7_col);
        uint32_t temp11 = *(X7 + i*x7_col+1);
        if(temp00==temp10 && temp01 == temp11) c++;
        else{
//            printf("%d ",c);
            temp00 = temp10;
            temp01 = temp11;
            x8_length = x8_length + binomialCoeff(c, 2);
            c = 1;
        }
    }
    x8_length = x8_length+binomialCoeff(c, 2);
    printf("ssssize: %d \n",x8_length);
    free(X);
    free(X1);
    free(X2);
    free(X3);
    free(X4);
    free(X5);
    free(X6);

    uint32_t *X8;
    uint16_t x8_col = 512;
    X8 = (uint32_t*) malloc(x8_col * x8_length * sizeof(uint32_t));

    new_ar_last(X7,x7_length, x7_col, X8, x0_length, 512, k);

    print_ar(X8, 67, 512);

    printf("%.4lf sec\n", (clock() - start) / CLOCKS_PER_SEC);
    printf("%.4lf sols/sec", x8_length/(clock() - start));
    return 0;
}

uint32_t next_ar_len (uint32_t* X, int cols, int rows, int round) {
    int k = first_non_zero_indic(X, cols,rows, round);
    uint32_t length = 0;
    uint32_t temp0 =  *X + k*cols;
    int c = 1; //счетчик слов, с коллизией в первых 20 битах
    for(int i = 1+k; i<rows; i++){
        uint32_t temp = *(X + i*cols);
        if(temp0==temp) c++;
        else{
            temp0 = temp;
            length = length + binomialCoeff(c, 2);
            c = 1;
        }
    }
    length = length+binomialCoeff(c, 2);
    return length;
}
void new_ar(int round, uint32_t* X, int rows, int cols, uint32_t* new_X, int new_rows, int new_cols){
    printf("ROUND: %d, AR_LENGTH: %d, AR_SIZE: %d MB\n", round, new_rows, (new_rows*new_cols*4)/(2<<20));
    int i=0, j=0;
    int k = first_non_zero_indic(X, rows, cols, round);
    printf("%d\n",k);
    uint32_t t0, t1;
    int ind_cols = 1 << (round - 1);
    while (k < rows-1) {
        t0 = *(X + k * cols);
        k++;
        t1 = *(X + k * cols);
        while(t0 == t1&&j<new_rows){
            for(int w = 1; w < 11 - round; w++){
                *(new_X + j*new_cols + w - 1) = *(X + (k-1) * cols + w) ^ *(X + (k+i) * cols + w);
            }
            for(int h = 0; h < ind_cols; h++){
                *(new_X + j * new_cols + 10 - round + h)            = *(X + (k - 1) * cols + 11 - round + h);
                *(new_X + j * new_cols + ind_cols + 10 - round + h) = *(X + (k + i) * cols + 11 - round + h);
            }
            i++; j++;
            t1 = *(X + (k + i) * cols);
        }
        i = 0;
    }
}

int first_non_zero_indic(uint32_t* X, int rows, int col, int round){
    int k = 0, len = 10-round;
    int i = 0;
    while(k< rows){
        for(i = 0; i< len; i++){
            if(*(X+k*col+i)!=0) break;
        }
        if(*(X+k*col+i)!=0) break;
        k++;
    }
    return k;
}

void xor(uint32_t* X, uint32_t* sol, int sol_len){
    uint32_t xo[10];
    for(int i =0 ; i< 10; i++) xo[i] = *(X + sol[0] * 11 +i);
    for(int i = 0; i< sol_len; i++){
        for(int j = 0; j<11; j++) {
            printf("%x ", *(X + sol[i] * 11 + j));

        }
        printf("\n");
        if(i>0) {
            for(int k = 0; k< 10; k++){
                xo[k] = xo[k]^(*(X+sol[i]*11+k));
            }
        }
    }
    printf("-------------------------------------------------------\n");

    for(int i =0 ; i< 10; i++) printf("%x ",xo[i]);
    printf("\n-------------------------------------------------------\n");

}
void new_ar_last(uint32_t* X, int rows, int cols, uint32_t* new_X, int new_rows, int new_cols, int k){
    printf("LAST ROUND\n");
    int i=0, j=0;
    uint32_t t00, t01, t10, t11;
    int ind_cols = 256;

    while (k < rows-1) {
        t00 = *(X + k * cols);
        t01 = *(X + k * cols +1);

        k++;

        t10 = *(X + k * cols );
        t11 = *(X + k * cols +1);
        while((t00 == t10 )&&( t01 == t11) && (j < new_rows)){

            for(int h = 0; h < ind_cols; h++){
                *(new_X + j * new_cols  + h)            = *(X + (k - 1) * cols + 2+ h);
                *(new_X + j * new_cols + ind_cols + h)  =  *(X + (k + i) * cols + 2 + h);
            }
            i++; j++;
            t10 = *(X + (k + i) * cols);
            t11 = *(X + (k + i) * cols +1);
        }
        i = 0;
    }
}

