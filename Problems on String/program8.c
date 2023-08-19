//Accept character from user and check whether it is special symbol or not

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkAlpha(char ch)
{
    BOOL bFlag = FALSE;

    if((ch=='!') || (ch=='@') || (ch=='#') || (ch=='$')|| (ch=='%')|| (ch=='^')|| (ch=='&')|| (ch=='*'))
    {
        bFlag=TRUE;
    }
    else
    {
        bFlag = FALSE;
    }

    return bFlag;
}

int main()
{
    char cValue= '\0';
    BOOL bRet = FALSE;

    printf("Enter the symbol\n");
    scanf("%c",&cValue);

    bRet = ChkAlpha(cValue);

    if(bRet==TRUE)
    {
        printf("It is symbol");
    }

    else
    {
        printf("It is not Character");
    }

    return 0;
}

