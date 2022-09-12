#include <stdio.h>
#include <conio.h>
void main(){
int num, f;

scanf("%d",&num);

f=factorial(num);
printf("The factorial is %d",f);
getch();
}

int factorial(int number){

if(number==0 || number ==1)
   return 1;
   else
    return(number*factorial(number-1));}
