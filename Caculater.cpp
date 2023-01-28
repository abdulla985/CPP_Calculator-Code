#include <iostream>
using namespace std;

int main()
{
    char e;
    float num1, num2;
    cout << "enter first number: ";
    cin >> num1;
    cout << "select : *, +, -, /: ";
    cin >> e;
    cout << "enter second number : ";
    cin >> num2;
    switch (e)
    {
    case '*':
    cout << num1 << " x " << num2 << " = " << num1 * num2;
    break;
    
    case '+':
    cout << num1 << " + " << num2 << " = " << num1 + num2;
    break;
    
    case '-':
    cout << num1 << " - " << num2 << " = " << num1 - num2;
    break;
    default:
    
    case '/':
    cout << num1 << " / " << num2 << " = " << num1 / num2;
    break;
    }
    return 0;
}
