#include <bits/stdc++.h> 
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
  vector<int> ans;
    //Write your code here
   for(int col =0; col<mCols; col++)
   {
       if(col&1)
       {
           //odd index 

           for(int row = nRows-1; row>=0; row-- )
           {
             //cout<<arr[row][col]<<" ";
             ans.push_back(arr[row][col]);
           }
       }
       else
       {
           //even index
           for(int row = 0; row<nRows; row++ )
           {
           //  cout<<arr[row][col]<<" ";
             ans.push_back(arr[row][col]);
           }
       }
   }
   return ans;

}
