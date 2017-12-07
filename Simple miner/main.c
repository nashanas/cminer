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
static const int sol[] = {4313, 223176, 448870, 1692641, 214911, 551567, 1696002, 1768726, 500589, 938660, 724628, 1319625, 632093, 1474613, 665376, 1222606, 244013, 528281, 1741992, 1779660, 313314, 996273, 435612, 1270863, 337273, 1385279, 1031587, 1147423, 349396, 734528, 902268, 1678799, 10902, 1231236, 1454381, 1873452, 120530, 2034017, 948243, 1160178, 198008, 1704079, 1087419, 1734550, 457535, 698704, 649903, 1029510, 75564, 1860165, 1057819, 1609847, 449808, 527480, 1106201, 1252890, 207200, 390061, 1557573, 1711408, 396772, 1026145, 652307, 1712346, 10680, 1027631, 232412, 974380, 457702, 1827006, 1316524, 1400456, 91745, 2032682, 192412, 710106, 556298, 1963798, 1329079, 1504143, 102455, 974420, 639216, 1647860, 223846, 529637, 425255, 680712, 154734, 541808, 443572, 798134, 322981, 1728849, 1306504, 1696726, 57884, 913814, 607595, 1882692, 236616, 1439683, 420968, 943170, 1014827, 1446980, 1468636, 1559477, 1203395, 1760681, 1439278, 1628494, 195166, 198686, 349906, 1208465, 917335, 1361918, 937682, 1885495, 494922, 1745948, 1320024, 1826734, 847745, 894084, 1484918, 1523367, 7981, 1450024, 861459, 1250305, 226676, 329669, 339783, 1935047, 369590, 1564617, 939034, 1908111, 1147449, 1315880, 1276715, 1428599, 168956, 1442649, 766023, 1171907, 273361, 1902110, 1169410, 1786006, 413021, 1465354, 707998, 1134076, 977854, 1604295, 1369720, 1486036, 330340, 1587177, 502224, 1313997, 400402, 1667228, 889478, 946451, 470672, 2019542, 1023489, 2067426, 658974, 876859, 794443, 1667524, 440815, 1099076, 897391, 1214133, 953386, 1932936, 1100512, 1362504, 874364, 975669, 1277680, 1412800, 1227580, 1857265, 1312477, 1514298, 12478, 219890, 534265, 1351062, 65060, 651682, 627900, 1331192, 123915, 865936, 1218072, 1732445, 429968, 1097946, 947293, 1323447, 157573, 1212459, 923792, 1943189, 488881, 1697044, 915443, 2095861, 333566, 732311, 336101, 1600549, 575434, 1978648, 1071114, 1473446, 50017, 54713, 367891, 2055483, 561571, 1714951, 715652, 1347279, 584549, 1642138, 1002587, 1125289, 1364767, 1382627, 1387373, 2054399, 97237, 1677265, 707752, 1265819, 121088, 1810711, 1755448, 1858538, 444653, 1130822, 514258, 1669752, 578843, 729315, 1164894, 1691366, 15609, 1917824, 173620, 587765, 122779, 2024998, 804857, 1619761, 110829, 1514369, 410197, 493788, 637666, 1765683, 782619, 1186388, 494761, 1536166, 1582152, 1868968, 825150, 1709404, 1273757, 1657222, 817285, 1955796, 1014018, 1961262, 873632, 1689675, 985486, 1008905, 130394, 897076, 419669, 535509, 980696, 1557389, 1244581, 1738170, 197814, 1879515, 297204, 1165124, 883018, 1677146, 1545438, 2017790, 345577, 1821269, 761785, 1014134, 746829, 751041, 930466, 1627114, 507500, 588000, 1216514, 1501422, 991142, 1378804, 1797181, 1976685, 60742, 780804, 383613, 645316, 770302, 952908, 1105447, 1878268, 504292, 1961414, 693833, 1198221, 906863, 1733938, 1315563, 2049718, 230826, 2064804, 1224594, 1434135, 897097, 1961763, 993758, 1733428, 306643, 1402222, 532661, 627295, 453009, 973231, 1746809, 1857154, 263652, 1683026, 1082106, 1840879, 768542, 1056514, 888164, 1529401, 327387, 1708909, 961310, 1453127, 375204, 878797, 1311831, 1969930, 451358, 1229838, 583937, 1537472, 467427, 1305086, 812115, 1065593, 532687, 1656280, 954202, 1318066, 1164182, 1963300, 1232462, 1722064, 17572, 923473, 1715089, 2079204, 761569, 1557392, 1133336, 1183431, 175157, 1560762, 418801, 927810, 734183, 825783, 1844176, 1951050, 317246, 336419, 711727, 1630506, 634967, 1595955, 683333, 1461390, 458765, 1834140, 1114189, 1761250, 459168, 1897513, 1403594, 1478683, 29456, 1420249, 877950, 1371156, 767300, 1848863, 1607180, 1819984, 96859, 1601334, 171532, 2068307, 980009, 2083421, 1329455, 2030243, 69434, 1965626, 804515, 1339113, 396271, 1252075, 619032, 2080090, 84140, 658024, 507836, 772757, 154310, 1580686, 706815, 1024831, 66704, 614858, 256342, 957013, 1488503, 1615769, 1515550, 1888497, 245610, 1333432, 302279, 776959, 263110, 1523487, 623933, 2013452, 68977, 122033, 680726, 1849411, 426308, 1292824, 460128, 1613657, 234271, 971899, 1320730, 1559313, 1312540, 1837403, 1690310, 2040071, 149918, 380012, 785058, 1675320, 267071, 1095925, 1149690, 1318422, 361557, 1376579, 1587551, 1715060, 1224593, 1581980, 1354420, 1850496, 151947, 748306, 1987121, 2070676, 273794, 981619, 683206, 1485056, 766481, 2047708, 930443, 2040726, 1136227, 1945705, 1722044, 1971986};

