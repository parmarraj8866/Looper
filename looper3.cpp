
#include <iostream>
using namespace std;

int main() {
    int number, count = 0;

    cout << "Enter number: ";
    cin >> number;

    if (number == 0) {
        count = 1; 
    } else {
        do {
            number /= 10;
            count++; 
        } while (number != 0);
    }

    cout<< "Total digits: " <<count<<endl;

    return 0;
}
