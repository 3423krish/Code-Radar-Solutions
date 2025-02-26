#include <stdio.h>

int main(){
    int a,sum=0;
    scanf("%d",&a);
    int n[a];
    for(int i=0;i<=a-1;i++){
        scanf("%d",&n[i]);
    }
    for(int j=0;j<=a-1;j++){
        sum=sum+n[j];
        printf("%d ",sum);
    }
    return 0;
}