#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int v[n];
    for(int i=0;i<n;i++){
        scanf("%d",&v[i]);
    }
    if(n==1){
        printf("%d",v[0]);
        return 0;
    }
    int count=1;
    int p1=0;
    int p2=p1+1;
    while(p2<n){
        if(v[p1]!=v[p2]){
            p1 +=1;
            int temp = v[p2];
            v[p2] = v[p1];
            v[p1] = temp;
            count++;
        }
        p2++;
    }
    n = count;
    for(int i=0;i<n;i++){
        printf("%d ",v[i]);
    }

    return 0;
}