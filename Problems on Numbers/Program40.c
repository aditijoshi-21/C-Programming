//Accept N numbers from user and accept one another number as NO, return frequency of NO from it

#include<stdio.h>       
#include<stdlib.h>      

int Frequency(int Arr[],int iLength,int iNo)
{
    int iCnt=0,iCounter=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if((Arr[iCnt])==iNo)
        {
            iCounter++;
        }
    }
    return iCounter;
}

int main(){             

    int iSize=0;        
    int *ptr=NULL;      
    int iCnt=0; 
    int iRet=0,NO=0;        
    
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
    
    iRet = Frequency(ptr, iSize,NO);
    printf("Frequency of NO is: %d\n",iRet);

    free(ptr);

    return 0;       
}

