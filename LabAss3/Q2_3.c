#include <stdio.h>

int main(){
    int n, pos, new;
    int arr[100];
    scanf("%d", &n);
    if(n<1||n>100){
        printf("\nInvalid Input");
        return 1;
    }
    
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    printf("\nEnter number: ");
    scanf("%d", &new);

    printf("\nEnter pos to insert: ");
    scanf("%d",&pos);
    if(pos<1 || pos>n+1){
        printf("\nInvalid Position");
        return(1);
    }

    for(int x=n-1;x>=pos-1;x--){
        arr[x+1] =arr[x];
    }

    arr[pos-1] = new;
    n++;

    for(int x=0;x<n;x++){
        printf("%d ",arr[x]);
    }

    return 0;
}