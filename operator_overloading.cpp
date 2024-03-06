#include<bits/stdc++.h>
using namespace std;
class complex_number{
    public:
    int real;
    int imag;
    complex_number(){
        real=0;
        imag=0;
    }
    complex_number(int real,int imag){
        this->real=real;
        this->imag=imag;
    }
    complex_number operator+(complex_number c){
        complex_number temp;
        temp.real=real+c.real;
        temp.imag=imag+c.imag;
        return temp;
    }
    void display(){
        cout<<real<<" + "<<imag<<"i";
    }

};

int main(){
    complex_number cn1(2,5),cn2(4,7);
    complex_number cn3= cn1 + cn2;
    cn3.display();



    return 0;
}