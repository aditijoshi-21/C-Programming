//Accept number from user and return difference between summation of all its factors and non factors

#include<stdio.h>

int FactDiff(int iNo)
{
    int iSum1=0;
    int iSum2=0;
    int iDiff=0;
    int iCnt=0;

    for(iCnt=1;iCnt<=(iNo/2);iCnt++)
    {
        if((iNo%iCnt)==0)
        {
            iSum1 = iSum1 + iCnt;
        }
    }

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if((iNo%iCnt)!=0)
        {
            iSum2 = iSum2 + iCnt;
        }
    }

    iDiff =  iSum1-iSum2;
    return iDiff;

}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet= FactDiff(iValue);

    printf("%d",iRet);

    return 0;
}
