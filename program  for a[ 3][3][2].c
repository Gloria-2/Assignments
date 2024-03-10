// program to declare, initialize, and print a 3x3x2 3D array
#include <stdio.h>

int main() {
    // Declare and initialize a 3x3x2 3D array
    int a[3][3][2] = {{{0, 1}, {2, 3}, {4, 5}},
                      {{6, 7}, {8, 9}, {10, 11}},
                      {{12, 13}, {14, 15}, {16, 17}}};

    // Print the array
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 2; k++) {
                printf("%d ", a[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}