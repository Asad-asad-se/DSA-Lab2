#include <iostream>
using namespace std;

void analyze_pointer(int* ptr) {
    cout << "Address: " << ptr << endl;
    cout << "Value: " << *ptr << endl;
}

int main() {
    int iValue = 42;
    cout << "Stack int:" << endl;
    analyze_pointer(&iValue);

    int* hValue = new int;
    *hValue = 99;
    cout << "Heap int:" << endl;
    analyze_pointer(hValue);

    delete hValue;
    return 0;
}