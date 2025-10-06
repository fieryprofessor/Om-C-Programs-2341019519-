#include<stdio.h>
#include<limits.h>

int main(){
    int n;
    scanf("%d",&n);
    int v[n];
    for(int i=0;i<n;i++){
        scanf("%d",&v[i]);
    }
    int small= INT_MAX, large= INT_MIN;
    for(int i=0;i<n;i++){
        if(v[i]>=large)
            large = v[i];
        if(v[i]<=small)
            small = v[i];  
    }

    printf("The maximum difference is: %d",large-small);
    return 0;
}