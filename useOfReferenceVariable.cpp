#include<bits/stdc++.h>
using namespace std;
int main(){
    int original_value = 5; // declare a variable
    int &reference_value = original_value; //reference variable
    cout<<"Original Value : "<<original_value<<endl; //print original value
    cout<<"Reference Value : "<<reference_value<<endl; //print reference value
    reference_value = 8; // changing reference variable value
    cout<<"Original Value : "<<original_value<<endl;//print original value
    cout<<"Reference Value : "<<reference_value<<endl;//print reference value
    


    return 0;
}