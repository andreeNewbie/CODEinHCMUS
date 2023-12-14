#include <iostream>
#include <string>
using namespace std;

// Hàm để in ra code của chính nó
void printSource(char input[]) {
    // Tạo một chuỗi chứa code của hàm
    string code = "#include <iostream>\n#include <string>\nusing namespace std;\n\n// Hàm để in ra code của chính nó\nvoid printSource(char input[]) {\n    // Tạo một chuỗi chứa code của hàm\n    string code = \"\";\n    // Thêm dấu nháy đơn vào đầu và cuối chuỗi\n    code = '\\\"' + code + '\\\"';\n    // Thay thế tất cả các dấu nháy đơn trong chuỗi bằng dấu nháy đơn và dấu gạch chéo ngược\n    for (int i = 0; i < code.length(); i++) {\n        if (code[i] == '\\\"') {\n            code.insert(i, \"\\\\\");\n            i++;\n        }\n    }\n    // In ra màn hình chuỗi code\n    cout << code << endl;\n}\n\nint main() {\n    // Gọi hàm printSource với tham số là một chuỗi bất kỳ\n    printSource(\"Hello, world!\");\n    return 0;\n}";
    // Thêm dấu nháy đơn vào đầu và cuối chuỗi
    code = '\"' + code + '\"';
    // Thay thế tất cả các dấu nháy đơn trong chuỗi bằng dấu nháy đơn và dấu gạch chéo ngược
    for (int i = 0; i < code.length(); i++) {
        if (code[i] == '\"') {
            code.insert(i, "\\");
            i++;
        }
    }
    // In ra màn hình chuỗi code
    cout << code << endl;
}

int main() {
    // Gọi hàm printSource với tham số là một chuỗi bất kỳ
    printSource("Hello, world!");
    return 0;
}
