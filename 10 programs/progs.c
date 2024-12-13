#include <stdio.h>

int main() {
    int n, marks, temp, avg, i;
    i = 1;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    marks = 0;

    while (i <= n) {
        printf("Enter the marks one by one, and after you're done, enter -1: ");
        while (1) {
            scanf("%d", &temp);
            if (temp == -1) {
                break;
            } else {
                marks += temp;
            }
        }
        i++;
    }

    avg = marks / n;
    printf("The average marks of %d students is %d\n", n, avg);

    return 0;
}
