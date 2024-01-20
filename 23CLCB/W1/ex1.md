### Ex1
### Question: What is short-circuit evaluation in C/C++? Give an example. How to apply it.
### Answer:
> MSSV: 23127023, Phan Nhựt Anh

Short-circuit evaluation là một khái niệm lập trình mà khi chương trình biên dịch nó sẽ bỏ qua một vài biểu thức con trong một biểu thức logic, bởi vì biểu thức logic đã được xác định mà không cần đánh giá tiếp. 
### Ví dụ: 
Trong biểu thức logic (1 or a) thì biểu thức này luôn đúng ( = 1).

### Cài đặt chương trình:

```
#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;

    cout << (a || 1);

    return 0;
}
```
Khi này chương trình trên sẽ luôn trả về 1 (true) dù a có bằng 0 (false) hay bất kì số nào.