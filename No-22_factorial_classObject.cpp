#include<bits/stdc++.h>
using namespace std;
class factorial{
public:
        int n;
        factorial(int n){
            this->n=n;
        }
    void operation(){
        int x=1;
        while(n>0){
            x=x*n;
            n--;
        }
        cout<<"The factorial is : "<<x;
    }

};

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    factorial f1(n);
    f1.operation();


    return 0;
}