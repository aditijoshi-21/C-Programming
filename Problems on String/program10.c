//Display ASCII table 

#include<stdio.h>

void DisplayASCII()
{
    char ch = '\0';
    int iCnt=0;

    for(iCnt=0;iCnt<=255;iCnt++,ch++)
    {
        printf("%d\t%x\t%o\t%c\n",iCnt,iCnt,iCnt,ch);
    }

}

int main()
{
    DisplayASCII();

    return 0;
}