int next_ar_len (uint32_t* X, int cols, int rows);
void new_ar(int round, uint32_t* X, int rows, int cols, uint32_t* new_X, int new_rows, int new_cols);

//функция - компаратор для сортировки qsort, определяет корректно только для 10 -ти первых элементов массива
int cmp0 (const void * a, const void * b ) {
    //    uint32_t s1[10], s2[10];

       return ( *((int*)a+10))-( *((int*)b+10));
 
}
int cmp (const void * a, const void * b ) {
//    uint32_t s1[10], s2[10];
    int32_t s[10];
    for(int i = 0; i< 10; i++){
        s[i] = ( *((int*)a+i))-( *((int*)b+i));
    }
    if(s[0]==0&&s[1]==0&&s[2]==0&&s[3]==0&&s[4]==0&&s[5]==0&&s[6]==0&&s[7]==0&&s[8]==0) return s[9];
    if(s[0]==0&&s[1]==0&&s[2]==0&&s[3]==0&&s[4]==0&&s[5]==0&&s[6]==0&&s[7]==0) return s[8];
    if(s[0]==0&&s[1]==0&&s[2]==0&&s[3]==0&&s[4]==0&&s[5]==0&&s[6]==0) return s[7];
    if(s[0]==0&&s[1]==0&&s[2]==0&&s[3]==0&&s[4]==0&&s[5]==0) return s[6];
    if(s[0]==0&&s[1]==0&&s[2]==0&&s[3]==0&&s[4]==0) return s[5];
    if(s[0]==0&&s[1]==0&&s[2]==0&&s[3]==0) return s[4];
    if(s[0]==0&&s[1]==0&&s[2]==0) return s[3];
    if(s[0]==0&&s[1]==0) return s[2];
    if(s[0]==0) return s[1];
    
    return s[0];
}
int cmp1 (const void * a, const void * b ) {
    int32_t s[9];
    for(int i = 0; i< 9; i++){
        s[i] = ( *((int*)a+i))-( *((int*)b+i));
    }
    if(s[0]==0&&s[1]==0&&s[2]==0&&s[3]==0&&s[4]==0&&s[5]==0&&s[6]==0&&s[7]==0) return s[8];
    if(s[0]==0&&s[1]==0&&s[2]==0&&s[3]==0&&s[4]==0&&s[5]==0&&s[6]==0) return s[7];
    if(s[0]==0&&s[1]==0&&s[2]==0&&s[3]==0&&s[4]==0&&s[5]==0) return s[6];
    if(s[0]==0&&s[1]==0&&s[2]==0&&s[3]==0&&s[4]==0) return s[5];
    if(s[0]==0&&s[1]==0&&s[2]==0&&s[3]==0) return s[4];
    if(s[0]==0&&s[1]==0&&s[2]==0) return s[3];
    if(s[0]==0&&s[1]==0) return s[2];
    if(s[0]==0) return s[1];
    return s[0];
}
int cmp2 (const void * a, const void * b ) {
    int32_t s[8];
    for(int i = 0; i< 8; i++) s[i] = ( *((int*)a+i))-( *((int*)b+i));
    if(s[0]==0&&s[1]==0&&s[2]==0&&s[3]==0&&s[4]==0&&s[5]==0&&s[6]==0) return s[7];
    if(s[0]==0&&s[1]==0&&s[2]==0&&s[3]==0&&s[4]==0&&s[5]==0) return s[6];
    if(s[0]==0&&s[1]==0&&s[2]==0&&s[3]==0&&s[4]==0) return s[5];
    if(s[0]==0&&s[1]==0&&s[2]==0&&s[3]==0) return s[4];
    if(s[0]==0&&s[1]==0&&s[2]==0) return s[3];
    if(s[0]==0&&s[1]==0) return s[2];
    if(s[0]==0) return s[1];
    return s[0];
}
int cmp3 (const void * a, const void * b ) {
    int32_t s[7];
    for(int i = 0; i< 7; i++) s[i] = ( *((int*)a+i))-( *((int*)b+i));
    if(s[0]==0&&s[1]==0&&s[2]==0&&s[3]==0&&s[4]==0&&s[5]==0) return s[6];
    if(s[0]==0&&s[1]==0&&s[2]==0&&s[3]==0&&s[4]==0) return s[5];
    if(s[0]==0&&s[1]==0&&s[2]==0&&s[3]==0) return s[4];
    if(s[0]==0&&s[1]==0&&s[2]==0) return s[3];
    if(s[0]==0&&s[1]==0) return s[2];
    if(s[0]==0) return s[1];
    return s[0];
}
int cmp4 (const void * a, const void * b ) {
    int32_t s[6];
    for(int i = 0; i< 6; i++) s[i] = ( *((int*)a+i))-( *((int*)b+i));
    if(s[0]==0&&s[1]==0&&s[2]==0&&s[3]==0&&s[4]==0) return s[5];
    if(s[0]==0&&s[1]==0&&s[2]==0&&s[3]==0) return s[4];
    if(s[0]==0&&s[1]==0&&s[2]==0) return s[3];
    if(s[0]==0&&s[1]==0) return s[2];
    if(s[0]==0) return s[1];
    return s[0];
}
int cmp5 (const void * a, const void * b ) {
    int32_t s[5];
    for(int i = 0; i< 5; i++) s[i] = ( *((int*)a+i))-( *((int*)b+i));
    if(s[0]==0&&s[1]==0&&s[2]==0&&s[3]==0) return s[4];
    if(s[0]==0&&s[1]==0&&s[2]==0) return s[3];
    if(s[0]==0&&s[1]==0) return s[2];
    if(s[0]==0) return s[1];
    return s[0];
}
int cmp6 (const void * a, const void * b ) {
    int32_t s[4];
    for(int i = 0; i< 4; i++) s[i] = ( *((int*)a+i))-( *((int*)b+i));
    if(s[0]==0&&s[1]==0&&s[2]==0) return s[3];
    if(s[0]==0&&s[1]==0) return s[2];
    if(s[0]==0) return s[1];
    return s[0];
}
int cmp7 (const void * a, const void * b ) {
    int32_t s[3];
    for(int i = 0; i< 3; i++) s[i] = ( *((int*)a+i))-( *((int*)b+i));
    if(s[0]==0&&s[1]==0) return s[2];
    if(s[0]==0) return s[1];
    return s[0];
}
int cmp8 (const void * a, const void * b ) {
    int32_t s[2];
    for(int i = 0; i< 2; i++) s[i] = ( *((int*)a+i))-( *((int*)b+i));
    if(s[0]==0) return s[1];
    return s[0];
}
int cmp9 (const void * a, const void * b ) {
    return ( *((int*)a))-( *((int*)b));

}

