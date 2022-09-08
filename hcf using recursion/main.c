#include <stdio.h> #wrong

int gcd(int n1,int n2);

int main(){
int n1,n2;
printf("Enter 2 positive numbers");
scanf("%d%d",&n1,&n2);
print("gcd of %d and %d is &d.",n1,n2);
ncf(n1,n2);
return 0;
}

int gcd(int n1,int n2)(
if(n2!=0)
    return gcd(n2,n1%n2);
else
    return n1;}
