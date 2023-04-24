void reverse (string & strr , int i , int j )
{
	if(i>j)
	return;
	swap(strr[i], strr[j]);
	i++;
	j--;
	reverse(strr, i, j);
}
string reverseString(string str)
{
	// Write your code here.
	 reverse(str, 0, str.length()-1);
   return str;
   


}
