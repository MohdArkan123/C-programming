// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int i,j,n;
  
    printf("Enter total no. of rows=");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(j<=(n+1)-i){
                printf("*");
            }
            else{
                printf(" ");
            }
            
        }
        printf("\n");
    }

    return 0;
}