#include<stdio.h>
#include<limits.h>

int main(){
    int n;
    scanf("%d",&n);
    int v[n];
    for(int i=0;i<n;i++){
        scanf("%d",&v[i]);
    }
    int small= INT_MAX, ssmall= INT_MAX;
    for(int i=0;i<n;i++){
        if(v[i]<=small){
            ssmall = small;
            small = v[i];
        }else if(v[i]<=ssmall && v[i]>small){
            ssmall = v[i];
        }else{
            continue;
        }
    }

    printf("The smallest value is %d\n",small);
    printf("The second smallest value is %d\n",ssmall);
    return 0;
}