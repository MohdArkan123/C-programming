

#include <stdio.h>

int main()
{
   int i,j,n;
   int ascii=65;
   printf("enter total no. of rows=");
   scanf("%d",&n);
   for(i=1;i<=n;i++){
       for(j=1;j<=n;j++){
           if(i==1||i==n||j==1||j==n){
           printf("*\t");
           }
           else{
           printf("%c\t",ascii);{
           ascii++;
           }
           }
       }
       printf("\n");
   }

    return 0;
}
