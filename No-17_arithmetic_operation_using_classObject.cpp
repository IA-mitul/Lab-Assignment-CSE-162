#include<bits/stdc++.h>
using namespace std;
class arithmetic_operation{
    public:
        int num1;
        int num2;
        arithmetic_operation(int num1,int num2){//initializating valu
            this->num1=num1;
            this->num2=num2;
        }
        void sum(){//adding value
            cout<<"Sum = "<<num1+num2<<endl;
        }
        void sub(){//subtracting value
            cout<<"Sub = "<<num1-num2<<endl;
        }
        void division(){//dividing num1 by num2
            cout<<"Division = "<<num1/num2<<endl;
        }
        void multiplacation(){
            cout<<"Multiplacation = "<<num1*num2<<endl;
        }


};

int main(){
    arithmetic_operation ao(40,10);//creating object
    ao.sum();
    ao.sub();
    ao.multiplacation();
    ao.division();


    return 0;
}