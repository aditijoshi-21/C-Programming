//Accept total amrks and obtained marks from user and calculate percentage

#include<stdio.h>

float Percentage(float total_marks,float obtained_marks)
{
    float iPer = 0.0;

    iPer = (obtained_marks/total_marks)*100;

    return iPer;
}

int main()
{
    float iValue1=0, iValue2=0;

    float fRet = 0.0;

    printf("Please enter total marks \n");
    scanf("%d",&iValue1);
    printf("Please enter obtained marks \n");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1,iValue2);
    printf("Percentage is %f",fRet);

    return 0 ;

}
