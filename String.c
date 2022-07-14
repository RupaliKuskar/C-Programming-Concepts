#include<stdio.h>
#include<stdbool.h>
#include<string.h>

extern int strlenx(char*);
extern void strcpyx(char*, char*);
extern void strcatx(char*,char*);
extern bool strcmpx(char*,char*);
extern bool strcmpix(char*,char*);
extern void strrevx(char*);
extern void strlwrx(char*);
extern void struprx(char*);
extern void strsetx(char*,int);
extern bool strchrx(char*,char);
int main()
{
    char Arr[20];
    char Brr[20];
    char s[10] = "123456789";
    char ch = 'c';
    char ch1 = '\0';
    
    /*
    printf("Enter the string: \n");
    scanf("%[^\n]s",Arr);

    int iRet1 = strlenx(Arr);
    printf("Length of string is %d\n",iRet1);

    strcpyx(Arr,Brr);
    printf("String after copy is %s\n",Brr);

    printf("Enter first string: \n");
    scanf(" %[^\n]s",Arr);

    printf("Enter second string: \n");
    scanf(" %[^\n]s",Brr);

    strcatx(Arr,Brr);
    printf("String after concatenates is %s\n",Arr);

    printf("Enter first string: \n");
    scanf(" %[^\n]s",Arr);

    printf("Enter second string: \n");
    scanf(" %[^\n]s",Brr);

    int bRet1 = strcmpx(Arr,Brr);
    if(bRet1 == true)
    {
        printf("Strings are equal\n");
    }
    else
    {
        printf("Strings are not equal \n");
    }

    printf("Enter the string: \n");
    scanf("%[^\n]s",Arr);

    strrevx(Arr);
    printf("String after reverse %s\n",Arr);
    */
    printf("Enter the string: \n");
    scanf("%[^\n]s",Brr);
    
    /*
    strlwrx(Brr);
    printf("String after modified %s\n",Brr);

    struprx(Brr);
    printf("String after modified %s\n",Brr);

    strsetx(s,ch);
    printf("After using strset(),string is %s\n",s);

    */

    puts("Enter the character to be found:\n");
    scanf("%c",&ch1);

    bool bRet2 = strchrx(Brr,ch1);
    if(bRet2 == true)
    {
        printf("Character is found");
    }
    else
    {
        printf("Character not found");
    }



    


    return 0;
}