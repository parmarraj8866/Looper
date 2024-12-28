#include <iostream>
using namespace std;

int main() {
    int num, First, Last;

    cout << "Enter a number: ";
    cin >> num;

    Last= num % 10;
    First = num;  
    while (First >= 10) {
        First /= 10;
    }

    int sum = First + Last;
    cout << "Sum of First and Last Digit is: " << sum << endl;

    return 0;
}
