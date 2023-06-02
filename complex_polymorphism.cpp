#include <iostream>
using namespace std;


class complex
{
private:
    double real, imag;

public:
    complex(double r = 0, double i = 0)
    {
        real = r;
        imag = i;
    }
    complex operator+(complex const &obj)
    {
        complex res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        return res;
    }
    complex operator-(complex const &obj)
    {
        complex res;
        res.real = real - obj.real;
        res.imag = imag - obj.imag;
        return res;
    }
    complex operator*(complex const &obj)
    {
        complex res;
        res.real = (real * obj.real) - (imag * obj.imag);
        res.imag = (real * obj.imag) + (obj.real * imag);
        return res;
    }
    complex operator/(complex const &obj)
    {
        complex res;
        complex res2;
        complex res3;
        res.real = (real * obj.real) + (imag * obj.imag);
        res.imag = -(real * obj.imag) + (obj.real * imag);
        double sq = (obj.real * obj.real) + (obj.imag * obj.imag);
        // double sq = (real * real) + (imag * imag);
        res2.real = res.real / sq * 1.0;
        res2.imag = res.imag / sq * 1.0;

        return res2;
    }
    void print()
    {
        cout << real << " + j" << imag << endl;
    }
};

int main(void)
{
    complex c1(3, 4), c2(4, -3), c3(0, 6), v(100, 50);
    complex c4, c5, c6, c7, c8, c9, c10, c11;
    c4 = c1 * c2;
    c5 = c4 * c3;
    // c5.print();
    c6 = c1 * c2;
    c7 = c2 * c3;
    c8 = c3 * c1;
    c9 = c6 + c7 + c8;
    // c9.print();
    c10 = c5 / c9;
    // c10.print();
    c11 = v / c10;
    c11.print();
}