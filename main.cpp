#include <iostream>

<<<<<<< HEAD
int Policz (int a, int b) {
    return a*b;   //zamiana dodawania na mnozenie
=======
int Policz (int a, int b){
    return (a+b)*(a-b);
>>>>>>> 03
}

int main() {
    std::cout << "Hello, World!" << std::endl;

    std::cout << "Wpierwszym branchu; 2+3=" << Policz(2,3);

    return 0;
}

