//Accept number of rows and number of columns from user and display below pattern
//Input :   iRow=4     iCol=4

/*Output:  

1 2 3 4 
2 3 4 5
3 4 5 6
4 5 6 7


*/

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int i=0, j=0;

    for(i=0;i<iRow;i++)
    {
        for(j=0;j<iCol;j++)
        {
            printf("%d",i+j+1);

        }
     printf("\n");
    } 
}

int main()
{
    int iValue1=0,iValue2;

    printf("Enter number of rows and columns: \n");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}