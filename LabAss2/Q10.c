#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int flag = 1;
    int c = 0;
    int newn = n;
    while(n!=0){
        int d = n%2;
        if(d==1){
            c++;
            if(c==2)
            break;
        }
        n /= 2;
    }
    if(c<2)
    printf("%d is a power of 2.\n", newn);
    else
    printf("%d is not a power of 2.\n", newn);
    return 0;
}