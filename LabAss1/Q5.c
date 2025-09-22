#include<stdio.h>

int main(){
    int s1,s2,s3,s4,s5;
    scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
    int sum = s1+s2+s3+s4+s5;
    float pmarks = (sum/5.0);
    printf("Percentage: %f%%\n:",pmarks);
    return 0;
}:"