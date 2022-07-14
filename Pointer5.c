//Demonstration of Pointer to a pointer

#include<stdio.h>

int main()
{
    int i = 10;
    int *p1 = &i;
    int **p2 = &p1;
    int ***p3 = &p2;
    int ****p4 = &p3;
    int *****p5 = &p4;

    printf("The values of variables are:\n");
    printf("%d\t",*p1);
    printf("%d\t",**p2);
    printf("%d\t",***p3);
    printf("%d\t",****p4);
    printf("%d\t",*****p5);

    return 0;

}