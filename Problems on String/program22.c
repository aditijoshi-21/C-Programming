//Accept string from user and accept one character. Return frequency of that character

#include<stdio.h>

int CountChar(char *str, char ch)
{
    int iCnt=0;

    while(*str != '\0')
    {
        if(*str==ch)
        {
            iCnt++;
        }
        str++;
    }

    return iCnt;

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

    printf("Frequency of character is : %d",iRet);

    return 0;
}