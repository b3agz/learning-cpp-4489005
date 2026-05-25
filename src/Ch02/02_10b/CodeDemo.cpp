// Learning C++ 
// Exercise 02_10
// Type Casting, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

template <typename T>
void prntln(T content) {
    std::cout << content << std::endl << std::endl;
}

int main(){

    float flt;
    int32_t sgn;
    uint32_t unsgn;

    flt = -7.66;
    sgn = flt;
    unsgn = sgn;

    prntln(flt);
    prntln(sgn);
    prntln((int32_t)unsgn);
    
    std::cout << std::endl << std::endl;
    return (0);

}
