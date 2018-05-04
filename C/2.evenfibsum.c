#include <stdbool.h>
#include <stdio.h>

bool iseven(int num) {
    if (num % 2 == 0)
        return true;
    else
        return false;
}

int main(void) {
    int prevnum = 0;
    int currnum = 1;
    int nextnum = 0;
    int sum = 0;
    do {
        if (iseven(currnum))
            sum += currnum;
        nextnum = prevnum + currnum;
        prevnum = currnum;
        currnum = nextnum;
    } while (nextnum < 4000000);
    
    printf("%d\n", sum);
    
    return 0;
}
