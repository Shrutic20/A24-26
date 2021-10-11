#include<stdio.h>
void StrCpyX(char *src, char *dest)
{
// Fileter
while(*src != '\0')
{
*dest = *src;
src++;
dest++;
}
 *src='\0';
}
int main()
{
char arr[30] = "Marvellous Multi OS";
char brr[30]; // Empty string
StrCpyX(arr,brr);
printf("%s",brr); // Marvellous Multi OS
return 0;
}