#include <stdio.h>

int f(int n){
    int s=0;
    for(int i=2;i<=n;i++){
        int k=1;
        for(int j=2;j<i;j++){
            if(i%j==0){
                k=0;
                break;
            }
        }
        if(k==1){
            s+=i;
        }
    }
    return s;
}

int main(){
    int x;
    scanf("%d",&x);
    printf("%d",f(x));
    return 0;
}

