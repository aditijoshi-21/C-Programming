//Accept n numbers from user and return the smallest number

#include<stdio.h>       
#include<stdlib.h>      

int Minimum(int Arr[],int iLength)
{
    int iMin= Arr[0];              
    int iCnt=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]<iMin)
        {
            iMin = Arr[iCnt];
        }
    }
    return iMin;
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

    iRet = Minimum(ptr, iSize);
    printf("Smallest number is: %d\n",iRet);

    free(ptr);

    return 0;       
}