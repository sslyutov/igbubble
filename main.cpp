
#include "igbenchmark.h"

#include <iostream>

int main(int argc, char *argv[])
{    

    if (argc <= 1) {
        std::cout << "inetgrad 2023 by Sergey Slyutov. bubble sort benchmark" << std::endl;
        std::cout << "\t-thc number of additional to the main threads to be used during test. set 0 to use only main thread" << std::endl;
        std::cout << "\t-arrsize number of elementes in array. for instance 1000000. \n\r\t will generated array of 1000000 ramdom integers" << std::endl;
        std::cout << "\texample igbubble: -thc 10 -arrsize 500000" << std::endl;
        return 0;
    }

    unsigned int thc = 0;

    unsigned int arrsize = 0;

    for (int i = 0; i < argc; i++) {

        if(std::string("-thc").compare(argv[i]) == 0){

            if (i++ < argc) {
                thc = atoi(argv[i]);
            }else{
                std::cout << "-thc thread count parameter is invalid" << std::endl;
                return 0;
            }

        }else if(std::string("-arrsize").compare(argv[i]) == 0){

            if (i++ < argc) {
                arrsize = atoi(argv[i]);
            }else{
                std::cout << "-arrsize array size parameter is invalid";
                return 0;
            }
        }
    }

    initBenchmark(thc, arrsize);

    return 0;
}
