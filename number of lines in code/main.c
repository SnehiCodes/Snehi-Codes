#include <stdio.h>
//#wrong
#define MAX_FILE_NAME 100
int main(){
int count=0,fp;
char filename[MAX_FILE_NAME];
char c;
printf("Enter file name:");
scanf("%s",filename);
fp=fopen(filename,"r");
ij(fp==NULL){
    printf("not open file %s",filename);
    return 0;
}
for(c=getc(fp);c!=EOF;c=getc(fp))
    if(c=='\n')
    count=count+1;
fclose(fp);
print("the file %s has %d lines\n",filename,count);
return 0;

}
