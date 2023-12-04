// Generate the series; 1, 2, 4, 7, 11, ………… upto 10th term
#include <stdio.h>

void generateSeries(int termCount) {
    printf("Series: ");
    int term = 1;

    for (int i = 1; i <= termCount; i++) {
        printf("%d", term);

        if (i != termCount) {
            printf(", ");
        }

        term += i + 1;
    }

    printf("\n");
}

int main() {
    int termCount = 10;
    generateSeries(termCount);

    return 0;
}
