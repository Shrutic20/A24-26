#include<stdio.h>
int LastChar(char *str, char ch)
{
    int index=0,i=-1;
    while(*str!=0)
    {
        if(*str==ch)
        {
            i=index;
        }
        index++;
        str++;
    }
    return i;
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
iRet = LastChar(arr, cValue);
printf("Character location is %d",iRet);
return 0;
}