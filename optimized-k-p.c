#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int steps(int source, int step, int dest) {
    if (abs(source) > dest) return INT_MAX;
    if (source == dest) return step;

    int pos = steps(source + step + 1, step + 1, dest);
    int neg = steps(source - step - 1, step + 1, dest); 

    return (pos < neg) ? pos : neg;
}

int main() {
    int target = 11;
    printf("Number of steps required to reach %d is %d\n", target, steps(0, 0, target));
        return 0; 
}