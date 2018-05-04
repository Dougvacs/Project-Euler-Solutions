#include <stdbool.h>
#include <stdio.h>

int main(void) {
    int tosearch = 1000;
    int sum = 0;
    for (int x = 0; x < tosearch; x++) {
        if (x%3==0 || x%5==0) {
            sum += x;
        }
    }
    printf("%d\n", sum);
    return 0;
}