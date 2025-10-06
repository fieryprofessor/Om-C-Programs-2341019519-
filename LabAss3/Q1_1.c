#include<stdio.h>
#include<limits.h>

int main(){
    int n;
    scanf("%d",&n);
    int v[n];
    for(int i=0;i<n;i++){
        scanf("%d",&v[i]);
    }
    int large= INT_MIN, slarge= INT_MIN;
    for(int i=0;i<n;i++){
        if(v[i]>=large){
            slarge = large;
            large = v[i];
        }else if(v[i]>=slarge && v[i]<large){
            slarge = v[i];
        }else{
            continue;
        }
    }

    printf("The largest value is %d\n",large);
    printf("The second largest value is %d\n",slarge);
    return 0;
}