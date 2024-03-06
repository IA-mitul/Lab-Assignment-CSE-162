#include <bits/stdc++.h>
using namespace std;
class CGPA
{
public:
    float *credit_GPA;//This array stores the multiplication of the subject credit and gpa
    int numOfSubj;//Number of subjects
    int total_credit; //it stores the total of all subject credits

    void operation(){//calculating and printing the cgpa
        float sum=0;
        for(int i=0;i<numOfSubj;i++){
            sum+=credit_GPA[i];
        }
        cout<<"The CGPA : "<<sum/total_credit;

    }
    ~CGPA(){
        delete credit_GPA;
    }
};

int main()
{
    CGPA cg;
    cout << "Enter the number of subjects : ";
    cin >> cg.numOfSubj;
    cg.credit_GPA = new float[cg.numOfSubj];
    int totalNOcredit = 0;
    for (int i = 0; i < cg.numOfSubj; i++)
    {
        int credit;
        cout << "Enter the subject credit : ";
        cin >> credit;
        totalNOcredit += credit;
        float grade;
        cout << "Enter the subject grade : ";
        cin >> grade;
        cg.credit_GPA[i] = credit * grade;
    }
    cg.total_credit=totalNOcredit;//initialising the total cradit value
    cg.operation();

    return 0;
}