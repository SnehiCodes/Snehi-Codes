#include <stdio.h>
#include <stdlib.h>

int main()
{static int var=5;

    printf("%d",var--);
    if(var)
        main();

}
