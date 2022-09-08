#include <stdio.h>
#include <string.h>

int main()
{
    char s1[30],s2[20];
    int i, j,n1,n2;

    printf("Enter two strings.\n");
    scanf("%s%s",s1,s2);

    n1=strlen(s1);
    n2=strlen(s2);
    j=0;
    for(i=n1;i<n1+n2;i++){
        s1[i]=s2[j];
        j++;
    }
    s1[i]='\0';
    printf("%s",s1);

}
