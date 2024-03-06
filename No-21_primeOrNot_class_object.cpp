#include<bits/stdc++.h>
using namespace std;
class Isprime{
        public:
            int number;
        Isprime(int number){//value initalizing
            this->number=number;
        }
    bool operation(){
        if(number<=1) return false; //0 and 1 are not prime number
        for (int i = 2; i <= number/2; i++)
        {
            if(number%i==0) return false; //number is not prime because it is divided by i
        }
        return true;//number is not divided by i. so it is a prime number
        
        
    }

};

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    Isprime ip(n);
    if(ip.operation()){
        cout<<"The number is a prime number."<<endl;
    }
    else{
        cout<<"The number is a prime number."<<endl;

    }

    return 0;
}