//Demonstration of pointer

#include<stdio.h>

int main()
{
    int iNo = 10;

    int *ptr = &iNo;
    printf("%d",*ptr);

    return 0;

}