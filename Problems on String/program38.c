//Accept two string and append first string at the second string
//Concatenate string and just cocancate letters as per user 

#include<stdio.h>

void strncatX(char *src, char *dest, int iLength)
{
    //1
    while(*dest != '\0')
    {
        dest++;
    }

    //2
    while(*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
        
        iLength--;
        if(iLength == 0)
        {
            break;
        }
    }

    //3
    *dest = '\0';
}

int main()
{
    char Arr[20];
    char Brr[20]="Demo";
    int iNo=0;

    char ch='\0';
    int iRet=0;

    printf("Enter string: \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter no of letters that u want to concat: \n");
    scanf("%d",&iNo);

    strncatX(Arr,Brr,iNo);

    printf("String after copy is: %s\n",Brr);

    return 0;

}