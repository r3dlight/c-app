
#include <stdio.h>
#include <stdlib.h>
#include <sys/random.h>

int main(void)
{   
    int random_number;
    random_number = rand();
    printf("Hello, World from sample C app\n");
    printf("Random number is %d.\n", random_number);
    return 0;
}
