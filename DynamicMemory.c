//Demonstration of Dynamic memory allocation

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr = NULL;
    int iSize = 0;

    printf("Enter number of elements:\n");
    scanf("%d",&iSize);

    //Malloc function
    ptr = (int*)malloc(iSize*sizeof(int));

    //Calloc function
    ptr = (int*)calloc(iSize, sizeof(int));

    //realloc function
    ptr = (int*)realloc(ptr,iSize*sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to allocate memory");
    }
    else
    {
        printf("Memory gets allocated successfully");
    }

    free(ptr);
    return 0;
}