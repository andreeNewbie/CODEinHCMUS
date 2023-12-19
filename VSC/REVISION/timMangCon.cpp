#include <iostream>
using namespace std;

// Hàm đệ quy để tìm tất cả các mảng con của mảng a
void findSubarrays(int a[], int n, int start, int end, int sum, bool &found)
{
    // Nếu kết thúc vòng lặp, kiểm tra xem tổng có bằng 0 hay không
    if (end == n)
    {
        if (sum == 0)
        {
            // In ra mảng con có tổng bằng 0
            cout << "[";
            for (int i = start; i < end; i++)
            {
                cout << a[i] << " ";
            }
            cout << "]\n";
            // Đặt cờ found thành true để biết có tìm thấy mảng con nào hay không
            found = true;
        }
        return;
    }

    // Gọi đệ quy với hai trường hợp: bỏ qua phần tử hiện tại hoặc thêm nó vào tổng
    findSubarrays(a, n, start, end + 1, sum, found);
    findSubarrays(a, n, start, end + 1, sum + a[end], found);
}

// Hàm nhập mảng và gọi hàm tìm mảng con
void solve()
{
    int n; // Số phần tử của mảng
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;
    int a[n]; // Mảng a
    cout << "Nhap cac phan tu cua mang:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    bool found = false; // Cờ để kiểm tra xem có tìm thấy mảng con nào hay không
    cout << "Cac mang con co tong bang 0 la:\n";
    // Gọi hàm đệ quy với mỗi phần tử làm điểm bắt đầu
    for (int i = 0; i < n; i++)
    {
        findSubarrays(a, n, i, i, 0, found);
    }
    // Nếu không tìm thấy mảng con nào, in ra thông báo
    if (!found)
    {
        cout << "Khong co mang con nao co tong bang 0.\n";
    }
}

// Hàm chính
int main()
{
    solve();
    return 0;
}
