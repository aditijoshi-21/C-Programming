//Program to accept number from user anf if number is less than 50 then print small, if it is grater than 50 and less than 100 then print medium , if it is grater than 100 then print large

#include<stdio.h>

void Number(int iNo)
{
    if(iNo<50)
    {
        printf("Small");
    }
    else if(iNo>50&&iNo<100)
    {
        printf("Medium");
    }
    else if(iNo>100)
    {
        printf("Large");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;
}