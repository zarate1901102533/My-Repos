#include <iostream>
using namespace std;

int main() {
    float num1, num2, num3;

    cout << "Enter Three Numbers:\n";
    cin >> num1 >> num2 >> num3;
    if(num1 >= num2 && num1 >= num3)
        cout << "Largest Number: " << num1;
    if(num2 >= num1 && num2 >= num3)
        cout << "Largest Number: " << num2;
    if(num3 >= num1 && num3 >= num2)
        cout << "\n\nLargest Number: " << num3;

    cout << "\n\nProgrammed by: ZARATE, MARY KAYE H.\n\n";

    return 0;
}
