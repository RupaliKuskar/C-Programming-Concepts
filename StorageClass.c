//Demonstration of Storage classes

#include<stdio.h>

//Extern storage class
extern void Fun();

//Global static
//extern int Value;  // Not allowed


//Auto storage class
int Addition(int iNo1, int iNo2)
{
    auto int iAns = 0;              
    iAns = iNo1 + iNo2;
    return iAns;
}

//Register storage class
int Subtraction(int iNo1, int iNo2)
{
    register int iAns = 0;              
    iAns = iNo1 - iNo2;
    return iAns;
}

//local static
void Increment()
{
    int iNo1 = 10;
    static int iNo2 = 11;

    iNo1++;
    printf("%d\n",iNo1);
    iNo2++;
    printf("%d\n",iNo2);
}



int main()
{
    int value1 = 0, value2 = 0, iResult = 0;
    int iRet1 = 0,iRet2 = 0;

    printf("Enter the first number\n");
    scanf("%d",&value1);

    printf("Enter the second number\n");
    scanf("%d",&value2);

    iResult = value1 + value2;

    iRet1 = Addition(value1,value2) ;
    printf("Addition is %d\n",iRet1);

    iRet2 = Subtraction(value1,value2) ;
    printf("Subtraction  is %d\n",iRet2);

    Increment();
    Increment();
    
    Fun();

    return 0;
}