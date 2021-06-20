#include <iostream>
#include <iomanip>
#include  <cmath>

using std::cout;
using std::endl;
using std::setw;
using std::left;
using std::setprecision;
using std::fixed;

const int COLUMN_1 = 15;
const int COLUMN_2 = 15;
const int COLUMN_3 = 10;
const int COLUMN_4= 12;

int main()
{
  float Cost, Quanity;

  cout << "Pauls shop\n" << endl;

  cout << left << setw(COLUMN_1) << "Description" 
       << setw(COLUMN_2) << "Cost Per unit" 
       << setw(COLUMN_3) << "Quanity" 
       << setw(COLUMN_4) << "Total Cost\n" <<endl;

  cout << setw(COLUMN_1) << "Joist" 
       << setw(COLUMN_2) << fixed << setprecision(2) << 75.99f 
       << setw(COLUMN_3) << 25 
       << setw(COLUMN_4) << fixed << setprecision(2) << (75.99 * 25) <<endl;

  cout << setw(COLUMN_1) << "2X6" 
       << setw(COLUMN_2) << fixed << setprecision(2) << 8.90f 
       << setw(COLUMN_3) << 100 
       << setw(COLUMN_4) << fixed << setprecision(2) << (8.90 * 100) <<endl;

  cout << setw(COLUMN_1) << "2x4" 
       << setw(COLUMN_2) << fixed << setprecision(2) << 4.95f 
       << setw(COLUMN_3) << 25 
       << setw(COLUMN_4) << fixed << setprecision(2) << (4.95 * 25) <<endl;

  cout << setw(COLUMN_1) << "4x4" 
       << setw(COLUMN_2) << fixed << setprecision(2) << 12.95f 
       << setw(COLUMN_3) << 20 
       << setw(COLUMN_4) << fixed << setprecision(2) << (12.95 * 20) <<endl;
           
  cout << setw(COLUMN_1) << "4x8 Plywood" 
       << setw(COLUMN_2) << fixed << setprecision(2) << 22.00f 
       << setw(COLUMN_3) << 100
       << setw(COLUMN_4) << fixed << setprecision(2) << (22.00 * 100) <<endl; 

  cout << "\nGrand total to build a shop is $" << (1899.75+890+123.75+259+2200);     
}