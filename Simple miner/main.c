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
        {
                1227580, 1857265, 1514298, 1312477, 975669, 874364, 1412800, 1277680, 953386, 1932936, 1100512, 1362504, 1214133, 897391, 1099076, 440815, 502224, 1313997, 330340, 1587177, 1667228, 400402, 946451, 889478, 1667524, 794443, 876859, 658974, 1023489, 2067426, 470672, 2019542, 1134076, 707998, 413021, 1465354, 1486036, 1369720, 977854, 1604295, 1902110, 273361, 1786006, 1169410, 1442649, 168956, 766023, 1171907, 1450024, 7981, 1250305, 861459, 339783, 1935047, 329669, 226676, 1908111, 939034, 369590, 1564617, 1315880, 1147449, 1428599, 1276715, 1130822, 444653, 1669752, 514258, 1691366, 1164894, 578843, 729315, 1755448, 1858538, 1810711, 121088, 97237, 1677265, 707752, 1265819, 2055483, 367891, 54713, 50017, 715652, 1347279, 1714951, 561571, 1382627, 1364767, 1387373, 2054399, 1125289, 1002587, 584549, 1642138, 12478, 219890, 1351062, 534265, 627900, 1331192, 651682, 65060, 865936, 123915, 1732445, 1218072, 429968, 1097946, 947293, 1323447, 1943189, 923792, 1212459, 157573, 915443, 2095861, 1697044, 488881, 1071114, 1473446, 1978648, 575434, 1600549, 336101, 333566, 732311, 1203395, 1760681, 1439278, 1628494, 1559477, 1468636, 1446980, 1014827, 236616, 1439683, 420968, 943170, 1882692, 607595, 913814, 57884, 894084, 847745, 1484918, 1523367, 1320024, 1826734, 1745948, 494922, 917335, 1361918, 937682, 1885495, 195166, 198686, 1208465, 349906, 974380, 232412, 10680, 1027631, 1316524, 1400456, 1827006, 457702, 2032682, 91745, 192412, 710106, 1329079, 1504143, 1963798, 556298, 529637, 223846, 425255, 680712, 1647860, 639216, 102455, 974420, 798134, 443572, 154734, 541808, 322981, 1728849, 1696726, 1306504, 244013, 528281, 1741992, 1779660, 435612, 1270863, 996273, 313314, 734528, 349396, 1678799, 902268, 1031587, 1147423, 1385279, 337273, 1692641, 448870, 223176, 4313, 551567, 214911, 1696002, 1768726, 500589, 938660, 724628, 1319625, 1222606, 665376, 1474613, 632093, 1712346, 652307, 396772, 1026145, 1557573, 1711408, 207200, 390061, 1860165, 75564, 1057819, 1609847, 449808, 527480, 1252890, 1106201, 120530, 2034017, 1160178, 948243, 10902, 1231236, 1454381, 1873452, 1029510, 649903, 698704, 457535, 1087419, 1734550, 198008, 1704079, 1715089, 2079204, 17572, 923473, 761569, 1557392, 1183431, 1133336, 175157, 1560762, 927810, 418801, 825783, 734183, 1951050, 1844176, 459168, 1897513, 1478683, 1403594, 458765, 1834140, 1114189, 1761250, 1461390, 683333, 1595955, 634967, 1630506, 711727, 317246, 336419, 1848863, 767300, 1607180, 1819984, 1371156, 877950, 1420249, 29456, 171532, 2068307, 1601334, 96859, 2083421, 980009, 2030243, 1329455, 706815, 1024831, 1580686, 154310, 507836, 772757, 84140, 658024, 69434, 1965626, 804515, 1339113, 2080090, 619032, 1252075, 396271, 981619, 273794, 683206, 1485056, 151947, 748306, 2070676, 1987121, 1722044, 1971986, 1136227, 1945705, 930443, 2040726, 766481, 2047708, 1376579, 361557, 1587551, 1715060, 1354420, 1850496, 1581980, 1224593, 1675320, 785058, 380012, 149918, 1095925, 267071, 1318422, 1149690, 1333432, 245610, 302279, 776959, 1523487, 263110, 623933, 2013452, 1488503, 1615769, 1888497, 1515550, 66704, 614858, 957013, 256342, 1559313, 1320730, 234271, 971899, 2040071, 1690310, 1837403, 1312540, 68977, 122033, 1849411, 680726, 426308, 1292824, 460128, 1613657, 173620, 587765, 15609, 1917824, 2024998, 122779, 804857, 1619761, 1765683, 637666, 1186388, 782619, 493788, 410197, 110829, 1514369, 1955796, 817285, 1961262, 1014018, 1008905, 985486, 873632, 1689675, 494761, 1536166, 1582152, 1868968, 825150, 1709404, 1657222, 1273757, 930466, 1627114, 746829, 751041, 761785, 1014134, 1821269, 345577, 507500, 588000, 1216514, 1501422, 991142, 1378804, 1797181, 1976685, 2017790, 1545438, 1677146, 883018, 1165124, 297204, 1879515, 197814, 1557389, 980696, 1738170, 1244581, 535509, 419669, 897076, 130394, 375204, 878797, 1969930, 1311831, 327387, 1708909, 961310, 1453127, 1082106, 1840879, 263652, 1683026, 1056514, 768542, 888164, 1529401, 467427, 1305086, 812115, 1065593, 1537472, 583937, 451358, 1229838, 1318066, 954202, 1656280, 532687, 1722064, 1232462, 1963300, 1164182, 1733428, 993758, 897097, 1961763, 230826, 2064804, 1224594, 1434135, 453009, 973231, 1857154, 1746809, 306643, 1402222, 532661, 627295, 1878268, 1105447, 952908, 770302, 383613, 645316, 60742, 780804, 1733938, 906863, 2049718, 1315563, 1961414, 504292, 1198221, 693833

        };
