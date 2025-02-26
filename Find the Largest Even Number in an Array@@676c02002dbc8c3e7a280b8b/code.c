#include <stdio.h>

int main(){
    int a=5, maxint=-1;
    scanf("%d",&a);
    int n[a];
    for(int i=0;i<a;i++){
        scanf("%d",&n[i]);
    }
    for(int j=0;j<a;j++){
        if(n[j]%2==0){
            if(n[j]>maxint){
                maxint=n[j];
            }
        }
    }
    if(maxint!=0){
        printf("%d",maxint);
    }
    else{
        printf("-1");
    }
    return 0;
}