#include <stdio.h>

unsigned int while_loop(unsigned int cycles) {
    unsigned int i = 0;
    while (i < cycles) {
        i++;        
    }
    return i;

}

unsigned int do_loop(unsigned int cycles) {
    unsigned int i = 0;
    do
    {
        i++;
    } while (i < cycles);

    return i;
}

int main() {
    unsigned int cycles = 10;
    
    unsigned int while_loop_output = while_loop(cycles);

    if (while_loop_output != cycles) {
        printf("Error: while_loop completed %d cycles instead of the expected %d cycles.\n", while_loop_output, cycles);
        return 1;
    }

    unsigned int do_loop_output = do_loop(cycles);

    if (do_loop_output != cycles) {
        printf("Error: do_loop completed %d cycles instead of the expected %d cycles.\n", do_loop_output, cycles);
        return 1;
    }

    unsigned int max_cycles = 0xFFFFFFFF;

    unsigned int while_loop_output_max = while_loop(max_cycles);
 
    if (while_loop_output_max != max_cycles) {
        printf("Error: while_loop completed %d cycles instead of the expected %d cycles.\n", while_loop_output_max, max_cycles);
        return 1;
    }

    return 0;
}
