#include<stdio.h>
#include<stdbool.h>
#include<string.h>

int strlenx(char str[])
{
    int iCnt = 0;
    while(*str != '\0')
    {
        iCnt++;
        str++;
    }
    return iCnt;
}

void strcpyx(char *src, char *dest)
{
    
    while(*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
}

void strcatx(char *src,char *dest)
{
    char *str = "\0";
    while(*src != '\0')
    {
        src++;
    }
    while(*dest != '\0')
    {
        *src = *dest;
        src++;
        dest++;
    }
    *src = '\0';
}

bool strcmpx(char *src, char *dest)
{
    while((*src != '\0') && (*dest != '\0'))
    {
        if(*src != *dest)
        {
            break;
        }
        src++;
        dest++;
    }

    if(*src == '\0' && *dest == '\0')
    {
        return true;
    }
    else
    {
        return false;
    }
}

void strrevx(char *str)
{
    char *start = str;
    char *end = str;
    char temp;

    while(*end != '\0')
    {
        end++;
    }
    end--;
    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

void strlwrx(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z' ))
        {
            *str = *str + 32;
        }
        str++;        
    }    
}

void struprx(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z' ))
        {
            *str = *str - 32;
        }
        str++;        
    }    
}

void strsetx(char *str,int ch)
{
    while(*str != '\0')
    {
        *str = ch;
        str++;
    }
}

char* strchrx(char *str,int ch)
{
    int i = 0;
    while(str[i] != '\0')
    {
        if(str[i] == ch)
        {
            return((char*)str+1);
            i++;
        }
    }
    return NULL;
}

