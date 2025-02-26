#include <stdio.h>

int main(){
    int a,count=0,counto=0;
    scanf("%d",&a);
    int n[a];
    for(int i=0;i<=a-1;i++){
        scanf("%d",&n[i]);
    }
    for(int i=0;i<a;i++){
        if(n[i]%2==0){
            count++;
        }
    }
    for(int i=0;i<a;i++){
        if(n[i]%2!=0){
            counto++;
        }
    }
    printf("%d ",count);
    printf("%d",counto);

}