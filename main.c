#include <stdio.h>
#include <stdlib.h>

#include "convert_base.h"

void usage(void){
    printf("Usage: ./convert \"source number\" \"source base\" \"dest base\".\n");
}

void math_err(void){
    printf("Math error! Your number isn't in that base.\n");
}

int main(int argc, char **argv){
    if(argc < 4){
        usage();

        return -1;
    }

    if(is_actual_this_base(atoi(argv[1]), atoi(argv[2])) == -1){
        math_err();

        return -1;
    }

    printf("(%d)%d = (%d)%d\n", 
        atoi(argv[1]), 
        atoi(argv[2]), 
        base_to_base(atoi(argv[1]), 
        atoi(argv[2]), 
        atoi(argv[3])), 
        atoi(argv[3])
    );

    return 0;
}