
#include <stdio.h>

int main() {
    int y = 0, x = 0;

    // Input
    printf("Enter the two numbers you want to add: ");
    scanf_s("%d %d", &x, &y);

    // Check the sign of x
    if (x > 0) {
        for (int i = 0; i < x; i++) {
            y++;
        }
    } else if (x < 0) {
        for (int i = x; i < 0; i++) {
            y--;
        }
    }

    printf("%d is the sum of those two numbers\n", y);

    return 0;
}



