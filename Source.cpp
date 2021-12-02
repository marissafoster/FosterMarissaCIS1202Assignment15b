// Marissa Foster
// CIS1202 - 800
// Assignment 15b

#include <iostream>
using namespace std;

template <typename T>

T half(T val)
{
    T res;
    res = val / 2;

    if (*typeid(val).name() == 'i') 
    {
        double test = static_cast<float>(val) / 2;
        return round((test));
    }
    else
    {
        return res;
    }

}

int main()
{
    double a = 7.0;
    float b = 5.0f;
    int c = 3;

    cout << half(a) << "\n";
    cout << half(b) << "\n";
    cout << half<int>(c) << "\n";
}