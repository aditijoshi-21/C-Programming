//Accept N numbers from user and display all such elements which are multiples of 11

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iLength)
{
    int iCnt=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]%11==0)
        {
            printf("%d\n",Arr[iCnt]);
        }
        
    }
}

int main()
{
    int iSize=0;        
    int *ptr=NULL;      
    int iCnt=0;         
    
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
    
    printf("Elements multiple of 11: %d\n");
    Display(ptr, iSize);
    

    free(ptr);

    return 0;   
}
