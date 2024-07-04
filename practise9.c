#include <stdio.h>
#include <math.h>
int main() {
    int x, y;
    printf("Enter x and y: ");
    scanf("%d %d", &x, &y);
    int result = min_steps(x, y);
    printf("Minimum steps from %d to %d: %d\n", x, y, result);
    return 0;
}
int min_steps(int x, int y) {
    int distance = y - x;
    if (distance == 0) return 0;
    int steps = 0;
    int step_length = 1;
    int current_position = 0;
    while (current_position < distance) {
        steps++;
        current_position += step_length;
        if (current_position >= distance) {
            break;
        }
        if (steps % 2 == 0) {
            step_length++;
        }
    }
    return steps;
}