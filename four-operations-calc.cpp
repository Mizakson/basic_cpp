// calc with 4 basic operations

#include <iostream>


double getNumber()
{
    double x;
    std::cout << "Enter number..." << std::endl;
    std::cin >> x;
    
    return x;    
}


int getOperation()
{
    int x;
    std::cout << "Choose a basic operation" << std::endl;
    // arithmetic operators, + instead of "addition"
    std::cout << "1: +, 2: -, 3: *, 4: /" << std::endl;
    std::cin >> x;
    return x;

}


double calculate()
{
    double x = getNumber();
    double y = getNumber();
    double result;

    int operationKey = getOperation();

        switch(operationKey) {
        case 1:
            result = x + y;
            std::cout << x << " + " << y << " = " << result << std::endl;
            break;
        case 2:
            result = x - y;
            std::cout << x << " - " << y << " = " << result << std::endl;
            break;
        case 3:
            result = x * y;
            std::cout << x << " * " << y << " = " << result << std::endl;
            break;
        case 4:
            result = x / y;
            std::cout << x << " / " << y << " = " << result << std::endl;
            break;
        default:
            std::cout << "Enter a valid operation key (1-4)" << std::endl;
            getOperation();
    }

    return result;

}


int main()
{
    calculate();
    return 0;
}