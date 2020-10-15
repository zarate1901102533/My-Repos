//B. Create a simple cashier program.
#include <iostream>
using namespace std;

int main(){
    int product, c, x;

        cout << "\t\tSWEET DESSERT M.C\n\n"<<endl;
        cout << "\tCAKE AND PASTRIES\t||\tPrice"<< endl;
        cout << "                            "<< endl;
        cout << "1\tMinimalist Cake \t\tphp475   "<< endl;
        cout << "2\tNaked Fruit Cake \t\tphp599   "<< endl;
        cout << "3\tCustomized Cake \t\tphp799  "<< endl;
        cout << "4\tChocomoist Cupcake \t\tphp149  "<< endl;
        cout << "                             "<< endl;
        cout << "-----------------------------------------------\n\n";
        cout << endl<< "Enter Number: ";
        cin >> c;

        switch (c){
            case 1:
            cout << "\nEnter Payment: ";
            cin >> x;
            if (x>=475){
                product=x-475;
                cout << "\nChange: php"<<product<<endl;
            }
            else
                cout << "\nInvalid Payment"<<endl;
                break;
            case 2:
            cout << "\nEnter Payment: ";
            cin >> x;
            if (x>=599){
                product=x-599;
                cout << "\nChange: php"<<product<<endl;
            }
            else
                cout << "\nInvalid Payment"<<endl;
                break;
            case 3:
            cout << "\nEnter Payment: ";
            cin >> x;
            if (x>=799){
                product=x-799;
                cout << "\nChange: php"<<product<<endl;
            }
            else
                cout << "\nInvalid Payment"<<endl;
                break;
            case 4:
            cout << "\nEnter Payment: ";
            cin >> x;
            if (x>=149){
                product=x-149;
                cout << "\nChange: php"<<product<<endl;
            }
            else
                cout << "\nInvalid Payment"<<endl;
                break;
            }
       cout << "\n\nProgrammed by: ZARATE, MARY KAYE H.\n\n";

    return 0;
}
