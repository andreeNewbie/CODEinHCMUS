#include <iostream>

using namespace std;

bool check(int a[], int index, int x)
{
   for (int i = 0; i < index; i++)
   {
      if(a[i] == x)
         return false;
   }
   return true;
}

void inputArray(int arr2d[][20], int &m, int &n) 
{
   cout << "Hay nhap vao so dong m va so cot n cua mang 2 chieu: \n";
   cin >> m >> n;

   for (int i = 0; i < m; i++)
      for (int j = 0; j < n; j++)
         cin >> arr2d[i][j];
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
      cout << distinc[i] << "\t";
      int dem = 0;
      for (int x = 0; x < m; x++)
         for (int y = 0; y < n; y++)
         {  
            if(distinc[i] == arr2d[x][y])
               dem++;
         }
      cout << distinc[i] << " : " << dem << " times";
   }
}

int removeNegativeSegments(int integerArray[], int numberElements, int lowerBound) 
{
}

int main() 
{
   // Bai 01
   int a2d[10][20];
   int mRow, nCol;
   inputArray(a2d, mRow, nCol);
   printOccurrences(a2d, mRow, nCol);

   // Bai 02
   int a[100] = {1, -2, -1, 5, 6, -3, -4, 1, -2};
   int n = 9, lowerBound = -3;
   cout << "\n" << removeNegativeSegments(a, n, lowerBound);
   return 0;
}