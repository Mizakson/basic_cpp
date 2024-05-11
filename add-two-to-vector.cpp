// generate-arr.cpp

#include <iostream>
#include <vector>

using namespace std;

vector<int> addTwo(vector<int> v)
{
    vector<int> x;
    for (auto i = 0; i < v.size(); ++i)
        x.push_back(v[i] + 2);

    return x;
}

int main()
{
    vector<int> myVector;
    vector<int> res;

    myVector.push_back(4);
    myVector.push_back(30);
    myVector.push_back(66);

    res = addTwo(myVector);

    // print numbers
    // 6, 32, 66
    for (auto i = 0; i < res.size(); ++i)
        cout << res[i] << " " << endl;

    return 0;
}