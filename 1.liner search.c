#include<stdio.h>
int main(){
int i,n,B[10],N;
printf("total value:");
scanf("%d",&n);
printf("enter value:\n");
for(i=0;i<n;i++)
scanf("%d",&B[i]);

N=250;
for(i=0;i<n;i++)
if(B[i]==N){
      printf("the value found at %d",i++);
      break;
}

return 0;





}
