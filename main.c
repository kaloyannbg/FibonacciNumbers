#include <stdio.h>
#include <stdlib.h>

int main()
{

    //  FIBBONACI NUMBERS

    //  0 + 1 = 1 + 1 = 2 + 3 = 5 + 3 = 8;
    //  0, 1, 1, 2, 3, 5, 8, 13, 21


    int tempNum1, tempNum2;

    tempNum1 = 0;

    tempNum2 = 1;

    int nextNum = 0; //result;

    int choosedNumber;
    printf(" \n -- -- Fibonacci Numbers -- -- ");
    printf(" \n\n -- Enter your n: ");

    scanf("%d", &choosedNumber);

    int i;

    i = 0;

    while(i < choosedNumber) {

        printf("%d , ", nextNum); //print 0 ; print 1 ;

        nextNum = tempNum1 + tempNum2; // nextNum = 0 + 1 = 1 | 1 + 2 = 3; | nextNum = 2 + 3 = 5; | 3 + 5 = 8

        tempNum1 = tempNum2; // tempNum1 = 1 | tempNum1 = 2 | tempNum1 = 3

        tempNum2 = nextNum;  // tempNum2 = 2 | tempNum2 = 3 | tempNum2 = 5

        i++;
    }




printf("\n\n\n\n");
return 0;

}

