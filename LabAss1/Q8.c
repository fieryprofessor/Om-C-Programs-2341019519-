#include<stdio.h>
#include<math.h>

int main(){
    int x;
    scanf("%d", &x);

    double p = pow(x,1.0) + pow(x,2.0) + pow(x,3.0);
    printf("Power: %.2lf\n", p);

    return 0;
}
