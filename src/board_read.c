#include "board_read.h"
void bbuild ( char num[9][9]) {
int o,p;
int u;
for (o=0; o<9; o++){
    for(p=0; p<9; p++){
    num[o][p] = ' ';
    }
}
for (o=1; o<9; o++){
num[1][o] = 'p';
}
for (o=0,u=8; o<8; o++,u--){
num[o][0] = u + '0';
}
num[0][1] = 'r'; num[0][2] = 'n'; num[0][3] = 'b'; num[0][4] = 'q';
num[0][5] = 'k'; num[0][6] = 'b'; num[0][7] = 'n'; num[0][8] = 'r';
for (o=1; o<9; o++){
num[6][o] = 'P';
}
num[7][1] = 'R'; num[7][2] = 'N'; num[7][3] = 'B'; num[7][4] = 'Q';
num[7][5] = 'K'; num[7][6] = 'B'; num[7][7] = 'N'; num[7][8] = 'R';
for (o=1,u=97; o<9;o++,u++){
num[8][o] = u;
}
}
