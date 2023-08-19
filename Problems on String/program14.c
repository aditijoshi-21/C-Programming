//Accept string from user and check whether itcontains vowels in it or not

#include<stdio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkVowel(char *str)
{
    BOOL bFlag=FALSE;

    while(*str != '\0')
    {
        if((*str=='a') || (*str=='e') ||(*str=='i') ||(*str=='o') ||(*str=='u')||(*str=='A') || (*str=='E') ||(*str=='I') ||(*str=='O') ||(*str=='U'))
        {
            bFlag=TRUE;   
        }

    }
    return bFlag;
    
      
}

int main()
{
    char Arr[20];
    BOOL bRet=FALSE;
    int iRet=0;

    printf("Enter string: \n");
    scanf("%[^'\n]s",Arr);

    bRet = ChkVowel(Arr);

    if(bRet==TRUE)
    {
        printf("There is vowel" );
    }
    else
    {
        printf("There is not vowel" );
       
    }

    

    return 0;
}