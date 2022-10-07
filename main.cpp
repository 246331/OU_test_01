#include <iostream>

int Policz (int a, int b){
    return (a+b)*(a-b);
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    std::cout << "Wpierwszym branchu; 2+3=" << Policz(2,3);
    return 0;
}
