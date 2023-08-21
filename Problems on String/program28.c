//Accept string from user and count small character and capital character

#include<stdio.h>

void Frequency(char *str)
{
    int iCnt1=0;
    int iCnt2=0;
    
    while(*str != '\0')
    {
        if((*str>='a') && (*str<='z'))
        {
            iCnt1++;
        }
        else if((*str>='A') && (*str<='Z'))
        {
            iCnt2++;
        }
        str++;
    }
    printf("Small letter count is: %d\n",iCnt1);
    printf("Capital letter count is:  %d\n",iCnt2);
}

int main()
{
    char Arr[20];
    char ch='\0';
    int iRet=0;

    printf("Enter string: \n");
    scanf("%[^'\n']s",Arr);

    Frequency(Arr);

    return 0;
}