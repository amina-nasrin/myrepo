#include<iostream>
using namespace std;

int main()
{
   int rows, i, j, space;

   cout << "Enter number of rows: ";
   cin >> rows;

   for(i = rows; i >= 1; i--)
   {
      //for loop to put space in pyramid
      for (space = i; space < rows; space++)
         cout << " ";

      //for loop to print star in pyramid
      for(j = 1; j <= 2 * i - 1; j++)
      {
         if(i == rows || j == 1 || j == 2*i - 1)
            cout << "*";
         else
            cout << " ";
      }
      cout << "\n";
   }
   return 0;
}