int min(int a, int b);

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






int main(int argc, const char * argv[]) {
    const size_t n = 1<<21;
    const size_t m = 11;
    uint32_t *X;
    X = (uint32_t*) malloc(m * n * sizeof(uint32_t));

    uint8_t s[50];
    int j = 0;
    uint32_t count;
    for(int k = 0; k<n; k=k+2){
        count = (k>>1)&0xffffffff;
        unsigned char test[] = {'b','l','o','c','k',' ','h','e','a','d','e','r',0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,count&0xff, (count>>8)&0xff, (count>>16)&0xff, count>>24};
        blake2hash(s, test, 48);
        for(int i =0; i < 10; i=i+2){
            *(X + k*m + i) = (((s[j]<<8)|s[j+1])<<4)|(s[j+2]>>4);
            *(X + k*m + i+1) = ((((s[j+2]&0xf)<<8)|s[j+3])<<8)|s[j+4];
            j = j+5;
        }
        for(int i =0; i < 10; i=i+2){
            *(X + (k+1)*m + i) = (((s[j]<<8)|s[j+1])<<4)|(s[j+2]>>4);
            *(X + (k+1)*m + i+1) = ((((s[j+2]&0xf)<<8)|s[j+3])<<8)|s[j+4];
            j = j+5;
        }
        *(X + k*m + 10) = k;
        *(X + (k+1)*m + 10) = k+1;
        j = 0;
    }

    

    //раунд 1
    qsort(X, n, sizeof(uint32_t)*11, cmp);  //сортировка
    uint16_t x0_col = 11;
    uint32_t x0_length = next_ar_len(X, x0_col, n); //определение размера длины массива Х для будущего раунда.
    uint32_t *X0;
    X0 = (uint32_t*) malloc(x0_col * x0_length * sizeof(uint32_t));
    new_ar(1, X, n, x0_col, X0, x0_length, x0_col);
    
    //раунд 2
    qsort(X0, x0_length, sizeof(uint32_t)*11, cmp1); //сортировка
    uint32_t x1_length = next_ar_len(X0, 11, x0_length); //определение размера нового массива
    uint32_t *X1;
    uint16_t x1_col = 12;
    X1 = (uint32_t*) malloc(x1_col * x1_length * sizeof(uint32_t));
    new_ar(2, X0, x0_length, m, X1, x1_length, x1_col);
    //раунд 3
    qsort(X1, x1_length, sizeof(uint32_t)*x1_col, cmp2); //сортировка
    uint32_t x2_length = next_ar_len(X1, x1_col, x1_length); //определение размера нового массива
    uint32_t *X2;
    uint16_t x2_col = 15;
    X2 = (uint32_t*) malloc(x2_col * x2_length * sizeof(uint32_t));
    new_ar(3, X1, x1_length, x1_col, X2, x2_length, x2_col);
//    free(X0);
    //раунд 4
    qsort(X2, x2_length, sizeof(uint32_t)*x2_col, cmp3); //сортировка
    uint32_t x3_length = next_ar_len(X2, x2_col, x2_length); //определение размера нового массива
    uint32_t *X3;
    uint16_t x3_col = 22;
    X3 = (uint32_t*) malloc(x3_col * x3_length * sizeof(uint32_t));
    new_ar(4, X2, x2_length, x2_col, X3, x3_length, x3_col);
//    free(X1);
    //раунд 5
    qsort(X3, x3_length, sizeof(uint32_t)*x3_col, cmp4); //сортировка
    uint32_t x4_length = next_ar_len(X3, x3_col, x3_length); //определение размера нового массива
    uint32_t *X4;
    uint16_t x4_col = 37;
    X4 = (uint32_t*) malloc(x4_col * x4_length * sizeof(uint32_t));
    new_ar(5, X3, x3_length, x3_col, X4, x4_length, x4_col);
//    free(X2);
    //раунд 6
    qsort(X4, x4_length, sizeof(uint32_t)*x4_col, cmp5); //сортировка
    uint32_t x5_length = next_ar_len(X4, x4_col, x4_length); //определение размера нового массива
    uint32_t *X5;
    uint16_t x5_col = 68;
    X5 = (uint32_t*) malloc(x5_col * x5_length * sizeof(uint32_t));
    new_ar(6, X4, x4_length, x4_col, X5, x5_length, x5_col);
//    free(X3);
    //раунд 7
    qsort(X5, x5_length, sizeof(uint32_t)*x5_col, cmp6); //сортировка
    uint32_t x6_length = next_ar_len(X5, x5_col, x5_length); //определение размера нового массива
    uint32_t *X6;
    uint16_t x6_col = 131;
    X6 = (uint32_t*) malloc(x6_col * x6_length * sizeof(uint32_t));
    new_ar(7, X5, x5_length, x5_col, X6, x6_length, x6_col);
//    free(X4);
//    free(X5);
    //раунд 8
    qsort(X6, x6_length, sizeof(uint32_t)*x6_col, cmp7); //сортировка
    uint32_t x7_length = next_ar_len(X6, x6_col, x6_length); //определение размера нового массива
    uint32_t *X7;
    uint16_t x7_col = 258;
    X7 = (uint32_t*) malloc(x7_col * x7_length * sizeof(uint32_t));
    new_ar(8, X6, x6_length, x6_col, X7, x7_length, x7_col);

    //последний раунд
//    qsort(X7, x7_length, sizeof(uint32_t)*x7_col, cmp8);
//
//    uint32_t x8_length = 0;
//    uint32_t temp00 =  *X7;
//    uint32_t temp01 =  *X7+1;
//    int c = 1; //счетчик слов, с коллизией в первых 20 битах
//    for(int i = 1; i<x7_length; i++){
//        uint32_t temp10 = *(X7 + i*x7_col);
//        uint32_t temp11 = *(X7 + i*x7_col+1);
//        if(temp00==temp10 && temp01 == temp11) c++;
//        else{
////            printf("%d ",c);
//            temp00 = temp10;
//            temp01 = temp11;
//            x8_length = x8_length + binomialCoeff(c, 2);
//            c = 1;
//        }
//    }
//    printf("ssssize: %d \n",x8_length);
//
    
    
    
    for (int i = 0; i<20; i++){
        for(int k = 0; k<12; k++){
            printf("%x ", *(X0+ i*x0_col + k));
        }
        printf("\n");
    }
    printf("----------------------------\n");
    for (int i = 0; i<20; i++){
        for(int k = 0; k<12; k++){
            printf("%x ", *(X1+ i*x1_col + k));
        }
        printf("\n");
    }
    printf("-----------------------------\n");
    for (int i = 0; i<20; i++){
        for(int k = 0; k<12; k++){
            printf("%x ", *(X2+ i*x2_col + k));
        }
        printf("\n");
    }
      printf("-----------------------------\n");
    for (int i = 0; i<20; i++){
        for(int k = 0; k<12; k++){
            printf("%x ", *(X3+ i*x3_col + k));
        }
        printf("\n");
    }
    printf("-----------------------------\n");
    for (int i = 0; i<20; i++){
        for(int k = 0; k<12; k++){
            printf("%x ", *(X4+ i*x4_col + k));
        }
        printf("\n");
    }
    printf("-----------------------------\n");
    for (int i = 0; i<20; i++){
        for(int k = 0; k<12; k++){
            printf("%x ", *(X5+ i*x5_col + k));
        }
        printf("\n");
    }
    
    
//printf("-------------------\n");
//    uint32_t s1 = *(X1 + 8);
//    uint32_t s2 = *(X1+ 9);
//    uint32_t s3 = *(X1 + 10);
//    uint32_t s4 = *(X1 + 11);
//    printf("%x\n", s3);
//           qsort(X, n, sizeof(uint32_t)*11, cmp0);
//    for(int i =0; i<m; i++){
//        printf("%x ", *(X + s1*m+i));
//    }
//       printf("\n");
//    for(int i =0; i<m; i++){
//        printf("%x ", *(X + s2*m+i));
//    }
//       printf("\n");
//    for(int i =0; i<m; i++){
//        printf("%x ", *(X + s3*m+i));
//    }
//       printf("\n");
//    for(int i =0; i<m; i++){
//        printf("%x ", *(X + s4*m+i));
//    }
    
//    55ad0 68d2a 431cb 16ec8 4dd90 214a7 6bec9 53937 58dd8 b9b47 40991
//    afc19 d3f1f fbac c96ea 207bd c5204 65447 fd0c4 599f2 d4688 c69ef
//    2804e f8d1a fdbf2 7fc07 e118 e1c5b 3f163 dd965 c60a3 7685e 9acb0
//    c0735 eb9f0 eeb1f 9994f 39bab 9e850 4b94c f093b 105a0 7685e 71d22
//    86905 5ae7d 2da5c ae66b 5ee56 4e11e 86fb2 425b9 13b7f 7685e 1af9a5
//    9bb56 e37b d9d9a 7f836 6b8b4 39b8c 8432d 4c5b5 f37a7 7685e 1ae1b9 
    //первые четыре строки после 2го раунда
//    61a9b afcb7 ffe3a b5196 d0593 4fb16 e672c a24ef e97c7 123fb8 c979a 1e4f13
//    a9df6 49c1 46c7c e6e46 5778a cfe2d a35ef 3b75c c979a 1e4f13 73a4d 1e1486
//    162c3 a4f6d a9135 6651c f5356 aa220 685d2 7d9c7 7ca03 1a1859 1053f7 39742
//    5e21f 970b2 fce81 299a9 f57f5 9b3f 3f4fb fac8b 1053f7 39742 1e876e c52e
    
    
//    int p = *(X+4313*m);
//    for(int i = 1; i<512;i++){
//        p = p^(*(X+ m*sol[i]));
//    }

//    printf("%d\n", p);
    free(X);

    
    return 0;
}

int next_ar_len (uint32_t* X, int cols, int rows) {
    int length = 0;
    uint32_t temp0 =  *X;
    int c = 1; //счетчик слов, с коллизией в первых 20 битах
    for(int i = 1; i<rows; i++){
        uint32_t temp = *(X + i*cols);
        if(temp0==temp) c++;
        else{
            temp0 = temp;
            length = length + binomialCoeff(c, 2);
            c = 1;
        }
    }
    return length;
}
void new_ar(int round, uint32_t* X, int rows, int cols, uint32_t* new_X, int new_rows, int new_cols){
    printf("ROUND: %d, AR_LENGTH: %d, AR_SIZE: %d MB\n", round, new_rows, (new_rows*new_cols*4)/(2<<20));
    int i=0, k=0, j=0;
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

