#include <iostream>
using namespace std;

int sumup(int n) {
    if (n <= 1)
        return 1;               // Base case
    else
        return n + sumup(n - 1); // Recursive case
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Sum of first " << n << " integers = " << sumup(n) << endl;
    return 0;
}

/*
Output:
Enter a number: 21
Sum of first 21 integers = 231
*/
