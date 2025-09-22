#include<stdio.h>

int main(){
    float f;
    scanf("%f",&f);
    float c = 5*(f-32)/9.0;
    printf("Celcius: %f\n",c);
    float ce;
    scanf("%f",&ce);
    float fa = (9.0*c+160)/5.0;
    printf("Farenheit: %f\n",fa);
    return 0;
}