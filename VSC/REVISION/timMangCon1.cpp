#include <iostream>
using namespace std;

// Hàm để tính tổng các phần tử được chọn trong mảng a
int sum(int a[], int b[], int n) {
    int s = 0;
    for (int i = 0; i < n; i++) {
        if (b[i] == 1) {
            s += a[i];
        }
    }
    return s;
}

// Hàm để xuất ra mảng con có tổng bằng không
void print(int a[], int b[], int n) {
    cout << "[";
    for (int i = 0; i < n; i++) {
        if (b[i] == 1) {
            cout << a[i] << " ";
        }
    }
    cout << "]" << endl;
}

// Hàm đệ quy để tìm tất cả các mảng con có tổng bằng không
void find(int a[], int b[], int i, int n) {
    // Nếu duyệt hết mảng a
    if (i == n) {
        // Nếu tổng các phần tử được chọn bằng không
        if (sum(a, b, n) == 0) {
            // Xuất ra mảng con
            print(a, b, n);
        }
        return;
    }
    // Không chọn phần tử a[i]
    b[i] = 0;
    // Gọi đệ quy cho phần tử tiếp theo
    find(a, b, i + 1, n);
    // Chọn phần tử a[i]
    b[i] = 1;
    // Gọi đệ quy cho phần tử tiếp theo
    find(a, b, i + 1, n);
}

// Hàm chính để nhập và xuất dữ liệu
int main() {
    // Nhập số phần tử của mảng a
    int n = 9;
    // Khai báo mảng a và mảng phụ b
    int b[n];
    // Nhập các phần tử của mảng a
    int a[] = {1, 2, 3, 4, 5, 0, -7, -8 , -9};
    // Tìm và xuất ra tất cả các mảng con có tổng bằng không
    cout << "Cac mang con co tong bang 0 la: " << endl;
    find(a, b, 0, n);
    return 0;
}
