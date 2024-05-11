// program to print a name

#include <iostream>

using namespace std;

// print with no input
// int main()
// {
//     string my_name {"Max"};

//     cout << my_name << "\n";

//     return 0;  

// }


// print with input
int main() {
    string name;
    cout << "-- Enter name -- " << "\n";
    cin >> name;
    string msg {"Hi "};
    cout << msg << name << "\n";

    return 0;
}