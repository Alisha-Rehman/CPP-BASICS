#include <iostream>
using namespace std;

// Function to calculate square of a number
int square(int x) {
    return x * x;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int result = square(num);
    cout << "Square of " << num << " = " << result << endl;

    return 0;
}
