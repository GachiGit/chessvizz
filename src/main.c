#include <stdio.h>
#include <stdlib.h>
#include "board_read.h"
#include "board_print_plain.h"
#include "board.h"
int main()
{
char  a[9][9];
char hod[6];
int y=1;
bbuild(a);
bprint(a);
system("clear");
do{
bprint(a);
printf("\nВаш ход?\n");
scanf("%s",hod);
step(a,hod);
system("clear");
bprint(a);
printf("\nПродолжить игру? 1/0\n");
scanf("%d",&y);
system("clear");
}while(y);

return 0;}
