  #include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


const int ROWS = 4;
const int COLS = 4;
int showArray (int[ROWS][COLS]);

int main()
{
    
    int table1;
    table1 = showArray(int [ROWS][COLS]);
    cout << table1;

    return 0;
}

int showArray( int[ROWS][COLS])
{
    int x = 0;
    int y = 0;

    int userInput;
    int array[ROWS][COLS];
    for (int y =0; y<ROWS; y++)
    {
        for (int x =0; x<COLS; x++)
        {
            cout << "Enter Row of Data";
            cin >> userInput;
            array[x][y]= userInput;
        }
    }
 
    return array[x][y];
}