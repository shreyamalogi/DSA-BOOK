//author :shreyamalogi

//string palindrome

#include<bits/stdc++.h>

using namespace std;


int main()
{
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int n = s.length();
		
		bool palindrome = true;
		for(int i=0;i<n/2;i++)
			{
				if(s[i]!=s[n-i-1]){
					palindrome = false;
					break;
				}

			}
			
		if(!palindrome) cout<< "not ";
		cout<<"palindrome"<<endl;	
		}
				

     return 0;
}


//2
//abba
//palindrome
//hi
//not palindrome
