#include <stdio.h>
#include <string.h>

void main()
{
    char check='t' ,str[30];
    int len , right , left;
    printf("Enter a string.\n");
    scanf("%s", str);

    len= strlen(str);
    left=0;
    right=len-1;

    while (check=='t' && left < right)
    {
        if(!(str[left]==str[right]))
            check ='f';
        left++;
        right--;
    }
 if (check =='t')
    printf("good");
 else
    printf("bad");
}

