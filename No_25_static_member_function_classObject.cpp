#include<bits/stdc++.h>
using namespace std;
class mathOperation{

    public:
        static int add(int a,int b){//static function the return the sum of two number
            return a+b;
        }
        static int multiply(int a,int b){//static function the return the multiplicatiion of two number
            return a*b;
        }


};

int main(){
    cout<<"Result for addition : "<<mathOperation::add(5,8)<<endl;////printing the sdd using scope resulation operator
    cout<<"Result for multiplication : "<<mathOperation::multiply(3,7);//printing the multiply using scope resulation operator


    return 0;
}