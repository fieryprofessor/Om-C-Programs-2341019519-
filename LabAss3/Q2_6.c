#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int v[n];
    for(int i=0;i<n;i++){
        scanf("%d",&v[i]);
    }

    int l=0,r=n-1;
    while(l<=r){
        int temp = v[l];
        v[l] = v[r];
        v[r] = temp;
        l++;
        r--;
    }

    for(int i=0;i<n;i++){
        printf("%d ",v[i]);
    }
    return 0;
}