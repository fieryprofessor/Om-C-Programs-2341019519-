#include<stdio.h>

int main(){
    int p,r,t;
    scanf("%d%d%d",&p,&r,&t);
    double SI = (p*r*t)/100;
    printf("Simple Interest: %lf\n:",SI);
    return 0;
}