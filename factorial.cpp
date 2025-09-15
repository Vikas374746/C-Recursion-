#include <iostream>
using namespace std;

int fact(int n) {
    if (n <= 1)
        return 1;               
    else
        return n * fact(n - 1); 
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;  

    cout << "Factorial of " << n << " = " << fact(n) << endl;
    return 0;
}

/*Output:
Enter a number: 6
Factorial of 6 = 720
*/
