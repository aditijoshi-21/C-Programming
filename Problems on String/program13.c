//Accept string from user and return difference betwwen  count number of small characters and capital characters

#include<stdio.h>

int CountSmall(char *str)
{
    int iCnt1=0;
    int iCnt2=0;
    
    while(*str != '\0')
    {
        if((*str>='A') && (*str<='Z'))
        {
            iCnt1++;
        }
        else if((*str>='a') && (*str<='z'))
        {
            iCnt2++;
        }
    
        str++;
    }
    return iCnt2-iCnt1;
}

int main()
{
    char Arr[20];
    int bRet=0;
    int iRet=0;

    printf("Enter string: \n");
    scanf("%[^'\n]s",Arr);

    bRet = CountSmall(Arr);

    printf("Difference is %d",bRet);

    return 0;
}