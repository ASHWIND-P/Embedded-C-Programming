#include <stdio.h>

int main() {
    int limit, i = 0;

    printf("Enter the limit: ");
    scanf("%d", &limit);

    do {
        printf("%d ", i);
        i++;
    } while (i <= limit);

    printf("\n");
    return 0;
}

