#include <stdio.h>

int main(void) {

    unsigned long long num = 600851475143;
    int largestprime = 0;
    int div = 2;
    
    while (num > 1) {
        while (num % div == 0) {
            if (div > largestprime) {
                largestprime = div;
            }
            num = num/div;
        }
        div = div + 1;
        if (div*div > num) {
            if (num > 1) {
                if (div > largestprime) {
                    largestprime = num;
                    break;
                }
            }
        }
    }
    
    printf("%d", largestprime);
    return 0;
}