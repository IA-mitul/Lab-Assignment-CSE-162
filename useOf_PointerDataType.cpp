#include<bits/stdc++.h>
using namespace std;
int main(){
int Number = 99;//declare a variable
int *pointer_variable;//declare a pointer variable
pointer_variable=&Number; // initialize the pointer variable with the address of number 
cout<<"Value of Number : "<<Number<<endl;//print number
cout<<"Value of pointer_variable : "<<pointer_variable<<endl;
cout<<"Value of *pointer_variable : "<<*pointer_variable<<endl;
    return 0;
}