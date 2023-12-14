#include <iostream>
using namespace std;

void InHinhThoi(int n) {
    int sp = n - 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < sp; j++)
            cout << " ";
        for (int j = 0; j <= i; j++)
            cout << "* ";

        cout << "\n";
        sp--;
    }
    sp = 0;
    for (int i = n; i > 0; i--) {
        for (int j = 0; j < sp; j++)
            cout << " ";
        for (int j = 0; j < i; j++)
            cout << "* ";

        cout << "\n";
        sp++;
    }
}

int main() {
    int n;
    cout << "Nhap so dong: ";
    cin >> n;
    InHinhThoi(n);
    return 0;
}
