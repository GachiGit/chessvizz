#define CTEST_MAIN

#include "board_read.h"
#include "board_print_plain.h"
#include "board.h"
#include <ctest.h>

CTEST (Pawn_e2_e4, Correct_Pawn0_h)
{
    char a[9][9];
    char xhod[6];
    xhod[0]='e';
    xhod[1]='2';
    xhod[2]='-';
    xhod[3]='e';
    xhod[4]='4';
   bbuild(a);
    int result=step(a,xhod);
    int expected=0;
    ASSERT_EQUAL(expected, result);
}

CTEST (Pawn_d2_d3, Correct_Pawn1_h)
{
    char a[9][9];
    char xhod[6];
    xhod[0]='e';
    xhod[1]='2';
    xhod[2]='-';
    xhod[3]='e';
    xhod[4]='4';
    bbuild(a);
    int result=step(a,xhod);
    int expected=0;
    ASSERT_EQUAL(expected, result);
}

CTEST (Pawn_e6xd7, Correct_Pawn2_h)
{
    char a[9][9];
    char xhod[6];
    xhod[0]='e';
    xhod[1]='6';
    xhod[2]='x';
    xhod[3]='d';
    xhod[4]='7';
    bbuild(a);
    a[2][5]='P';
    int result=step(a,xhod);
    int expected=0;
    ASSERT_EQUAL(expected, result);
}
////////////
CTEST (King_e1_e2, Correct_King_h)
{
    char a[9][9];
    char xhod[6];
    xhod[0]='K';
    xhod[1]='e';
    xhod[2]='1';
    xhod[3]='-';
    xhod[4]='e';
    xhod[5]='2';
    bbuild(a);
    a[6][5]=' ';
    int result=step(a,xhod);
    int expected=0;
    ASSERT_EQUAL(expected, result);
}

CTEST (Queen_d1xd7, InCorrect_Queen_h)
{
    char a[9][9];
    char hod[6];
    hod[0]='Q';
    hod[1]='d';
    hod[2]='1';
    hod[3]='x';
    hod[4]='d';
    hod[5]='7';
    bbuild(a);
    a[6][5]=' ';
    int result=step(a,hod);
    int expected=0;
    ASSERT_EQUAL(expected, result);
}

CTEST (Bishop_c3_e5, InCorrect_Bishop_h)
{
    char a[9][9];
    char hod[6];
    hod[0]='B';
    hod[1]='c';
    hod[2]='3';
    hod[3]='-';
    hod[4]='e';
    hod[5]='5';
    bbuild(a);
    a[5][3]='B';
    int result=step(a,hod);
    int expected=0;
    ASSERT_EQUAL(expected, result);
}

int main(int argc, const char** argv)
{
    int test_result = ctest_main(argc, argv);
    return test_result;
}
