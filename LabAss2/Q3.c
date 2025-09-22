#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int flag = 1;
    for(int i=2;i*i<=n;i++){
        if(n%i==0)
        flag =0;
    }
    if(flag==1)
    printf("%d is a prime",n);
    else
    printf("%d is not a prime",n);
    return 0;
}