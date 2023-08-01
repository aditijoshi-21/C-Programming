//Accept N numbers from user and accept one and accept Range, Display all elements from that range

#include<stdio.h>       
#include<stdlib.h>      

void Range(int Arr[],int iLength,int iStart,int iEnd)
{
    int iCnt=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if((Arr[iCnt])>iStart && (Arr[iCnt])<iEnd)
        {
            printf("%d\t",Arr[iCnt]);
        }
        
    }
}

int main(){             

    int iSize=0;        
    int *ptr=NULL;      
    int iCnt=0; 
    int iRet=0,iValue1=0,iValue2=0;        
    
    printf("Enter the number of elements : \n");
    scanf("%d",&iSize);

    printf("Enter the starting point : \n");
    scanf("%d",&iValue1);

    printf("Enter the ending point : \n");
    scanf("%d",&iValue2);

    ptr=(int *)malloc(iSize*sizeof(int));

    printf("Enter the elements : \n");
    for(iCnt=0;iCnt<iSize;iCnt++){
        scanf("%d",&ptr[iCnt]);
    }
    
    printf("Elements in range: \n");
    Range(ptr, iSize,iValue1,iValue2);
   
    free(ptr);

    return 0;       
}

