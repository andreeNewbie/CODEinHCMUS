#include <iostream>
using namespace std;

// Hàm trả về số lượng phần tử của dãy con tăng dài nhất trong mảng a
int longestIncreasingSubsequence(int a[], int n) {
  // Mảng dp lưu độ dài của dãy con tăng dài nhất kết thúc tại a[i]
  int dp[n];
  // Khởi tạo giá trị ban đầu cho mảng dp
  for (int i = 0; i < n; i++) {
    dp[i] = 1;
  }
  // Duyệt qua các phần tử của mảng a
  for (int i = 1; i < n; i++) {
    // Duyệt qua các phần tử trước a[i]
    for (int j = 0; j < i; j++) {
      // Nếu a[j] < a[i] và dp[j] + 1 > dp[i] thì cập nhật dp[i]
      if (a[j] < a[i] && dp[j] + 1 > dp[i]) {
        dp[i] = dp[j] + 1;
      }
    }
  }
  // Tìm giá trị lớn nhất trong mảng dp
  int max = 0;
  for (int i = 0; i < n; i++) {
    if (dp[i] > max) {
      max = dp[i];
    }
  }
  // Trả về giá trị lớn nhất
  return max;
}

int main() {
  // Nhập số lượng phần tử trong mảng
  int n;
  cin >> n;
  // Khai báo mảng a
  int a[n];
  // Nhập các phần tử của mảng a
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  // Gọi hàm longestIncreasingSubsequence và in ra kết quả
  cout << longestIncreasingSubsequence(a, n) << endl;
  return 0;
}
