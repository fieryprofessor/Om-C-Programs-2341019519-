#include<stdio.h>
#include<math.h>

int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    double root1 = (-b + sqrt(pow(b,2)-4*a*c))/2*a;
    double root2 = (-b - sqrt(pow(b,2)-4*a*c))/2*a;
    printf("The roots are: %.2lf and %.2lf",root1,root2);
    return 0;
}