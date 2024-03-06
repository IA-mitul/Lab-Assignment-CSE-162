#include <bits/stdc++.h>
using namespace std;
void display(string name, int age = 22, string city = "Unknown")
{
    //printing the values
    cout << "Name : " << name << endl;
    cout<< "Age : " << age << endl;
    cout<< "City : " << city << endl;
}

int main()
{
    /* if we dont pass the parameter of age or city 
     the default parameter will be called */
    display("mitul");//passing only one argument
    display("Istiak", 21);//passing two argument
    display("mitul", 25, "Naogaon");//passing all the arguments

    return 0;
}