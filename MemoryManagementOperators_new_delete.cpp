#include<bits/stdc++.h>
using namespace std;
int main(){
    int *arr,n;//Dynamic memory allocation.
    cout<<"Enter the limit : ";
    cin>>n;
    arr = new int[n];//creating the array in heap using new operator
    for (int i=0;i<n;i++){
        cout<<"Enter the elements : ";
        cin>>arr[i];
    }
    cout<<"The elements are : ";
    for (int i=0;i<n;i++){
        cout<<arr[i]<<"--";
        
    }
    delete arr;//Deleting the array using delete operator


    return 0;
}