//Accept N numbers from user and Display summation of digits of each number

#include<stdio.h>       
#include<stdlib.h>      

void DigitsSum(int Arr[],int iLength)
{
    int iCnt=0;
    int iNo=0,iDigit=0,iSum=0;

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        iNo=Arr[iCnt];
        while(iNo!=0)
        {
            iDigit=iNo%10;
            iSum=iSum+iDigit;
            iNo=iNo/10;
        }
        printf("%d\t",iSum);
        iSum=0;
    }
}

int main(){             

    int iSize=0;        
    int *ptr=NULL;      
    int iCnt=0; 
    int iRet=0;        
    
    printf("Enter the number of elements : \n");
    scanf("%d",&iSize);

    ptr=(int *)malloc(iSize*sizeof(int));

    printf("Enter the elements : \n");
    for(iCnt=0;iCnt<iSize;iCnt++){
        scanf("%d",&ptr[iCnt]);
    }

    
    DigitsSum(ptr, iSize);;

    free(ptr);

    return 0;       
}