#include<iostream>
#include<string>
#include<cstring>

using namespace std;

struct Van
{ 
    string tu;
    string van;
};

struct Words
{
    string sentence;
    Van nearLast;
    Van last;
 
};

int nguyenAm(string x)
{
    char * a = new char [x.length() + 1];
    strcpy (a, x.c_str());
    char key[] = "aoeuiyAOEUIY";
    int pos = strcspn(a, key);
    return pos; 
}

int findLongestSingleRhyme(string sentences[], int n)
{
    Words cau[n];

    for (int i = 0; i < n; i++)
    {
        cau[i].sentence = sentences[i];
        //cout << cau[i].sentence << endl;

        int found = sentences[i].rfind(' ');
        cau[i].last.tu = sentences[i].substr(found + 1);
        //cout << cau[i].last.tu << endl;

        cau[i].last.van = cau[i].last.tu.substr(nguyenAm(cau[i].last.tu));
        //cout << cau[i].last.van << endl;
    }

    int longest = 0;
    int count = 1;
    int i = 0;

    while(i < n)
    {
        if (cau[i].last.van == cau[i + 1].last.van){
            count++;
            i++;
        }
        else
        {
            count = 1;
            i++;
        }

        if (count > longest)
            longest = count;
    }

    return longest;
}

int findLongestDoubleRhyme(string sentences[], int n)
{
    Words cau[n];
    for (int i = 0; i < n; i++)
    {
        cau[i].sentence = sentences[i];
        //cout << cau[i].sentence << endl;

        int found = sentences[i].rfind(' ');
        cau[i].last.tu = sentences[i].substr(found + 1);
        //cout << cau[i].last.tu << endl;
        cau[i].last.van = cau[i].last.tu.substr(nguyenAm(cau[i].last.tu));
        //cout << cau[i].last.van << endl;

        sentences[i].erase(found);
        found = sentences[i].rfind(' ');
        cau[i].nearLast.tu = sentences[i].substr(found + 1);
        //cout << cau[i].nearLast.tu << endl;
        cau[i].nearLast.van = cau[i].nearLast.tu.substr(nguyenAm(cau[i].nearLast.tu));
        //cout << cau[i].nearLast.van << endl;
    }

    int longest = 0;
    int count = 1;
    int i = 0;
    while(i < n)
    {
        if (cau[i].last.van == cau[i + 1].last.van && cau[i].nearLast.van == cau[i + 1].nearLast.van){
            count++;
            i++;
        }
        else
        {
            count = 1;
            i++;
        }

        if (count > longest)
            longest = count;
    }

    return longest;
}

int main()
{
    int n = 6;
    string sentences[] = {"Minh suong hon nhung nguoi giau nhi", "Vang tran minh chua he nhau nhi", "Du chenh venh nhu la cau khi",
                        "Doi song gio minh la tau thuy", "Vi mot ngay con song la mot ngay dam say", "Ngay dep troi nhat la ngay minh con nam tay"};

    int a = findLongestSingleRhyme(sentences, n);
    int b = findLongestDoubleRhyme(sentences, n); 

    cout << "So cau co van don hoan hao la: " <<  a << endl;
    cout << "So cau co van doi hoan hao la: " << b;

    return 0;
}