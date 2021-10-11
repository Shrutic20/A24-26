#include<stdio.h>

void StrNCpyX(char *src, char *dest, int iCnt)
{
// Filter
while((*src != '\0') && (iCnt != 0) )
{
*dest = *src;
src++;
dest++;
iCnt--;
}
*src='\0';
}
int main()
{
char arr[30] = "Marvellous Multi OS";
char brr[30]; // Empty string
StrNCpyX(arr,brr,10);
printf("%s",brr); // Marvellous
return 0;
}