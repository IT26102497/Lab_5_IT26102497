#include <stdio.h>

int main() {
    char status;

    for (int i = 1; i <= 5; i++) {
        printf("Enter Status for Order %d (I for Invalid, S for Skip, V for Valid):", i);
        scanf(" %c", &status);

        if (status == 'I' || status == 'i') {
            printf("Skipping order %d\n", i);
            continue;
        } else if (status == 'S' || status == 's') {
            printf("Stopping at order %d\n", i);
            break;
        } else if (status == 'V' || status == 'v') {
            printf("Processing order %d\n", i);
        } else {
            printf("Invalid status code entered.\n");
        }
    }

    return 0;
}