static unsigned char massage[]={      4, 0, 0, 0,
                                   0xe5, 0x4c, 0x27, 0x54, 0x40, 0x50, 0x66, 0x8f, 0x27, 0x2e, 0xc3, 0xb4, 0x60, 0xe1, 0xcd, 0xe7, 0x45, 0xc6, 0xb2, 0x12, 0x39, 0xa8, 0x1d, 0xae, 0x63, 0x7f, 0xde, 0x47, 0x04,0,0,0,
                                   0x84, 0x4b, 0xc0, 0xc5, 0x56, 0x96, 0xef, 0x99, 0x20, 0xee, 0xda, 0x11, 0xc1, 0xeb, 0x41, 0xb0, 0xc2, 0xe7, 0x32, 0x4b, 0x46, 0xcc, 0x2e, 0x7a, 0xa0, 0xc2, 0xaa, 0x77, 0x36, 0x44, 0x8d, 0x7a,
                                   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,0, 0,
                                   0x68, 0x24, 0x1a, 0x58,
                                   0x7e, 0x7e, 0x06, 0x1d,
                                   0x25, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                                            0,0,0,0
};
uint32_t next_ar_len (uint32_t* X, int cols, int rows, int round);
int new_ar(int round, uint32_t* X, int rows, int cols, uint32_t* new_X, int new_rows, int new_cols);

//функция - компаратор для сортировки qsort, определяет корректно только для 10 -ти первых элементов массива
//    qsort(X, n, sizeof(uint32_t)*11, cmpmem);  //сортировка
int cmp (const void * a, const void * b ) {
//    uint32_t s1[10], s2[10];
    int32_t s[10];
    for(int i = 0; i< 10; i++){
        s[i] = ( *((int*)a+i))-( *((int*)b+i));
        if(s[i]!=0) return s[i];
    }
    return  *((uint32_t *)a)- ( *((uint32_t *)b));
}
int cmp1 (const void * a, const void * b ) {
    int32_t s[9];
    for(int i = 0; i< 9; i++){
        s[i] = ( *((int*)a+i))-( *((int*)b+i));
        if(s[i]!=0) return s[i];
    }
    return 0;
}
int cmp2 (const void * a, const void * b ) {
    int32_t s[8];
    for(int i = 0; i< 8; i++){
        s[i] = ( *((int*)a+i))-( *((int*)b+i));
        if(s[i]!=0) return s[i];
    }
    return 0;
}
int cmp3 (const void * a, const void * b ) {
    int32_t s[7];
    for(int i = 0; i< 7; i++){
        s[i] = ( *((int*)a+i))-( *((int*)b+i));
        if(s[i]!=0) return s[i];
    }
    return 0;
}
int cmp4 (const void * a, const void * b ) {
    int32_t s[6];
    for(int i = 0; i< 6; i++){
        s[i] = ( *((int*)a+i))-( *((int*)b+i));
        if(s[i]!=0) return s[i];
    }
    return 0;
}
int cmp5 (const void * a, const void * b ) {
    int32_t s[5];
    for(int i = 0; i< 5; i++){
        s[i] = ( *((int*)a+i))-( *((int*)b+i));
        if(s[i]!=0) return s[i];
    }
    return 0;
}
int cmp6 (const void * a, const void * b ) {
    int32_t s[4];
    for(int i = 0; i< 4; i++){
        s[i] = ( *((int*)a+i))-( *((int*)b+i));
        if(s[i]!=0) return s[i];
    }
    return 0;
}
int cmp7 (const void * a, const void * b ) {
    int32_t s[3];
    for(int i = 0; i< 3; i++){
        s[i] = ( *((int*)a+i))-( *((int*)b+i));
        if(s[i]!=0) return s[i];
    }
    return 0;
}
int cmp8 (const void * a, const void * b ) {
    int32_t s[2];
    for(int i = 0; i< 2; i++){
        s[i] = ( *((int*)a+i))-( *((int*)b+i));
        if(s[i]!=0) return s[i];
    }
    return 0;
}


