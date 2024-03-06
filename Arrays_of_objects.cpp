#include <bits/stdc++.h>
using namespace std;
// representation of array
class Array
{
public:
    int *a;
    int size;
    int length;
};
// displaying the array
void display(Array arr)
{
    cout << "The elements are : ";
    for (int i = 0; i < arr.length; i++)
    {
        cout << arr.a[i] << "_";
    }
    cout << endl;
}
int main()
{
    Array arr;
    cout<<"Enter the array size : ";
    cin >> arr.size;
    arr.a = new int[arr.size];
    
    cout<<"Enter the array length : ";
    cin >> arr.length;
    for (int i = 0; i < arr.length; i++)
    {
        cout<<"Enter "<<i+1<<"th element : ";
        cin >> arr.a[i];
    }
    display(arr);

    return 0;

}