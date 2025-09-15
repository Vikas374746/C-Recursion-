#include <iostream>
using namespace std;

// Recursive function to print digits in reverse
void reverseNumber(int n) {
    if (n == 0)
        return;

    cout << n % 10;           // Print last digit
    reverseNumber(n / 10);    // Recursive call with remaining number
}

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    if (num < 0) {
        cout << "-";          // Handle negative numbers
        num = -num;
    }

    reverseNumber(num);
    cout << endl;

    return 0;
}
/*
Output:
Enter an integer: 2143
3412
*/
