#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int n;
    cout << "Max string length: ";
    cin >> n;
    cin.ignore();

    char* s = new char[n + 1];
    cout << "Enter string: ";
    cin.getline(s, n + 1);

    int len = strlen(s);
    for (int i = 0, j = len - 1; i < j; i++, j--) {
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }

    cout << "Reversed: " << s << endl;
    delete[] s;
    return 0;
}