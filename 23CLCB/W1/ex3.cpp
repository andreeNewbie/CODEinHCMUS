#include <iostream>

using namespace std;

bool checkLeapYear(int year)
{
    if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0)
        return true;
    else    
        return false;
}

void tomorrow(int &day, int &month, int &year)
{
    if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10)
    {
        if (day ==  31)
        {
            day = 1;
            month++;
        }
        else
            day++;
    }
    else if (month == 2)
    {
        if (checkLeapYear(year))
        {
            if (day == 29)
            {
                day = 1;
                month ++;
            }
            else 
                day++;
            
        }
        else
        {
            if (day == 28)
            {
                day = 1;
                month++;
            }
            else 
                day++;
        }
    }
    else if (month == 12)
    {
        if (day == 31)
        {
            day = 1;
            month = 1;
            year++;
        }
        else 
            day++;
    }
    else
    {
        if (day == 30)
        {
            day = 1;
            month++;
        }
        else    
            day++;
    }
}

int main()
{
    int day, month, year;

    cin >> day >> month >> year;

    tomorrow(day, month, year);

    cout << day << " " << month << " " << year;

    return 0;
}