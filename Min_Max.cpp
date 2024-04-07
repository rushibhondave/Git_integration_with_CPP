#include <iostream>
using namespace std;

int main ()
{

int i;
int a[5]={11,25,3,6,8};
int max = a[0];
int min = a[0];

  for (i = 0; i <5; i++)
    {

      if (a[i] > max)
        {
          max = a[i];
           
        }
      else if (a[i] < min)
        {
          min = a[i];
        }
    }
   
   cout <<"min ::" <<min << endl;  
  cout <<"Max ::" <<max << endl;

  return 0;
}