 //swapped = false;
//      for (j = 0; j < n-i-1; j++)
//      {
//         if (arr[j] > arr[j+1])
//         {
//            swap(arr[j], arr[j+1]);
//            swapped = true;
//         }
//      }
  
//      // IF no two elements were swapped 
//      // by inner loop, then break
//      if (swapped == false)
//         break;
//    }
// }
  
// // Function to print an array 
// void printArray(int arr[], int size)
// {
//     int i;
//     for (i = 0; i < size; i++)
//         cout << arr[i]<<endl;
// }
  

// int main()
// {
//     int n ;
//     // cin>>n;
//     // while(n--)
//     // {
//      int N;
    
//     cin>>N;
//     int arr[N];
//     for(int i = 0;i<N;i++)
//     {
//         cin>>arr[i];
//     }
//     bubbleSort(arr, N);
//     cout <<"Sorted array: \n";
//     printArray(arr, N);
    
    
//     // }

//     return 0;

// }

// #include<iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int i =0, min;
//     int n;
//     cin>>n;
//     int arr[n];
//     for(i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     min=arr[0];
//     for(i=1;i<n;i++)
//     {
//         if(min>arr[i])
//         {
//             min=arr[i];
//         }
//     }
//     cout<<min<<endl;
//     return 0;
// }

#include<iostream>
#include <bits/stdc++.h>
using namespace std;



int main()
{
    int target,n;
    cin>>target>>n;
    int count =0;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if((arr[i]+arr[j])==target){
                count++;
            }
        }
        
    }
    cout<<count;
    


    
}// #include<iostream>
// #include <bits/stdc++.h>
// using namespace std;
  
// // An optimized version of Bubble Sort
// void bubbleSort(int arr[], int n)
// {
//    int i, j;
//    bool swapped;
//    for (i = 0; i < n-1; i++)
//    {