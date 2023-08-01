//Accept N numbers from user and return the difference between largest and smallest number

#include<stdio.h>       
#include<stdlib.h>      

int Difference(int Arr[],int iLength)
{
    int iMax= Arr[0]; 
    int iMin = Arr[0];             
    int iCnt=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]>iMax)
        {
            iMax = Arr[iCnt];
        }

        if(Arr[iCnt]<iMin)
        {
            iMin=Arr[iCnt];
        }
    }
    return iMax-iMin;
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

    iRet = Difference(ptr, iSize);
    printf("Difference is: %d\n",iRet);

    free(ptr);

    return 0;       
}