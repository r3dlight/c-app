
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
typedef int ssize_t;
#include <sys/random.h>

int main(void)
{   
    int random_number;
    getrandom(&random_number, sizeof(random_number), 0);
    printf("Hello, World from sample C app\n");
    printf("Random number is %d.\n", random_number);
    return 0;
}
