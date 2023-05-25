#include <list>
#include "VariableValues.h"

using namespace std;

int main()
{
    VariableValues* myList = new VariableValues();

    myList->addDouble(3.0);
    myList->addDouble(2.222);

    cout << "List is: " << endl;
    for (auto i : myList->getList()) {
        cout << i << " ";
    }
    cout << "\n";

    cout << "\nThe sum is: " << endl;
    cout << myList->calculateSum() << endl;

    cout << "\nThe average is: " << endl;
    cout << myList->calculateAverage() << endl;

    myList->cleanList();

    cout << "List is: " << endl;
    for (auto i : myList->getList()) {
        cout << i << " ";
    }

    return 0;
}