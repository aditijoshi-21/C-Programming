//Accept N numbers from user and accpet one number as NO and check whether No is present or not

#include<stdio.h>       
#include<stdlib.h>   
#include<stdbool.h>   

#define TRUE 1
#define FALSE 0;

typedef int BOOL;

BOOL Check(int Arr[],int iLength,int iNo)
{
    int iCnt=0;
    bool bFlag=FALSE;

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if((Arr[iCnt])==iNo)
        {
            bFlag==TRUE;
        }
    }
    return bFlag;
}

int main(){             

    int iSize=0;        
    int *ptr=NULL;      
    int iCnt=0; 
    BOOL bRet=0;
    int NO=0;        
    
    printf("Enter the number of elements : \n");
    scanf("%d",&iSize);

    printf("Enter NO : \n");
    scanf("%d",&NO);

    ptr=(int *)malloc(iSize*sizeof(int));

    printf("Enter the elements : \n");
    for(iCnt=0;iCnt<iSize;iCnt++){
        scanf("%d",&ptr[iCnt]);
    }

    printf("Elements of array are : \n");
    for(iCnt=0;iCnt<iSize;iCnt++){
        printf("%d\n",ptr[iCnt]);
    }
    
    bRet = Check(ptr, iSize,NO);

    if(bRet==TRUE)
    {
        printf("%d is present",NO);
    }
    else
    {
        printf("%d is not present",NO);
    }

    free(ptr);

    return 0;       
}


