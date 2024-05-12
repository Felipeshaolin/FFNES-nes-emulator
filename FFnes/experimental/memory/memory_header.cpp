
#include <iostream>

const int memory_size = 0xffff; // the size of the array in hex

std::array <unsigned char, memory_size > memory_map; // creates an array with said size


int memory_read(int memory_adress){

    return static_cast<int>(memory_map[memory_adress]); // returns the number iin int type for that memory adress

}

int memory_write(int memory_adress, int value){

    memory_map[memory_adress] = value; // writes value to the adress

    return static_cast<int>(memory_map[memory_adress]); // returns the number in that adress

}

void memory_show(int endline){ // a basic hex editor but in decimal

    std::cout << std::endl;
    std::cout << ' ' << std::endl; // debugging for vscode

    for (int i = 0 ; i < memory_map.size()/16; i++){ // divades the whole size of the array in 16

        std::cout << std::endl;
        std::cout << i* 16 << ':' << ' ' ; // prints the row number 

        int o = i*16 ; // adapting the row number to the index of the adress

        for (int k = 0 ; k <= 15; k++){ // prints every value of every address in decimal

            std::cout << static_cast<int>(memory_map[o + k]) << ' ' ;

        }

        std::cout << std::endl; //ends the line

        if (i == endline){ // if the nunber is excedded then it breaks of the loop
            break;
        }
    }

}
