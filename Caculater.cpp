#include<iostream>

int main() {
    string p = " + ";
    string k = " - ";
    string z = " × ";
    string d = " ÷ ";
    string e = " = ";
    double a,b;
    char o;
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
