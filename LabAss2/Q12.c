#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n) {
    if (n<2)
    return false;
    for (int i=2;i*i<=n;i++) {
        if(n%i==0)
        return false;
    }
    return true;
}

int main() {
    int n;
    scanf("%d", &n);
    bool flag = false;

    for (int i=2;i<=n/2;i++) {
        if (isPrime(i) && isPrime(n-i)) {
            printf("%d can be expressed as the sum of %d and %d (both primes).\n",n,i,n-i);
            flag = true;
            break;  
        }
    }

    if (!flag)
    printf("%d cannot be expressed.\n", n);
    return 0;
}
