#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int rev = 0;
    while(n!=0){
        int d = n%10;
        rev = rev*10+d;
        n /= 10;
    }
    printf("The reversed number is %d\n",rev);
    return 0;
}