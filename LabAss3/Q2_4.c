#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int v[n];
    for(int i=0;i<n;i++){
        scanf("%d",&v[i]);
    }
    int x;
    scanf("%d",&x);

    int pos=n-1;
    for(int i=0;i<n;i++){
        if(v[i]==x){
            pos = i;
            break;
        }
    }

    if(pos==n-1){
        n--;
    }else{
        for(int i=pos;i<n-1;i++){
            v[i]=v[i+1];
        }
        n--;
    }

    for(int i=0;i<n;i++){
        printf("%d ",v[i]);
    }
    return 0;
}

