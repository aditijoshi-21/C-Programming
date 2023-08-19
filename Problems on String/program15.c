// Accept two strings fron user and compare them

//str1  DeMo
//str2  dEmO

#include<stdio.h>
#include<stdbool.h>

void strrevX(char *str)
{
    char *start = NULL;
    char *end = NULL;
    char temp='\0';

    start = str;
    end = str;

    while(*end != '\0')
    {
        end++;
    }
    end--;

    while(start<end)
    {
        temp= *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

}

int main()
{
    char Arr[30];

    printf("Enter first string:\n");
    scanf("%[^'\n']s",Arr);

    strrevX(Arr);

    printf("Reverse string is: %s\n",Arr);


    return 0;
}

//Time complexity: N+N/2