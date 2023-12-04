//Generate the series; 2, 4, 6, 8, ………… 30.
#include <stdio.h>

void generateSeries(int start, int end, int step) {
    printf("Series: ");
    for (int i = start; i <= end; i += step) {
        printf("%d", i);
        if (i != end) {
            printf(", ");
        }
    }
    printf("\n");
}

int main() {
    int start = 2;
    int end = 30;
    int step = 2;

    generateSeries(start, end, step);

    return 0;
}
