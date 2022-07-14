//Demonstration of constant

#include<stdio.h>

int main()
{
    int iNo1 = 0;
    const int iNo2 = 0;

    iNo1++;
    printf("%d\n",iNo1);

    iNo2++;              //Not allowed

    return 0;
}