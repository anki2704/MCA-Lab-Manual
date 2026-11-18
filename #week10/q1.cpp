#include <iostream>
using namespace std;


struct Complex {
    float real;
    float imag;
};


void readComplex(Complex &c) {
    cout << "Enter real part: ";
    cin >> c.real;
    cout << "Enter imaginary part: ";
    cin >> c.imag;
}


void writeComplex(const Complex &c) {
    if (c.imag >= 0)
        cout << c.real << " + " << c.imag << "i";
    else
        cout << c.real << " - " << -c.imag << "i";
}


Complex add(const Complex &a, const Complex &b) {
    Complex result;
    result.real = a.real + b.real;
    result.imag = a.imag + b.imag;
    return result;
}


Complex subtract(const Complex &a, const Complex &b) {
    Complex result;
    result.real = a.real - b.real;
    result.imag = a.imag - b.imag;
    return result;
}

 
Complex multiply(const Complex &a, const Complex &b) {
    Complex result;
    result.real = a.real * b.real - a.imag * b.imag;
    result.imag = a.real * b.imag + a.imag * b.real;
    return result;
}

int main() {
    Complex c1, c2, sum, diff, prod;

    cout << "Enter first complex number:\n";
    readComplex(c1);

    cout << "\nEnter second complex number:\n";
    readComplex(c2);

    sum  = add(c1, c2);
    diff = subtract(c1, c2);
    prod = multiply(c1, c2);

    cout << "\nFirst complex number  : ";
    writeComplex(c1);
    cout << endl;

    cout << "Second complex number : ";
    writeComplex(c2);
    cout << endl;

    cout << "\nSum        : ";
    writeComplex(sum);
    cout << endl;

    cout << "Difference : ";
    writeComplex(diff);
    cout << endl;

    cout << "Product    : ";
    writeComplex(prod);
    cout << endl;

    return 0;
}
