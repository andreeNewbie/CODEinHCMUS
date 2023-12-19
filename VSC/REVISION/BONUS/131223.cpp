#include<iostream>
#include<string>
#include<cstring>

using namespace std;

string divideTwoWords(string twoWords, string &w1, string &w2)
{
    int pos;

    for (int i = 0; i < twoWords.length(); i++)
        if(twoWords[i] == ' '){
            pos = i;
            break;
        }
    
    w1 = twoWords.substr(0, pos);
    w2 = twoWords.substr(pos + 1);

    return "finished";
}

int checkNguyenAm(string x)
{
    
    char nguyenAm[] = {'a', 'o', 'e', 'u' , 'i', 'y', 'A', 'O', 'E', 'U', 'Y', 'I'};


    for (int i = 0; i < x.length(); i++)
    {
        char a = x[i];
        for (int j = 0; j < 12; j++)
            if (a == nguyenAm[j]) return i;
    }

    return 0;
}

string makeSpoonerism(string twoWords)
{
    string w1, w2;

    divideTwoWords(twoWords, w1, w2);
    
    cout << w1  << endl << w2 << endl;

    string changedWord1 = w1.substr(0, checkNguyenAm(w1)) + w2.substr(checkNguyenAm(w2));
    string changedWord2 = w2.substr(0, checkNguyenAm(w2)) + w1.substr(checkNguyenAm(w1));

    cout << checkNguyenAm(w1) + 1 << endl << checkNguyenAm(w2) + 1 << endl;

    return changedWord1 + ' ' + changedWord2;
}

int main()
{
    string a;

    getline(cin, a);

    cout << makeSpoonerism(a);

    return 0;  
}   