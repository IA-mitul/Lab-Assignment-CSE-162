#include<bits/stdc++.h>
using namespace std;
class students{
    public:
        string student_name;
        static int count; //counting the total number of object created
        students(string name){
        student_name=name;
        count++;//increasing the count value
    }

};
int students::count=0;//Initialising the value of count

int main(){
    students s1("Istiak"),s2("Ahmed"),s3("Mitul"),s4("Bob");
    cout<<"The total student number : "<<students::count;//printing the count using scope resulation operator



    return 0;
}