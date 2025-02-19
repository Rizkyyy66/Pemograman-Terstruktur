#include <iostream>
#include <limits> //untuk std:numeric_limits
//using namespace std;
int main() {

    // tipe data integer
    int integerVar = 42;
    std::cout << "Tipe Data Integer: " << integerVar << std::endl;

    // tipe data float
    float floatVar = 3.14f;
    std::cout << "Tipe Data Float: " << floatVar << std::endl;

    // tipe data double
    double doubleVar = 3.14159;
    std::cout << "Tipe Data Double: " << doubleVar << std::endl;

    // tipe data boolean
    bool boolVar = true;
    std::cout << "Tipe Data Boolean: " << std::boolalpha << boolVar << std::endl;

    // tipe data char
    char charVar = 'A';
    std::cout << "Tipe Data Char: " << charVar << std::endl;

    //menampilkan batasan tipe data

    std::cout << "\nBatasan Tipe Data: " << std::endl;
    std::cout << "Integer: " << std::numeric_limits<int>::min() << " to " << std::numeric_limits<int>::max() << std::endl;
    std::cout << "Float: " << std::numeric_limits<float>::min() << " to " << std::numeric_limits<float>::max() << std::endl;
    std::cout << "Double: " << std::numeric_limits<double>::min() << " to " << std::numeric_limits<double>::max() << std::endl;


    return 0;
}
