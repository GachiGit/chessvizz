#include <stdio.h>
#include "board_print_plain.h"
void bprint ( char num[9][9]) {
    int o,p;
    for (o=0; o<9; o++){
	for (p=0; p<9; p++){
	    printf("%c ",num[o][p]);
	}
	printf("\n");
    }
}