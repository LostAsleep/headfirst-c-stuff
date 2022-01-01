#include <stdio.h>

int main() {
        int counter;
        for (counter = 0; counter < 1000000000; counter++) {
                continue;
        }
        printf("Loop ran %i times.\n", counter);
        return 0;
}

