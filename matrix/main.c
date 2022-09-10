#include <stdio.h>
#include <stdlib.h>
int i,j,row,col,mat[5][5];
int main()
{
    printf("Enter the number of rows.\n");
    scanf("%d",&row);
    printf("Enter the number of columns.\n");
    scanf("%d",&col);
    for(i=0;i<row;row++){
        for(j=0;j<col;col++){
            printf("Enter mat[%d][%d]",mat[i][j]);
        }
    }


    return 0;
}
