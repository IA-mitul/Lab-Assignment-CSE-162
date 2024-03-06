#include<bits/stdc++.h>
using namespace std;
class studentsRecord{
    private:
        string name;
        int id;
        int mobileNo;
    public:
        studentsRecord(string name,int id,int mobileNo){
            this->name=name;
            this->id=id;
            this->mobileNo=mobileNo;
        }

    void display(){
        cout<<"Name : "<<name<<endl;
        cout<<"ID : "<<id<<endl;
        cout<<"Mobile No : 0"<<mobileNo<<endl;
    }

};

int main(){

    string name;
    int id;
    int mobile;
    cout<<"Enter your name : ";
    cin>>name;
    cout<<"Enter your id : ";
    cin>>id;
    cout<<"Enter your mobile no : ";
    cin>>mobile;
    studentsRecord sr1(name,id,mobile);
    sr1.display();


    return 0;
}