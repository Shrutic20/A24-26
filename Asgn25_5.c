#include<stdio.h>
void StrCatX(char *src, char * dest)
{
// Filter
while(*src != '\0') // Traverse first string till end
{
// Logic
    src++;
}

while(*dest != '\0') // Copy contents of destination in source
{
    *src = *dest;
    src++;
    dest++;
}
*dest = '\0';
}
int main()
{
char arr[50] = "Marvellous Infosystems";
char brr[30] = "Logic Building";
StrCatX(arr,brr);
printf("%s",arr); // Marvellous Infosystems Logic Building
return 0;
}