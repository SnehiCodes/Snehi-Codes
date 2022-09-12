
#include <stdio.h>
 main(){
 int a,i,j,k,l,o,g,p,s;
 printf("Enter a number.");
 scanf("%d",&p);

 if (p%2!=0){a=p;}
 else{printf("You've entered an even number.");}


 for(i=1;i<=(a+1)/2;i++){
    for (k=1;k<=(a+1)/2-i;k++){
            printf(" ");
 }
    for(j=1;j<=2*i-1;j++){
        printf("*");
    }
    printf("\n");
 }
for (l=1;l<=(a-1)/2;l++){
    for (o=1;o<=l;o++){
        printf(" ");
    }
    for(g=1;g<=a-2*l;g++){
        printf("*");
    }
    printf("\n");
}

 }
