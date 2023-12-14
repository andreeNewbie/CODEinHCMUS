#include<iostream>
#include<iomanip>
#include<cstring>

using namespace std;

struct CourseGrade
{
    char name[100];
    int ID;
    double to, li, hoa, ta, nv;
    double everage;
    char grade;
};

char check(double score)
{
    if (score >= 9.0) return 'A';
    if (score >= 8.0) return 'B';
    if (score >= 7.0) return 'C';
    if (score >= 6.0) return 'D';
    return 'F';
}


int main()
{
    CourseGrade arrStu[100];
    
    int student;
    cout << "How many student are there? ";
    cin >> student;

    for (int i = 0; i < student; i++)
    {
        cout << "---o0o---\n";
        cout << "what student " << (i + 1) << "'s name? ";
        cin.ignore();
        cin.getline(arrStu[i].name, 100);

        cout << "Enter ID student " << (i + 1) << " : ";
        cin >> arrStu[i].ID;

        cout << "Math score: ";
        cin >>  arrStu[i].to;

        cout << "Physic score: ";
        cin >>  arrStu[i].li;

        cout << "Chemistry score: ";
        cin >>  arrStu[i].hoa;

        cout << "English score: ";
        cin >>  arrStu[i].ta;

        cout << "Litterature score: ";
        cin >>  arrStu[i].nv;

        arrStu[i].everage = (arrStu[i].to + arrStu[i].li + arrStu[i].hoa + arrStu[i].ta + arrStu[i].nv) / 5;
        arrStu[i].grade = check(arrStu[i].everage);
    }

    cout << setw(30) << setfill(' ') << right << "NAME" << setw(10) << setfill(' ') << "ID" << setw(10) << setfill(' ') << "EVERAGE" << setw(10) << setfill(' ') << "GRADE\n"; 
    for (int i = 0; i < student; i++)
    {
        cout<< setw(30) << setfill(' ') << right << arrStu[i].name;
        cout<< setw(10) << setfill(' ') << left << arrStu[i].ID;
        cout<< setw(10) << setfill(' ') << left << fixed << setprecision(2) << arrStu[i].everage;
        cout<< setw(5) << setfill(' ') << left << arrStu[i].grade << "\n"; 
    }
    //XUẤT RA TABLE CHO NÓ ĐẸP

    return 0;
}