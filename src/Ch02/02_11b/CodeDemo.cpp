// Learning C++ 
// Exercise 02_11
// Type Casting Examples, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

template <typename T>
void prntln(T content) {
    std::cout << content << std::endl << std::endl;
}
void newln() {
    std::cout << std::endl << std::endl;
}

int main(){

    int fahrenheight = 100;
    int celsius;

    celsius = ((float)5 / 9.0) * (fahrenheight - 32);

    newln();
    prntln(celsius);
    prntln(fahrenheight);

    float weight = 10.99;

    newln();
    prntln(weight);
    prntln((int)weight);
    prntln((int)((weight - (int)weight) * 10000));
    
    newln();
    return (0);
}
