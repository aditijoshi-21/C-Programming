
//Accept string from user and convert toggle and copy in another string
// A
#include<stdio.h>

void strcpyX(char *src, char *dest)
{
    while(*src != '\0')
    {
        if((*src >= 'A') && (*src<= 'Z'))
        {
            *dest =*src + 32;
        }
        else if((*src >= 'a') && (*src<= 'z'))
        {
            *dest =*src - 32;
        }
        else
        {
            *dest = *src;
        }
        dest++;
        src++;
    }

    *dest='\0';
}

int main()
{
    char Arr[20];
    char Brr[20];

    char ch='\0';
    int iRet=0;

    printf("Enter string: \n");
    scanf("%[^'\n']s",Arr);

    strcpyX(Arr,Brr);

    printf("String after copy is: %s\n",Brr);

    return 0;

}