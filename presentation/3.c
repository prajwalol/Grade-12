
//Generate the series; 1, 5, 9, 13, ………… upto 10th term.
#include <stdio.h>

void generateSeries(int termCount) {
    printf("Series: ");
    for (int i = 1; i <= termCount; i++) {
        printf("%d", 4 * i - 3);
        if (i != termCount) {
            printf(", ");
        }
    }
    printf("\n");
}

int main() {
    int termCount = 10;
    generateSeries(termCount);

    return 0;
}

