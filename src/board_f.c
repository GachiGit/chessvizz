#include <stdio.h>
#include <string.h>
#include "board_f.h"
int step_f ( char num[9][9], char hod[6]){
int o=0,p=0,i=0,o1=0,p1=0;
int flag=1,flag2=0,error=0;
char temp;
do{
flag=1;
flag2=0;
error=0;
if (strlen(hod)==6){
for(i=1;i<6;i++){
switch(hod[i])
    {
    case 'a':
    if (flag){
	p=1;}else {p1=1;}
	break;
    case 'b':
    if (flag){
	p=2;}else {p1=2;}
	break;
    case 'c':
    if (flag){
	p=3;}else {p1=3;}
	break;
    case 'd':
    if (flag){
	p=4;}else {p1=4;}
	break;
    case 'e':
    if (flag){
	p=5;}else {p1=5;}
	break;
    case 'f':
    if (flag){
	p=6;}else {p1=6;}
	break;
    case 'g':
    if (flag){
	p=7;}else {p1=7;}
	break;
    case 'h':
    if (flag){
	p=8;}else {p1=8;}
	break;
    case '-':
	flag=0;
	break;
    case '8':
    if (flag){
	o=0;}else {o1=0;}
	break;
    case '7':
    if (flag){
	o=1;}else {o1=1;}
	break;
    case '6':
    if (flag){
	o=2;}else {o1=2;}
	break;
    case '5':
    if (flag){
	o=3;}else {o1=3;}
	break;
    case '4':
    if (flag){
	o=4;}else {o1=4;}
	break;
    case '3':
    if (flag){
	o=5;}else {o1=5;}
	break;
    case '2':
    if (flag){
	o=6;}else {o1=6;}
	break;
    case '1':
    if (flag){
	o=7;}else {o1=7;}
	break;
    case 'x':
     flag=0;
     flag2=1;
	break;
    default:
      return 0;
      break;
    }
}

if (num[o][p] == hod[0] || num[o][p] == hod[o] + ('a'- 'A')){

    if (flag==0 && num[o1][p1] != ' ' && flag2!=1){
	printf("\nВы делаете тихий ход, а не производите взятие фигуры!\n");
	printf("Повторите ввод хода\n");
	error=1;}

    if (num[o1][p1] == ' ' && flag2!=1){
    temp=num[o][p];
    num[o][p]=' ';
    num[o1][p1]=temp;}else{
    if(flag2 && num[o1][p1] != ' '){
    temp=num[o][p];
    num[o][p]=' ';
    num[o1][p1]=temp;} else { if (flag2){
    printf("\nВы пытаетесь взять пустую ячейку!\n");
    printf("Повторите ввод хода\n");
    error=1;}}
    }

    printf("\n");
}else {
	printf("\nТы схватил не пешку!\n");
	printf("Повторите ввод хода\n");
	error=1;}

}
}while (error);
return 0;
}
