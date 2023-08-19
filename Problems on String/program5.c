//Accept divison from user and depends on the division display exam timing 
//A - 7 AM
//B - 8:30 AM
//C - 9:20 AM
//D : 10:30 AM

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL DisplaySchedule(char ch)
{
    if((ch=='A')||(ch='a'))
    {
        printf("Exam time is : 7AM");
    }
    else if((ch=='B')||(ch='b'))
    {
        printf("Exam time is : 8:30 AM");
    }
    if((ch=='C')||(ch='c'))
    {
        printf("Exam time is : 9:20 AM");
    }
    if((ch=='D')||(ch='d'))
    {
        printf("Exam time is : 10:30 AM");
    }
}

int main()
{
    char cValue= '\0';
    BOOL bRet = FALSE;

    printf("Enter your division\n");
    scanf("%c",&cValue);

    bRet = DisplaySchedule(cValue);

    return 0;
}

