#include <bits/stdc++.h>
using namespace std;

class numbers {
private:
    int num1;
    int num2;
    int max_value; 
public:
    friend int findmax(int num1, int num2);  // friend function declaration
    numbers(int num1, int num2);
    void display() {
        cout << "The maximum is : " << max_value;
    }
};

int findmax(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

// Define the constructor after the friend function declaration
numbers::numbers(int num1, int num2) {
    this->num1 = num1;
    this->num2 = num2;
    max_value = findmax(num1, num2);
}

int main() {
    numbers n(9, 3);
    n.display();

    return 0;
}
