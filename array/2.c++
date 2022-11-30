#include <bits/stdc++.h> 

int firstoccr(vector<int>arr , int n , int k)
{
    int s=0; 
    int e = n-1;
     int m = s+  (e-s)/2;
    int ans = -1;
    while(s<=e)
    {
        if(arr[m]==k)
        {
         ans = m;
         e= m-1;
        }
        else
            if(arr[m]<k)
            {
                s = m+1;
            }
        else if(k<arr[m])
        {
            e = m-1;
        }
        m = s+  (e-s)/2;
    }
    return ans;
}
int lastoccr(vector<int>arr , int n , int k)
{
    int s=0; 
    int e = n-1;
    int m = (s+e)/2;
    int ans = -1;
    while(s<=e)
    {
        if(arr[m]==k)
        {
         ans = m;
         s= m+1;
        }
        else
            if(arr[m]<k)
            {
                s = m+1;
            }
        else if(k<arr[m])
        {
            e = m-1;
        }
         m = s+  (e-s)/2;
    }
    return ans;
}

pair< int, int > firstAndLastPosition(vector<int>& arr, int n, int k)
{
       pair<int,int> p;
       p.first = firstoccr(arr, n, k);
       p.second = lastoccr(arr, n, k);
       return p;
   //Write your code here
       
}
