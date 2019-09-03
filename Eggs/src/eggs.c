#include <stdio.h>
#include "eggs.h"

int main(int argc, char** argv) {
    crack_eggs();
    add_eggs();
    return 0;
}

void add_eggs() {
    printf("Adding eggs to the mix!\n");
}

void crack_eggs() {
    printf("*CRACK*\n");
}
