#include<stdio.h>

int CountChar(char *str, char ch)
{
    int icount=0;
    while(*str!='\0')
    {
        if(*str==ch)
        {
            icount++;
        }

        str++;
    }
    return icount;
}
int main()
{
char arr[20];
char cValue;
int iRet = 0;
printf("Enter string");
scanf("%[^'\n']s",arr);
printf("Enter the character");
scanf(" %c",&cValue);
iRet = CountChar(arr, cValue);
printf("Character frequency is %d",iRet);
return 0;
}