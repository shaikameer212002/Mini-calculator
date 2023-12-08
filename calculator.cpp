#include <iostream>
#include <cmath>

using namespace std;

int main() {
    char operation;
    double num1, num2, result;

    cout << "Enter operator (+, -, *, /, sqrt, pow, sin, cos, tan): ";
    cin >> operation;

    switch(operation) {
        case '+':
        case '-':
        case '*':
        case '/':
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            break;
        case 'sqrt':
            cout << "Enter a number: ";
            cin >> num1;
            break;
        case 'pow':
            cout << "Enter base and exponent: ";
            cin >> num1 >> num2;
            break;
        case 'sin':
        case 'cos':
        case 'tan':
            cout << "Enter an angle in radians: ";
            cin >> num1;
            break;
        default:
            cout << "Invalid operation!";
            return 1;
    }

    switch(operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0)
                result = num1 / num2;
            else {
                cout << "Division by zero error!";
                return 1;
            }
            break;
        case 'sqrt':
            result = sqrt(num1);
            break;
        case 'pow':
            result = pow(num1, num2);
            break;
        case 'sin':
            result = sin(num1);
            break;
        case 'cos':
            result = cos(num1);
            break;
        case 'tan':
            result = tan(num1);
            break;
        default:
            cout << "Invalid operation!";
            return 1;
    }

    cout << "Result: " << result << endl;

    return 0;
}

