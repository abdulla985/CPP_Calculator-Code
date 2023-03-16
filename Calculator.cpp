#include<iostream>

int main() {
    std::string p = " + ";
    std::string k = " - ";
    std::string z = " × ";
    std::string d = " ÷ ";
    std::string e = " = ";
    double a,b;
    char o;
    std::cout << " Enter num1 op num2: ";
    std::cin >> a >> o >> b;
    switch (o) {
        case '+':
     std::cout << a << p << b << e << a + b << std::endl;
        break;

        case '-':
     std::cout << a << k << b << e << a - b << std::endl;
        break;

        case '*':
     std::cout << a << z << b << e << a * b << std::endl;
        break;

        case '/':
    std::cout << a << d << b << e << a / b << std::endl;
        break;

    }
    return 0;
}
