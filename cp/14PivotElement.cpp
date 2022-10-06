#include<iostream>
using namespace std;

int main()
{
int arr[] = {5,10,30,200,1};
  
  int n = sizeof(arr)/sizeof(arr[0]);
  
 

   
    int s = 0;
    int e = n -1;
    int pivot;
    int mid = s+(e-s)/2;
   
    while(s<e)
    {
       
        if(arr[0]<=arr[mid])
        {
            s = mid + 1;
            pivot = s;
        }
        else 
        {
            e = mid;
        }
        mid = s + (e-s)/2;
    }
 cout<<pivot;
    return 0;
}