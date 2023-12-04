// Generate the series; 1, 4, 9, 16, ………… up to the 10th term.
#include <stdio.h>

void generateSeries(int termCount) {
    printf("Series: ");
    for (int i = 1; i <= termCount; i++) {
        int term = i * i;
        printf("%d", term);

        if (i != termCount) {
            printf(", ");
        }
    }
    printf("\n");
}

int main() {
    int c = 10;
    generateSeries(c);

    return 0;
}

