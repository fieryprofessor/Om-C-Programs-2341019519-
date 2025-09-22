#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int newn = n;
    int rev =0;
    while(n!=0){
        int d = n%10;
        rev = rev*10+d;
        n /=10;
    }
    if(newn==rev)
    printf("%d is a palindrome number.",newn);
    else
    printf("%d is not a palindrome number.",newn);
    return 0;
}