#include <stdio.h>
#include <ctype.h>

void main(){
    int a;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        for(int k=a;k<=a-i;k--){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
}