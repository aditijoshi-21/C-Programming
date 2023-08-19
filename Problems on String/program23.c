//Accept string from user and accept one character. Return first occurance of that character

#include<stdio.h>
#define ERR_FOUND -1

int CountChar(char *str, char ch)
{
    int iCnt=1;

    while((*str != '\0') && (*str != ch))
    {
        iCnt++;
        str++;
    }

    if(*str=='\0')
    {
        return ERR_FOUND;
    }
    else
    {
        return iCnt;
    }


}

int main()
{
    char arr[20];
    char cValue;

    int iRet = 0;

    printf("Enter string ");
    scanf("%[^'\n']s",arr);

    printf("Enter the character:\n");
    scanf(" %c",&cValue);

    iRet=CountChar(arr, cValue);

    printf("Location of character is : %d",iRet);

    return 0;
}