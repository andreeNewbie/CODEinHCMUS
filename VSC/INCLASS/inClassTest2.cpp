#include <iostream>
#include<fstream>

using namespace std;

bool check(int a[], int index, int x)
{
   for (int i = 0; i <= index; i++)
   {
      if(a[i] == x)
         return false;
   }
   return true;
}

void inputArray(int arr2d[][20], int &m, int &n) 
{
    ifstream fin("text.txt");
    fin >> m >> n;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            fin >> arr2d[i][j];
}

void printOccurrences(int arr2d[][20], int m, int n) 
{
   int distinc[100];
   int index = 0;
   for (int i = 0; i < m; i++)
      for (int j = 0; j < n; j++)
      {
         int x = arr2d[i][j];
         if(check(distinc, index, x))
            distinc[index++] = arr2d[i][j];
      }

   for (int i = 0; i < index; i++)
   { 
      int dem = 0;
      for (int x = 0; x < m; x++)
         for (int y = 0; y < n; y++)
         {  
            if(distinc[i] == arr2d[x][y])
               dem++;
         }
      cout << distinc[i] << " : " << dem << " times\n" ;
   }
}

int removeNegativeSegments(int integerArray[], int &numberElements, int lowerBound)
{
    int index = 0;
    while (index < numberElements)  
    {
        int count = 0;
        int sum = 0;

        int i = index;
        if(integerArray[i] < 0)
        {
            while (integerArray[i] < 0)
            {
                sum += integerArray[i++];
                count++;
            }

            if (sum < lowerBound)
            {
                for (int j = index; j < (numberElements - count); j++)
                    integerArray[j] = integerArray[j + count];
                numberElements -= count;
            }
            else
            index += count;
        }
        else 
        {
            while (integerArray[i] > 0)
            {
                sum += integerArray[i++];
                count++;
            }

            if (sum < lowerBound)
            {
                for (int j = index; j < (numberElements - count); j++)
                    integerArray[j] = integerArray[j + count];
                numberElements -= count;
            }
            else
                index += count;
        }
    }
    return numberElements;
}

int main() 
{
   //Bai 01
   int a2d[10][20];
   int mRow, nCol;
   inputArray(a2d, mRow, nCol);
   printOccurrences(a2d, mRow, nCol);

   // Bai 02
//    int a[100] = {1, -2, -1, 5, 6, -3, -4, 1, -2, -4, -6, 7, 8};
//    int n = 13, lowerBound = 10;
//    cout << removeNegativeSegments(a, n, lowerBound) << endl;

//    int k = removeNegativeSegments(a, n, lowerBound);
//    for (int i = 0; i < k; i++)
//     cout << a[i] << " ";

   return 0;
}