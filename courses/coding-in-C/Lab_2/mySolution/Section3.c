#include <stdio.h>

#define BOARD_SIZE 8
#define FIELD_WIDTH 3

int main() {
    printf("  ");
    for (int col = 0; col < BOARD_SIZE; col++) {
        printf(" %c ", 'A' + col);
    }
    printf("\n");

    printf(" +");
    for (int col = 0; col < BOARD_SIZE; col++) {
        printf("---+");
    }
    printf("\n");

    for (int row = 0; row < BOARD_SIZE; row++) {
        int rank = BOARD_SIZE - row;

        printf("%d|", rank);

        for (int col = 0; col < BOARD_SIZE; col++) {
            if ((row + col) % 2 == 0) {
                printf("   ");
            } else {
                printf("###");
            }
            printf("|");
        }

        printf("%d\n", rank);

        printf(" +");
        for (int col = 0; col < BOARD_SIZE; col++) {
            printf("---+");
        }
        printf("\n");
    }

    printf("  ");
    for (int col = 0; col < BOARD_SIZE; col++) {
        printf(" %c ", 'A' + col);
    }
    printf("\n");

    return 0;
}
