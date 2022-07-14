//Demonstration of nested structure

#include<stdio.h>

struct Hello        // Outer structure
{
    float f;
    int no;
    struct Demo     //Inner structure
    {
        int i;
        int j;
    }dobj;
};

int main()
{
    struct Hello hobj;

    hobj.f = 10.11;
    hobj.no = 11;
    hobj.dobj.i = 21;
    hobj.dobj.j = 51;

    printf("%d\n",hobj.dobj.i); 
    printf("%d\n",sizeof(hobj));    
    return 0;
}














