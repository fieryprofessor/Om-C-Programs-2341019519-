#include <stdio.h>
#include <math.h>

int binaryToDecimal(long long binary) {
    int decimal = 0, i = 0, rem;
    while (binary != 0) {
        rem = binary % 10;
        decimal += rem * pow(2, i);
        binary /= 10;
        i++;
    }
    return decimal;
}

long long decimalToBinary(int decimal) {
    long long binary = 0;
    int i = 0;
    while (decimal != 0) {
        int rem = decimal % 2;
        binary += rem * pow(10, i);
        decimal /= 2;
        i++;
    }
    return binary;
}

int binaryToOctal(long long binary) {
    int decimal = binaryToDecimal(binary);
    int octal = 0, i = 0;
    while (decimal != 0) {
        int rem = decimal % 8;
        octal += rem * pow(10, i);
        decimal /= 8;
        i++;
    }
    return octal;
}

long long octalToBinary(int octal) {
    int decimal = 0, i = 0;
    long long binary = 0;

    while (octal != 0) {
        int rem = octal % 10;
        decimal += rem * pow(8, i);
        octal /= 10;
        i++;
    }
    i = 0;
    while (decimal != 0) {
        int rem = decimal % 2;
        binary += rem * pow(10, i);
        decimal /= 2;
        i++;
    }

    return binary;
}

int main() {
    int choice;
    long long binary;
    int decimal, octal;

    do {
        printf("\n--- Number Conversion Menu ---\n");
        printf("1. Binary to Decimal\n");
        printf("2. Decimal to Binary\n");
        printf("3. Binary to Octal\n");
        printf("4. Octal to Binary\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter binary number: ");
                scanf("%lld", &binary);
                printf("Decimal: %d\n", binaryToDecimal(binary));
                break;
            case 2:
                printf("Enter decimal number: ");
                scanf("%d", &decimal);
                printf("Binary: %lld\n", decimalToBinary(decimal));
                break;
            case 3:
                printf("Enter binary number: ");
                scanf("%lld", &binary);
                printf("Octal: %d\n", binaryToOctal(binary));
                break;
            case 4:
                printf("Enter octal number: ");
                scanf("%d", &octal);
                printf("Binary: %lld\n", octalToBinary(octal));
                break;
            case 5:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while(choice != 5);

    return 0;
}
