#include<bits/stdc++.h>
using namespace std;
class summation{
    public:
        int first;
        int last;
    summation(int first,int last){
        this->first=first;
        this->last=last;
    }
    void display(){
        int sum=0;
        for (int i=first;i<=last;i++){ //calculating the sum
            sum+=i;
        }
        cout<<"The sum is = "<<sum;

    }


};


int main(){
    int firstNumber;  
    int lastNumber;        
    cout<<"Enter the first number : ";
    cin>>firstNumber;       //getting input of the first number
    cout<<"Enter the last number : ";
    cin>>lastNumber;         //getting input of the last number
    summation s(firstNumber,lastNumber);        //creating object of the class 
    s.display();


    return 0;
}