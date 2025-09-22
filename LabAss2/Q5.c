#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    if(n==1){
        printf("%d",1);
        return 0;
    }
    if(n==2){
        printf("%d %d",0,1);
        return 0;
    }

    int a=0,b=1;
    printf("%d %d ",0,1);
    n-=2;
    while(n--){
        int no = a+b;
        printf("%d ",no);
        a = b;
        b = no;
    }
    return 0;
}