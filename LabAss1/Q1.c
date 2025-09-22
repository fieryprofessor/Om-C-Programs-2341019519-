#include<stdio.h>
#define PI 3.141593
int main(){
    int r;
    scanf("%d",&r);
    float area = PI*r*r;
    float circumference = 2*PI*r;
    printf("Area is: %f\n",area);
    printf("Circumference is: %f",circumference);
    return 0;
}