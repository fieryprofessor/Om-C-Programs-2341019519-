#include<stdio.h>

int main(){
    int a = 5;
    float b = 6.73;
    double c = 45.473;
    char d = 'a';
    short e = 12;
    printf("%zu\n",sizeof(a));
    printf("%zu\n",sizeof(b));
    printf("%zu\n",sizeof(c));
    printf("%zu\n",sizeof(d));
    printf("%zu\n",sizeof(e));
    return 0;
}