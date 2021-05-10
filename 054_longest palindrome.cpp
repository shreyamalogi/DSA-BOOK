//author :shreyamalogi

//longest palindrome in a string

#include<bits/stdc++.h>

using namespace std;

string pal(string s, int l, int r)
{
	if(s=="" || l>r)
		return "";
		
	while(l>=0 && r<s.length() && s[l]==s[r])
	{
		l--;
		r++;
	}
	return s.substr(l+1,r-1-1);
}

int main()
{
	int tt;
	cin>>tt;
	while(tt--)
	{
		string s;
		cin>>s;
		
		int n=s.length();
		
		//check for odd length and even length palindromes
		//and take the longest outta them
		//pal func will check for the palindrome around the center
		
		string longest = s.substr(0,1);
		for(int i=0;i<n-1;i++)
		{
			string p1 = pal(s,i,i);
			if(p1.length()>longest.length())
				longest = p1;
				
				string p2 = pal(s,i,i+1);
			if(p2.length()>longest.length())
				longest = p2;
		}
		cout<<longest<<endl;
	}
     return 0;
}

//2
//aaaabbaa
//aaaabbaa
//abc
//abc


//Input:
//S = "aaaabbaa"
//Output: aabbaa
//Explanation: The longest Palindromic
//substring is "aabbaa".

