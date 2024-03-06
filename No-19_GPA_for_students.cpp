#include<bits/stdc++.h>
using namespace std;
class grade{
    public:
        float *a; //creating an abstruct data type array
        int subjects;

        void display(){ //calculating the GPA and printing it
            float sum=0;
            for (int i=0;i<subjects;i++){
                
                sum+=a[i];
            }
            cout<<"The GPA is : "<<sum/subjects;
        }

    ~grade(){ //Delete the array using a distructor 
        delete a;
    }




};


int main(){

    grade gd;
    cout<<"Enter the count of subjects : ";
    cin >> gd.subjects;
    gd.a = new float[gd.subjects];
    for (int i = 0; i < gd.subjects; i++)
    { //taking the input for every subjects grade
        cout<<"Enter the GPA of the "<<i+1<<"th subject : ";
        cin >> gd.a[i];
    }
    gd.display();


    return 0;
}