int min(int a, int b);

void xor(uint32_t* X, uint32_t* sol, int sol_len);

int first_non_zero_indic(uint32_t* X, int rows, int col, int round);

int new_ar_last(uint32_t* X, int rows, int cols, uint32_t* new_X, int new_rows, int new_cols, int k);

int distinct_indices(uint32_t* X, int cols, int start, int ind1, int ind2);

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
        printf("[%d] ",i);
        for(int j = 0; j< col; j++){
            printf("%d, " ,*(X+i*col + j));
//            printf("%x ", *(X+i*col + j));
        }
        printf("\n");
    }
    printf("----------------------------------------------------------------\n");
}
void print_ar_from_to(const uint32_t *X, int col, int start, int end){
    for(int i=start; i< end; i++){
        printf("[%d] ",i);
        for(int j = 0; j< col; j++){
            printf("%x " ,*(X+i*col + j));
//            printf("%x ", *(X+i*col + j));
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
    double start1 = clock();
    for(uint32_t k = 0; k<n; k=k+2){
        count = (k>>1)&0xffffffff;
        unsigned char test[] = {'b','l','o','c','k',' ','q','e','a','d','e','r',0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                                0,0,0,0,0,0,0,0,0,0,0,0,0,0,count&0xff, (count>>8)&0xff, (count>>16)&0xff, count>>24};
        massage[140] = (unsigned char) (count & 0xff);
        massage[141] = (unsigned char) ((count >> 8) & 0xff);
        massage[142] = (unsigned char) ((count >> 16) & 0xff);
        massage[143] = (unsigned char) (count >> 24);
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
    printf("first array generating: %.4lf sec\n", (clock() - start1) / CLOCKS_PER_SEC);
    start1 = clock();

    uint32_t *X_source;
    X_source = (uint32_t*) malloc(m * n * sizeof(uint32_t));
    memcpy(X_source, X, m * n * sizeof(uint32_t));

    qsort(X, n, sizeof(uint32_t)*11, cmp);  //сортировка
    printf("copy array and first sort: %.4lf sec\n", (clock() - start1) / CLOCKS_PER_SEC);

    uint16_t x0_col = 11;
    uint32_t x0_length = next_ar_len(X, x0_col, n, 1); //определение размера длины массива Х для будущего раунда.
    uint32_t *X0;
    X0 = (uint32_t*) malloc(x0_col * x0_length * sizeof(uint32_t));
    new_ar(1, X, n, x0_col, X0, x0_length, x0_col);


    //раунд 2
    start1 = clock();
    qsort(X0, x0_length, sizeof(uint32_t)*11, cmp1); //сортировка
    printf("sort 2: %.4lf sec\n", (clock() - start1) / CLOCKS_PER_SEC);

    uint32_t x1_length = next_ar_len(X0, 11, x0_length,2); //определение размера нового массива
    uint32_t *X1;
    uint16_t x1_col = 12;
    X1 = (uint32_t*) malloc(x1_col * x1_length * sizeof(uint32_t));
    new_ar(2, X0, x0_length, m, X1, x1_length, x1_col);

    //раунд 3
    start1 = clock();
    qsort(X1, x1_length, sizeof(uint32_t)*x1_col, cmp2); //сортировка
    printf("sort 3: %.4lf sec\n", (clock() - start1) / CLOCKS_PER_SEC);




    uint32_t x2_length = next_ar_len(X1, x1_col, x1_length,3); //определение размера нового массива
    uint32_t *X2;
    uint16_t x2_col = 15;
    X2 = (uint32_t*) malloc(x2_col * x2_length * sizeof(uint32_t));
    new_ar(3, X1, x1_length, x1_col, X2, x2_length, x2_col);

//    free(X0);
    //раунд 4

    start1 = clock();
    qsort(X2, x2_length, sizeof(uint32_t)*x2_col, cmp3); //сортировка
    printf("sort 4: %.4lf sec\n", (clock() - start1) / CLOCKS_PER_SEC);


    uint32_t x3_length = next_ar_len(X2, x2_col, x2_length,4); //определение размера нового массива
    uint32_t *X3;
    uint16_t x3_col = 22;
    X3 = (uint32_t*) malloc(x3_col * x3_length * sizeof(uint32_t));
    new_ar(4, X2, x2_length, x2_col, X3, x3_length, x3_col);


    //раунд 5
    start1 = clock();
    qsort(X3, x3_length, sizeof(uint32_t)*x3_col, cmp4); //сортировка
    printf("sort 5: %.4lf sec\n", (clock() - start1) / CLOCKS_PER_SEC);

    uint32_t x4_length = next_ar_len(X3, x3_col, x3_length, 5); //определение размера нового массива
    uint32_t *X4;
    uint16_t x4_col = 37;
    X4 = (uint32_t*) malloc(x4_col * x4_length * sizeof(uint32_t));
    new_ar(5, X3, x3_length, x3_col, X4, x4_length, x4_col);


    //раунд 6
    start1 = clock();
    qsort(X4, x4_length, sizeof(uint32_t)*x4_col, cmp5); //сортировка
    printf("sort 6: %.4lf sec\n", (clock() - start1) / CLOCKS_PER_SEC);

    uint32_t x5_length =  next_ar_len(X4, x4_col, x4_length, 6); ; //определение размера нового массива
    uint32_t *X5;
    uint16_t x5_col = 68;
    X5 = (uint32_t*) malloc(x5_col * x5_length * sizeof(uint32_t));
    new_ar(6, X4, x4_length, x4_col, X5, x5_length, x5_col);

    //раунд 7
    start1 = clock();
    qsort(X5, x5_length, sizeof(uint32_t)*x5_col, cmp6); //сортировка
    printf("sort 7: %.4lf sec\n", (clock() - start1) / CLOCKS_PER_SEC);

    uint32_t x6_length =  next_ar_len(X5, x5_col, x5_length, 7); ; //определение размера нового массива
    uint32_t *X6;
    uint16_t x6_col = 131;
    X6 = (uint32_t*) malloc(x6_col * x6_length * sizeof(uint32_t));
    new_ar(7, X5, x5_length, x5_col, X6, x6_length, x6_col);

    //раунд 8
    start1 = clock();
    qsort(X6, x6_length, sizeof(uint32_t)*x6_col, cmp7); //сортировка
    printf("sort 7: %.4lf sec\n", (clock() - start1) / CLOCKS_PER_SEC);

    uint32_t x7_length =  next_ar_len(X6, x6_col, x6_length, 8); //определение размера нового массива
    uint32_t *X7;
    uint16_t x7_col = 258;
    X7 = (uint32_t*) malloc(x7_col * x7_length * sizeof(uint32_t));
    new_ar(8, X6, x6_length, x6_col, X7, x7_length, x7_col);

    //последний раунд
    start1 = clock();
    qsort(X7, x7_length, sizeof(uint32_t)*x7_col, cmp8);
    printf("last round sort: %.4lf sec\n", (clock() - start1) / CLOCKS_PER_SEC);

 int k =0;
    for(k = 0; k< x7_length; k++){
        if(*(X7+k*x7_col+1)!=0) break;
    }
    printf("K = %d \n", k);
    uint32_t x8_length = 0;
    uint32_t temp00 =  *X7+k*x7_col;
    uint32_t temp01 =  *X7+k*x7_col+1;
    int c = 1; //счетчик слов, с коллизией в первых 20 битах
    for(int i = 1+k; i<x7_length; i++){
        uint32_t temp10 = *(X7 + i*x7_col);
        uint32_t temp11 = *(X7 + i*x7_col+1);
        if((temp10==temp00) && (temp11 == temp01)){
            c++;
        }
        else{
            temp00 = temp10;
            temp01 = temp11;
            x8_length = x8_length + binomialCoeff(c, 2);
            c = 1;
        }
    }
    x8_length = x8_length+binomialCoeff(c, 2);
    printf("size: %d \n",x8_length);
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

    int sol_count = new_ar_last(X7,x7_length, x7_col, X8, x8_length, 512, k);

    print_ar(X8, sol_count, 512);

    printf("%.4lf sec\n", (clock() - start) / CLOCKS_PER_SEC);
    return 0;
}

uint32_t next_ar_len (uint32_t* X, int cols, int rows, int round) {

    int k = first_non_zero_indic(X, rows,cols, round);
    uint32_t length = 0;
    uint32_t temp0 =  *X + k*cols;
    int c = 1;
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
    return length+1;
}
int new_ar(int round, uint32_t* X, int rows, int cols, uint32_t* new_X, int new_rows, int new_cols){
    double start = clock();
    int i=0, j=0;
    int k = first_non_zero_indic(X, rows, cols, round);
    printf("ROUND: %d, AR_SIZE: %d MB, K: %d; ", round, (new_rows*new_cols*4)/(2<<20), k);
    uint32_t t0, t1;
    int ind_cols = 1 << (round - 1);
    int coll = 0;
    while (k < rows-1) {
        t0 = *(X + k * cols);
        k++;
        t1 = *(X + k * cols);
        while(t0 == t1) {
//            if(distinct_indices(X, cols, 11-round,k-1,k+i)==0){
//                coll++;
//            }
            for (int w = 1; w < 11 - round; w++) {
                *(new_X + j * new_cols + w - 1) = *(X + (k - 1) * cols + w) ^ *(X + (k + i) * cols + w);
            }
            for (int h = 0; h < ind_cols; h++) {
                *(new_X + j * new_cols + 10 - round + h) = *(X + (k - 1) * cols + 11 - round + h);
                *(new_X + j * new_cols + ind_cols + 10 - round + h) = *(X + (k + i) * cols + 11 - round + h);
            }
            j++;
//        } else{coll++;}
            i++;
            t1 = *(X + (k + i) * cols);
        }
        i = 0;
    }
    printf("coll = %d; time of generation: %.4lf sec\n",coll, (clock() - start) / CLOCKS_PER_SEC);

    return  j;
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
int new_ar_last(uint32_t* X, int rows, int cols, uint32_t* new_X, int new_rows, int new_cols, int k){
    double start = clock();
    printf("LAST ROUND start size: %d ", (new_rows*new_cols*4)/(2<<20));
    int i=0, j=0;
    uint32_t t00, t01, t10, t11;
    int ind_cols = 256;
    int coll = 0;

    while (k < rows-1) {
        t00 = *(X + k * cols);
        t01 = *(X + k * cols +1);

        k++;

        t10 = *(X + k * cols );
        t11 = *(X + k * cols +1);
        while((t00 == t10 )&&( t01 == t11)){
            if(distinct_indices(X, cols, 2, k-1, k+i)==1) {
                for (int h = 0; h < ind_cols; h++) {
                    *(new_X + j * new_cols + h) = *(X + (k - 1) * cols + 2 + h);
                    *(new_X + j * new_cols + ind_cols + h) = *(X + (k + i) * cols + 2 + h);
                }
                j++;
            } else{coll++;}
            i++;
            t10 = *(X + (k + i) * cols);
            t11 = *(X + (k + i) * cols +1);
        }
        i = 0;
    }
    printf("end size: %d; time of generation: %.4lf sec\n", (j*new_cols*4)/(2<<20), (clock() - start) / CLOCKS_PER_SEC);

    return  j;
}


int distinct_indices(uint32_t* X, int cols, int start, int ind1, int ind2){
    for(int x = start; x< cols; x++){
        for(int y = start; y< cols; y++){
            if(*(X + ind1 * cols+x) == *(X + ind2 * cols+y)) return 0;
        }
    }
    return 1;
}

