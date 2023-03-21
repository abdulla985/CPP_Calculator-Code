#include<iostream>

void calculate (int num01, int num02, char operand) {
    switch (operand){
        // Addition
        case '+': {
            std::cout<<num01<<operand<<num02<< " = "<< num01+num02<<std::endl;
            break;
        }
        // Subtraction
        case '-':{
            std::cout<<num01<<operand<<num02<< " = "<< num01-num02<<std::endl;
            break;
        }
        // Multiplication
        case '*':{
            std::cout<<num01<<"x"<<num02<< " = "<< num01*num02<<std::endl;
            break;
        }
        // Division
        case '/':{
            if (num02 != 0){
            std::cout<<num01<<"/"<<num02<< " = "<< num01/(num02)<<std::endl;
            } else{
                std::cout<< "Cannot divide by zero"<< std::endl;
            }
            break;
        }
        default:{
            std::cout<<"Invalid Operator"<<std::endl;
        }
    }
}

int main() {
    double num_01,num_02;
    char oper;
    std::cout << "Program to perform arithmetic operations on 2 numbers."<<std::endl;
    std::cout << "Operations available are: Addition (+), Subtration(-), Division(/), Multiplication(*)\n\n"<<std::endl;

    std::cout << "Enter num1 op num2(e.g. 5 * 20 ): ";
    std::cin >> num_01 >> oper >> num_02;

    calculate(num_01,num_02,oper);
    return 0;
}
