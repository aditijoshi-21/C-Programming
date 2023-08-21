//Accept string from user and convert capital letter with small letter
// A
#include<stdio.h>

void strlwrX(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <='Z'))
        {
            *str = *str + 32;
        }
        str++;
    }

}

int main()
{
    char Arr[20];
    char ch='\0';
    int iRet=0;

    printf("Enter string: \n");
    scanf("%[^'\n']s",Arr);

    strlwrX(Arr);

    printf("String after editing is: %s\n",Arr);

    return 0;


}