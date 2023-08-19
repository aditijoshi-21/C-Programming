//Accept character from user and check whether it is capital or not

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkAlpha(char ch)
{
    BOOL bFlag = FALSE;

    if((ch>='A') && (ch<='Z'))
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

    printf("Enter the character\n");
    scanf("%c",&cValue);

    bRet = ChkAlpha(cValue);

    if(bRet==TRUE)
    {
        printf("It is Capital");
    }

    else
    {
        printf("It is not Capital");
    }

    return 0;
}

