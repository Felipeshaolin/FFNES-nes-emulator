#include <array>
#include <iostream>
#include "memory.h"

int main (){

    memory_write(0x0010,0x001);

    memory_show(4);

    return 0;
}