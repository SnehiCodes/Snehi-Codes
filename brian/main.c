#include <stdio.h>
main(){
int sum=0,i,j,m,n,ar[100] [100];
printf("Enter element for rows and column\n");
scanf("%d,%d",&m,&n);
printf("Enter element one by one\n");
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        printf("%d",ar[i][j]);
        sum=sum+ar[i][j];
    }
    printf("\n");

}
printf("%d",sum);
}
