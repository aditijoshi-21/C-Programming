//Accept N numbers from user and return difference between summation of even elements and summation of odd elemets

#include<stdio.h>       
#include<stdlib.h>    

int Difference(int Arr[],int iLength)
{
    int iCnt=0;
    int iEve=0, iOdd=0;

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if((Arr[iCnt])%2==0)
        {
            iEve=iEve+Arr[iCnt];
        }

        if((Arr[iCnt]%2!=0))
        {
            iOdd=iOdd+Arr[iCnt];
        }

    }
    return iEve-iOdd;


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

    iRet = Difference(ptr, iSize);
    printf("Difference is: %d\n",iRet);

    free(ptr);

    return 0;       
}


