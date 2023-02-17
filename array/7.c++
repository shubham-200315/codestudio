#include <bits/stdc++.h> 
bool checkPalindrome(string s)
{
    // Write your code here.
    int st =0;
    int e = s.size()-1;
    while(st<=e)
    {
        if(s[st]!=s[e])
        {
            return "No";
           
        }
        else{
          st++;
          e--;
        }

    }
    return "Yes";
}
