#include <stdio.h>
int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int x = 15;
    int y = 7;
    int max_val = max(x, y);
    printf("Максимум из %d и %d: %d\n", x, y, max_val); 
    x = -3;
    y = 0;
    max_val = max(x, y);
    printf("Максимум из %d и %d: %d\n", x, y, max_val);

    return 0;
}
