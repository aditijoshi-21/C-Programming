//Accept N number from user and display all such elements which are divisible by 3 and 5

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iLength)
{
    int iCnt=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if((Arr[iCnt])%3==0&&(Arr[iCnt])%5==0)
        {
            printf("%d\n",Arr[iCnt]);
        }
    }
}
int main()
{
    int iSize=0, iCnt=0; 
    int *ptr =NULL;

    printf("Enter number of elements: \n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize*sizeof(int));

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("Enter the elements : \n");
        scanf("%d\n",&ptr[iCnt]);
    }
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("Entered elements are: \n");
        scanf("%d\n",ptr[iCnt]);
    }

    printf("The elements divisble by 3 and 5: \n");
    Display(ptr, iSize);

    free(ptr);

    return 0;
}