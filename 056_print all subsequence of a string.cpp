//author :shreyamalogi
//subsequences is 2 power n
//i need a variable total for 2 power n
//need 2 for loops: 
//i&(1<<j) if this value is non zero to print character

//we can also use recursion though

#include<bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	cin>>s;
	
	int n=s.length();
	int total = 1<<n; 			// 2 power n
	for(int i=1;i<total;i++){
		for(int j=0;j<n;j++){		//2nd for loop scan through the string
			if(i&(1<<j))
				cout<<s[j];		//s[j] is the characeter
		}
		cout<<endl;
	}
     return 0;
}


//abc

//a
//b
//ab
//c
//ac
//bc
//abc
