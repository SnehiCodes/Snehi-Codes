#include <stdio.h>
#include <stdlib.h>

main()
{int i,j,rows,columns,m,k,p,q,r,ar[10][10];
    printf("Enter the number of rows.\n");
    scanf("%d",&rows);
    //printf("%d",rows);
    printf("Enter the number of columns.\n");
    scanf("%d",&columns);

    for(m=1;m<=rows;m++){
        for(k=1;k<=columns;k++){
            printf("Enter the matrix a[%d][%d]\n",m,k);
            scanf("%d",&ar[m][k]);
            printf("\n");
            //

        }


    }
//printf("%d |",ar[m][k]);
     //   printf("--------");
for (p=1;p<=rows;p++){
    printf("-------------");
    printf("\n");
}






    //for(i=0;i<=5;i++){
        //for(j=0;j<=4;j++){
        //    printf("%d,%d",i,j);
         //   printf("\n");
        }
   // }printf("\n");


