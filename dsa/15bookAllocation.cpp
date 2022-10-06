#include <iostream>
#include<vector>
using namespace std;

bool isPossible(vector<int>arr, int n, int m, int mid)
{
    int studentCount = 1;
    int PageSum = 0;

    for (int i = 0; i < n; i++)
    {
        if (PageSum + arr[i] <= mid)
        {

            PageSum += arr[i];
        }
        else
        {
            studentCount++;
            if (studentCount > m || arr[i] > mid)
            {

                return false;
            }
          PageSum = arr[i];
        }
    }
    return true;
}

int main()
{
    vector<int> arr;
    int n,m;
    cin>>n>>m;
   for(int i =0;i<n;i++)
   {
    int x ;
    cin>>x; 
    arr.push_back(x);
   }
    // for(auto i: arr)
    // cout<<i<<" ";
    
    int s = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int e = sum;
    int ans = -1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (isPossible(arr,n,m,mid))
        {
            ans = mid;
            e = mid -1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    cout<<ans;
    return 0;
}