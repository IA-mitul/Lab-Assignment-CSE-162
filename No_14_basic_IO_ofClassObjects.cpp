#include<bits/stdc++.h>
using namespace std;

class student{
    private:
        string name;
        int id;

    public:
        student(string name,int id){
            this->name=name;
            this->id=id;
        }
    void display(){
        cout<<"Name : "<<name<<endl;
        cout<<"ID : "<<id<<endl;

    }


};

int main(){
    student s1("Mitul",2202119),s2("Bob",2202);
    s1.display();
    s2.display();

    return 0;
}