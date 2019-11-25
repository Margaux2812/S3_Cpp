#include <iostream>


#include "VectorD.hpp"


// g++ -Wall -O2 main.cpp VectorD.cpp -o vec.exe



int main(int argc, char **argv) {

    VectorD v(3);
/*
    // tp2
    v._data[0] = 1.0;
    v._data[1] = 0.3;
    v._data[2] = 5.2;
*/

    // tp3
    v[0] = 1.0;
    v[1] = 0.3; 
    v[2] = 5.2;

    std::cout << "v             : " << v << std::endl;
    std::cout << "v[2]          : " << v[2] << std::endl;

    VectorD v2 = v;
    v2.normalize();
    std::cout << "v2 normalized : " << v2 << std::endl;

    v = v + v2;
    std::cout << "v + v2        : " << v << std::endl;

    std::cout << "dot product   : " << v.dot(v2) << std::endl;

    VectorD v3 = v.cross(v2);
    std::cout << "cross product : " << v3 << std::endl;

    std::cout << "saving        : " << v << std::endl;   
    v.save("/tmp/vec.txt");

    VectorD v4;
    v4.load("/tmp/vec.txt");
    std::cout << "loading       : " << v4 << std::endl;   


    return 0;
}
