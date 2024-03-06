#include<bits/stdc++.h>
using namespace std;

class A {
public:
    void function(); // only declaration

};
void A ::function(){//definition outside class using scope resolution '::' operator
    cout<<"Function is called.";
}
int main(){
    A ob;
    ob.function();

    return 0;
}