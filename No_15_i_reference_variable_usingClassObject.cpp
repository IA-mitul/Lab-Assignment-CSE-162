#include<bits/stdc++.h>
using namespace std;
class swap_numbers{
    public:
        int first;
        int second; 
    swap_numbers(int first,int second){//initilasing values
        this->first=first;
        this->second=second;
    }
    void operation(int& a,int& b){//passing the address and swapping
        int temp=a;
        a=b;
        b=temp;
    }
    void display(){//printing numbers
        cout<<"First number : "<<first<<endl;
        cout<<"Second number : "<<second<<endl;
    }


};


int main(){
    swap_numbers s(1,2);
    cout<<"Before swaping."<<endl;
    s.display();
    s.operation(s.first,s.second);
    cout<<"After swaping."<<endl;
    s.display();


    return 0;
}