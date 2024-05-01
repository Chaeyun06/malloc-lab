#include <stdio.h>

static char *mem_start_brk; /* points to first byte of heap */
static char *mem_brk;       /* points to last byte of heap */
static char *mem_max_addr;  /* largest legal heap address */

void mem_init(void)
{
    mem_start_brk = (char *)malloc(20 * (1 << 20));
    mem_max_addr = mem_start_brk + 20 * (1 << 20); /* max legal heap address */
    mem_brk = mem_start_brk;                       /* heap is empty initially */
}

int main()
{
    mem_init();
    printf("%p\n", mem_start_brk);
    printf("%p\n", mem_brk);
    printf("%p\n", mem_max_addr);
}