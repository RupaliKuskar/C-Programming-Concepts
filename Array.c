//Demonstration of Array

#include<stdio.h>

int main()
{
    int Arr[5];          //Definition of array as well as single dimentional array
    int Brr[] = {1,2,3,4,5};   //Member initialization list

    int Crr[2][3] = {2,1,3,2,3,4};  //2D Array

    Arr[0] = 10;         // Member by member initialization
    Arr[1] = 11;

    printf("%d\n%d\n",Arr[0],Arr[1]);

    printf("%d\n%d",Brr[0],Brr[1]);

    printf("%d %d %d\n,Crr[0][0],Crr[0][1],Crr[0][2]");
    printf("%d %d %d\n,Crr[1][0],Crr[1][1],Crr[1][2]");

    return 0;

}
