#include <stdio.h>

int main() {
    int X, Y;
    
    do {
        scanf("%d %d", &X, &Y);
    } while (X <= 1 || X >= 20 || Y <= X || Y >= 100000);

    int count = 1;
    
    
    while (count <= Y) {
        for (int i = 0; i < X; i++) {
            
            if (count > Y) {
                break;
            }
            printf("%d", count);
            
            if (i < X - 1) {
                printf(" ");
            } else {
                printf("\n");
            }
            
            count++;
        }
    }

    return 0;
}
