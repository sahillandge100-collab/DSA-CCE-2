#include<iostream>
using namespace std;

class complex{
    private:
    float real;
    float imag;

    public:
    complex()
    {
        real = 0;
        imag = 0;
    }
    complex(float r , float i)
    {
        real = r;
        imag = i;
    }
    ~complex(){}

void display(){
    cout<<real<<"+"<<imag<<"j"<<endl;
}
    complex  operator+(complex c2){
        float r = real+c2.real;
        float i = imag+c2.imag;
        return(complex(r,i));
    }
     complex  operator-(complex c2){
        float r = real-c2.real;
        float i = imag-c2.imag;
        return(complex(r,i));
    }
     complex  operator*(complex c2){
        float r = real+c2.real-imag*c2.imag;
        float i = imag+c2.imag+imag*c2.imag;
        return(complex(r,i));
    }
};

int main(){
    complex c1(5.0,2.0);
    complex c2(2.0, 11.0);
    cout<<"First complex number is: ";
    c1.display();
    cout<<"Second complex number is: ";
    c2.display();

    complex sum = c1+c2;
    cout<<"Addition is: ";
    sum.display();

     complex diff = c1-c2;
    cout<<"Substraction is: ";
    diff.display();

     complex prod = c1*c2;
    cout<<"Multiplication is: ";
    prod.display();


    return 0;

}

PS C:\Users\student\Desktop\sahil 211.c> cd "c:\Users\student\Desktop\sahil 211.c\" ; if ($?) { g++ programm4.cpp -o programm4 } ; if ($?) { .\programm4 }
First complex number is: 5+2j
Second complex number is: 2+11j
Addition is: 7+13j
Substraction is: 3+-9j
Multiplication is: -15+35j
PS C:\Users\student\Desktop\sahil 211.c> 