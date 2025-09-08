
#include <stdio.h>
#include <rand.h>

int main(void)
{   int random_number;
    random_number = shield_rand();
    printf("Hello, World from sample C app\n");
    printf("Random number is %d.\n", random_number);
    return 0;
}
