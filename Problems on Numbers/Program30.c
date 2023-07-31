
// Accept number from user and return difference between summation of even digits 
// and summation of odd digits

#include<stdio.h>

int CountDiff(int iNo)
{
    int iDigit = 0;
    int iEve = 0;
    int iOdd = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2) == 0)
        {
            iEve = iEve + iDigit;
        }
        else
        {
            iOdd = iOdd + iDigit;
        }
        iNo = iNo / 10;
    }
    return (iEve - iOdd);
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = CountDiff(iValue);

    printf("%d", iRet);
    
    return 0;
}