//Accept number and Count frequency of odd digit in the number

#include<stdio.h>

int CountOddDigit(int iNo){
    int iCount=0;
    int iDigit=0;

    if(iNo<0){
        iNo=-iNo;
    }
    while(iNo!=0){

        iDigit=iNo%10;

        if(iDigit%2!=0){
            iCount++;
        }
        iNo=iNo/10;
    }
    return iCount;  

}

int main(){

    int iValue1=0;
    int iRet=0;

    printf("Enter number :\n");
    scanf("%d",&iValue1);

    iRet=CountOddDigit(iValue1);

    printf("Number of odd digits in %d is : %d\n",iValue1,iRet);
    return 0;
}
