//Accept number from user and print numbers till that number

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
 
    while(iCnt<iNo)
    {
        iCnt++;
        printf("%d\t",iCnt);
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number: \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
