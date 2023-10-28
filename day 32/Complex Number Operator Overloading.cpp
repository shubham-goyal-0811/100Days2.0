#include <iostream>
using namespace std;
//create a program that simulates a complex number calculator . you should define the complex number class 
//that can perform variuos operation include add,sub,multiplyand division.
//additionaly overload comparision opersator. to compare complex number based on their magnitutde.
class complexnumber {
private:
    int real;
    int img;

public:
    complexnumber() {
        this->real = 0;
        this->img = 0;
    }
    complexnumber(int r, int i) {
        real = r;
        img = i;
    }
    int getReal() {
        return real;
    }
    int getimg() {
        return img;
    }
    void display() {
        cout << real << "+" << img << "i" << endl;
    }
    complexnumber operator+(complexnumber a) {
        complexnumber temp;
        temp.real = this->real + a.real;
        temp.img = this->img + a.img;
        return temp;
    }
    complexnumber operator-(complexnumber a) {
        complexnumber temp;
        temp.real = this->real - a.real;
        temp.img = this->img - a.img;
        return temp;
    }
    complexnumber operator*(complexnumber a) {
        complexnumber temp;
        temp.real = (this->real * a.real) - (this->img * a.img);
        temp.img = (this->real * a.img) + (this->img * a.real);
        return temp;
    }
    complexnumber operator/(complexnumber a) {
        int denominator = a.real * a.real + a.img * a.img;
        complexnumber temp;
        temp.real = (this->real * a.real + this->img * a.img) / denominator;
        temp.img = (this->img * a.real - this->real * a.img) / denominator;
        return temp;
    }
    bool operator>(complexnumber a) {
        return (this->real > a.real) && (this->img > a.img);
    }
    bool operator<(complexnumber a) {
        return (this->real < a.real) && (this->img < a.img);
    }
};

int main() {
    complexnumber c1(9, 2);
    cout << "c1: ";
    c1.display();
    complexnumber c2(3, 4);
    cout << "c2: ";
    c2.display();
    complexnumber c3 = c1 + c2;
    cout << "Addition: ";
    c3.display();
    complexnumber c4 = c1 - c2;
    cout << "Subtraction: ";
    c4.display();
    complexnumber c5 = c1 * c2;
    cout << "Multiplication: ";
    c5.display();
    complexnumber c6 = c1 / c2;
    cout << "Division: ";
    c6.display();

    if (c1 > c2) {
        cout << "Complex number 1 is greater than the other." << endl;
    } else if (c1 < c2) {
        cout << "Complex number 1 is less than the other." << endl;
    } else {
        cout << "Both complex numbers are equal." << endl;
    }
}
