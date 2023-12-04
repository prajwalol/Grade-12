
//Generate the series; 5, 55, 555, 5555, 55555.
#include <stdio.h>

void generateSeries(int n) {
    for (int i = 1; i <= n; i++) { // Generate 'n' terms in the series
        for (int j = 1; j <= i; j++) {
            printf("%d", n);
        }
        printf("\n");
    }
}

int main() {
    int n = 5;
    generateSeries(n);

    return 0;
}

