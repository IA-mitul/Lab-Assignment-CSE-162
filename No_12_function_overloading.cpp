#include<bits/stdc++.h>
using namespace std;
int sum(int x,int y){//function one
    return x+y;
}
int sum(int x,int y,int z){//function two
    return x+y+z;
}
int main(){
    cout<<sum(2,3)<<endl;//function one will be called
    cout<<sum(2,3,6)<<endl;//function two will be called

    return 0;
}