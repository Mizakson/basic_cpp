// add two numbers

#include <iostream>

using namespace std;

int twoSum(int a, int b)
{
    return a + b;
}

int main() 
{
    int num1 {5};
    int num2 {20};

    cout << num1 << " + " << num2 << " = " << twoSum(num1, num2) << "\n";
}