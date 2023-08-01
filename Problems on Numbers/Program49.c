//Accept N numbers from user and display all such numbers which contains 3 digits in it

#include<stdio.h>       
#include<stdlib.h>      

void Digits(int Arr[],int iLength)
{
    int iCnt=0;
    int iNo=0,iDigit=0,iCount=0;

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        iNo=Arr[iCnt];
        while(iNo!=0)
        {
            iDigit=iNo%10;
            iCount++;
            iNo=iNo/10;
        }
        if(iCount==3)
        {
            printf("%d\t",Arr[iCnt]);
        }
        iCount=0;
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

    
    Digits(ptr, iSize);;

    free(ptr);

    return 0;       
}