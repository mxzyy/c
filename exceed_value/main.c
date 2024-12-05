#include <stdio.h>

int main() {
    // data type overflow will back to minimum
    // 2147483647 max int
    // we add 2147483648 and the program will back to -2147483648
    // we can find the real value using remainder
    int var = 2147483650;
    int max_val = 2147483647;
    printf("%d\n", var);
    printf("%d\n", max_val % var );
    return 0;
}