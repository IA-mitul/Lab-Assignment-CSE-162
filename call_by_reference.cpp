#include<bits/stdc++.h>
using namespace std;
void swap(int *x,int* y){//receving the address in a pointer
    int temp;
    //swaping the values
    temp=*x; 
    *x=*y;
    *y=temp;
}

int main(){
    int num1=1;
    int num2=2;
    swap(&num1,&num2);//passing the address
    //printing the values
    cout<<"first Number :"<<num1<<endl;
    cout<<"Second Number :"<<num2<<endl;


    return 0;
}