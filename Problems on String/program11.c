//Accept string from user and count number of capital characters

#include<stdio.h>

int CountCapital(char *str)
{
    int iCnt=0;
    
    while(*str != '\0')
    {
        if((*str>='A') && (*str<='Z'))
        {
            iCnt++;
        }
    
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    int bRet=0;
    int iRet=0;

    printf("Enter string: \n");
    scanf("%[^'\n]s",Arr);

    bRet = CountCapital(Arr);

    printf("Count of capital charcters is %d",bRet);

    return 0;
}