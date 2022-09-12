#include <stdio.h>
#include <conio.h>

void main()
{
   char str[30],rev[30];
   int i,j,k;

   printf("Enter a string\n");
   scanf("%s",&str);
   for(i=0;str[i]!='\0';i++){
    k=i;
   }
   for(j=0;j<=i-1;j++)
   {

    rev[j]=str[k];k--;
   }
   printf("The reverse string is %s\n",rev);
   getch();

   }
