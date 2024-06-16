#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream outfile ("my.txt", ios::trunc);
    outfile << "Joy" << endl;
    outfile << 23 << endl;
    outfile << "C++" << endl;
    outfile.close();
}