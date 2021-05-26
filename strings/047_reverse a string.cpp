//author :shreyamalogi

//  to reverse a string

#include <bits/stdc++.h>
using namespace std;
 
void reverseString(string& s)
{
    int n = s.length();
 
    // Swap character starting from two
    // corners using 2 pointer approach
    for (int i=0, j=n-1; i<j; i++,j--)
        swap(s[i], s[j]); 
}

int main()
{
    //string s = "hello";
	string s;
	cin>>s;
    reverseString(s);
    cout << s;
    return 0;
}

//olleh


//stl
//reverse(s.begin(),s.end());
//for(int i=0;i<s.size();i++)
//	cout<<s[i]<<" ";
