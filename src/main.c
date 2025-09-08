// #include <stdio.h>
#include <stdint.h>

#include <uapi.h>
#include <shield.h>

uint32_t __stack_chk_guard = 0;

int main(void)
{
   // printf("Hello!");
   return 0;
}

void __attribute__((no_stack_protector, noreturn, used))
_start(uint32_t runid, uint32_t seed)
{
   int task_ret;
   __stack_chk_guard = seed;
   /* SSP activated now */
   // __libc_init();
   task_ret = main();
   __sys_exit(task_ret);
   __builtin_unreachable();
}
