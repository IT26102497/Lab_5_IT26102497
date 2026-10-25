#include <stdio.h>

int main() {
    float gpa;

    // Prompt the User to Enter the GPA
    printf("Please Enter the GPA (0.0 - 4.0):");
    scanf("%f", &gpa);

    // Validate that the GPA is Within the Valid Range
    if (gpa >= 0.0 && gpa <= 4.0) {
        // Determine the transcript message based on GPA
        if (gpa <= 0.99) {
            printf("Transcript Message: Failed Semester - Registration Suspended\n");
        } else if (gpa <= 1.99) {
            printf("Transcript Message: On Probation for Next Semester\n");
        } else if (gpa <= 2.99) {
            printf("Transcript Message: No Message\n");
        } else if (gpa <= 3.49) {
            printf("Transcript Message: Dean's List for Semester\n");
        } else {
            printf("Transcript Message: Highest Honors for Semester\n");
        }
    } else {
        printf("Invalid GPA. Please Enter a Value Between 0.0 and 4.0\n");
    }

    return 0;
}
