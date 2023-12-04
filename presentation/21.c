//Generate the series; 2, 3, 5, 8, 13, ………… upto 15th term.
#include <stdio.h>

void generateSeries(int termCount) {
    printf("Series: ");
    int term1 = 2, term2 = 3;

    printf("%d, %d", term1, term2);

    for (int i = 3; i <= termCount; i++) {
        int nextTerm = term1 + term2;
        printf(", %d", nextTerm);
        term1 = term2;
        term2 = nextTerm;
    }

    printf("\n");
}

int main() {
    int termCount = 15;
    generateSeries(termCount);

    return 0;
}
