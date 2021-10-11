#include<stdio.h>

void StrCpyCap(char *Scr, char *Dest)
{
    int i = 0;
    while (*Scr != '\0')
   {
       if((*Scr >= 'a') && (*Scr <= 'z'))
       {
           *Scr = *Scr - 32;
       }
       *Dest = *Scr;
       Scr++;
       Dest++;

   }
    *Dest = '\0';
}
int main()
{
    char arr[30] = "Marvellous 2";  
    char brr[30];                



    StrCpyCap(arr,brr);

    printf("%s\n",brr);

    return 0;
}