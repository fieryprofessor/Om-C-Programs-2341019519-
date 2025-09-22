#include<stdio.h>
#include<stdbool.h>

int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    for(int i=a;i<=b;i++){
        int c =0;
        bool flag = true;
        for(int j=2;j*j<=i;j++){
            if(i%j==0)
            flag = false;
        }
        if(flag && i>=2)
        printf("%d ",i);
    }
    return 0;
}