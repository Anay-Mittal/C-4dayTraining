#include <stdio.h>
#include <ctype.h>

int main() {
    printf("Enter the input: ");
    char input;
    scanf(" %c", &input);
    if (isdigit(input)) {
        printf("The input entered is a digit.\n");
    } else {
        printf("The input is not a digit.\n");
    }

    return 0;
}
