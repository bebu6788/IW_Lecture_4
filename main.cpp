#include "functions_to_implement.cpp"
#include <iostream>
#include <vector>

int main(){
    
    std::vector<int> v = {10,10,10,10,10};
    std::cout << "Sum" << Sum(v) << std::endl;
    std::cout << "Product" << Product(v) << std::endl;
    std::cout << "Sign of -10" << Sign(-10) << std::endl;
    std::cout << "Sign of 10" << Sign(10) << std::endl;
}
