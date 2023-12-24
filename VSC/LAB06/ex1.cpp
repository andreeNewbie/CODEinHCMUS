#include<iostream>
#include<fstream>

using namespace std;

int copyFile(char input[], char output[])
{
    ifstream fin(input);
    if (fin.fail())
    {
        cout << "Khong the mo tep " << input << endl;
        return -1;
    }

    ofstream fout(output);
    if(fin.fail())
    {
        cout << "Khong the mo tep " << output << endl;
        return -1;
    }

    char content[100];

    while (fin.getline(content, 100))
        fout << content << endl;

    fin.close();
    fout.close();

    return 0;

}

// Hàm chuyển đổi nội dung của tệp sao cho mỗi dòng có 60 kí tự
int convertFile60CharsperLine(char input[], char output[])
{
    ifstream fin(input);
    fstream fout(output, ios::out);

    string line, temp = "";
    int count = 0;

    while (getline(fin, line) || temp != "") 
    {
        line = temp + line;
        if (count + line.length() < 3)
        {
            fout << line;
            count += line.length();
            temp = "";
        }
        else if(count + line.length() > 3)
        {
            fout << line.substr(0, (3 - count)) << endl;
            temp = line.substr(3 - count);
            if (temp.length() > 3)
            {
                count = 0;
                if (fin.eof()) 
                    line = "";
                continue;
            }
            else if (temp.length() == 3)
            {
                fout << temp << endl;
                count = 0;
                temp = "";
            }
            else 
            {
                fout << temp;
                count = temp.length();
                temp = "";
            }
        }
        else
        {
            fout << line << endl;
            count = 0;
        }
    }

    fin.close();
    fout.close();
}


int main()
{
    const int MAX = 100;

    char a[MAX] = "input.txt";
    char b[MAX] = "output.txt";

    // int result = copyFile(a, b);

    // if (result == 0) cout << "Da chep file thanh cong.";
    // if (result == -1) cout << "Sao chep file that bai.";
    
    int check = convertFile60CharsperLine(a, b);
    return 0;
}