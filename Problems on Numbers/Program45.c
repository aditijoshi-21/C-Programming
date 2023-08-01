//Accpet N numbers from user and return product of all elements


#include<stdio.h>       
#include<stdlib.h>      

int Product(int Arr[],int iLength)
{
    int iCnt=0,iProd=1;

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if((Arr[iCnt])%2!=0)
        {
            iProd=iProd*Arr[iCnt];
        }
    }

    return iProd;
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

    printf("Elements of array are : \n");
    for(iCnt=0;iCnt<iSize;iCnt++){
        printf("%d\n",ptr[iCnt]);
    }

    iRet = Product(ptr, iSize);
    printf("Product of odd numbers is: %d\n",iRet);

    free(ptr);

    return 0;       
}

