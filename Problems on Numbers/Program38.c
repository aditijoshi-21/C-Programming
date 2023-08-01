//Accept N numbers from user and check whther that numbers contain 11 in it or not

//Template


#include<stdio.h>       
#include<stdlib.h>     
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[],int iLength)
{
    int iCnt=0;
    int bFlag=FALSE;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if((Arr[iCnt]==11))
        {
            bFlag=TRUE;
            break;
        }
    }
    return bFlag;
}

int main(){             

    int iSize=0;        
    int *ptr=NULL;      
    int iCnt=0; 
    BOOL bRet=FALSE;        
    
    printf("Enter the number of elements : \n");
    scanf("%d",&iSize);

    ptr=(int *)malloc(iSize*sizeof(int));

    printf("Enter the elements : \n");
    for(iCnt=0;iCnt<iSize;iCnt++){
        scanf("%d",&ptr[iCnt]);
    }

    printf("Elements of array are : \n");
    for(iCnt=0;iCnt<iSize;iCnt++){
        printf("%d\n",ptr[iCnt]);
    }

    bRet = Check(ptr, iSize);
    if(bRet==TRUE)
    {
        printf("11 is present");
    }
    else{
        printf("11 is not present");
    }

    free(ptr);

    return 0;       
}

