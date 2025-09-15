#include <iostream>
#include <string>
using namespace std;

void printReverse(string str, int index) {
    if (index < 0) return;   // Base case
    cout << str[index];
    printReverse(str, index - 1);
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    cout << "Reversed string: ";
    printReverse(str, str.length() - 1);
    cout << endl;

    return 0;
}

/*
Output:
Enter a string: hello world 
Reversed string:  dlrow olleh
*/
