#include <stdio.h>
int isPrime(int a){
    int count=0;
    if(count==2){
        return 1;
    }
    for(int i=1;i<=a;i++){
        if(a%i==0){
            count++;
        }
    }
    else{
        return 0;
    }
}