#include <iostream>

using namespace std;

int main() {

    const int MAX = 100;

    int matrix[MAX][MAX], rows, cols, x;
    bool row[MAX] = {false}, col[MAX] = {false};

    cout << "Nhap so hang: ";
    cin >> rows;
    cout << "Nhap so cot: ";
    cin >> cols;
    cout << "Nhap phan tu x: ";
    cin >> x;

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> matrix[i][j];
            if (matrix[i][j] == x) {
                row[i] = true;
                col[j] = true;
            }
        }
    }

    cout << "Mang sau khi xoa cac hang va cot chua phan tu " << x << ":\n";
    for (int i = 0; i < rows; ++i) {
        if (!row[i]) {
            for (int j = 0; j < cols; ++j) {
                if (!col[j]) {
                    cout << matrix[i][j] << " ";
                }
            }
            cout << "\n";
        }
    }

    return 0;
}
