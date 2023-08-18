//Accept number and check if it is palindrome

#include<stdio.h>
#include<stdbool.h>

bool CheckPallindrome(int iNo){

    int iDigit=0;
    int iReverse=0;
    int iTemp=iNo;

    while(iNo!=0){

        iDigit=iNo%10;
        iReverse=(iReverse*10)+iDigit;
        iNo=iNo/10;
    }

    if (iReverse==iTemp){
        return true;
    } 
    else{
        return false;
    } 

}

int main(){

    int iValue=0;
    bool bRet=false;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    bRet=CheckPallindrome(iValue);

    if(bRet==true){
        printf("%d is pallindrome number",iValue);
    }
    else{
        printf("%d is not a pallindrome number",iValue);
    }
    return 0;
    
}
