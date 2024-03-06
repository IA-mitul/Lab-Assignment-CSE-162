#include<bits/stdc++.h>
using namespace std;
class students{
    public:
        int id;
        static int count;//static variable
        students(int id){
            this->id=id;
            count++;
        }
};
int students::count=0;//initalization of the static variable count

int main(){
    const int x= 10;//constant value using const keyword
    students s1(100),s2(101),s3(102),s4(103),s5(104);
    cout<<"the no : "<<s1.count<<endl;
    //x=15
    //if we try to change the value of x it will through an error
    cout<<x;
    

    return 0;
}