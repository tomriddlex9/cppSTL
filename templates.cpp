#include <iostream>
using namespace std;
//created a template for all types to get the sum of two input numbers 
template <typename T>
T sum(T x, T y)
{
    return x + y;
}
// complex class created to model Complex numbers 
// vars in Complex - real , imaginary 
class Complex
{
public:
    double re;
    double im;
    //default Class Constructor 
    Complex(){
        re=0.0; 
        im=0.0; 
    }
    // Class Constructor 
    Complex(double _real, double _imaginary)
    {
        re = _real;
        im = _imaginary;
    }
    // Class function to print the complex numbers 
    void printComplex()
    {
        cout << re << "+" << im << "i";
    }
};
int main()
{
    // two complex class variable (instances )
    Complex a(4.5, 3),b(4, 34.3);
    // using of the sum template for doubles and int type 
    cout << sum<double>(54.4, 43.2) << endl;
    cout << sum<int>(4, 7) << endl;
    // using the sum template in a unique to create a new Complex variable
    Complex sumAB(sum<double>(a.re, b.re), sum<double>(a.im, b.im));
    sumAB.printComplex();
    cout << endl;
}