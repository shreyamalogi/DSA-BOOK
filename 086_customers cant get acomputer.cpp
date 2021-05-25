//author :shreyamalogi

/*

Function to find Number of customers who could not get a computer
o(n) sol
*/


#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	
	
	int occupied=0;
	int visited[26]={0}; //extra space
	int didnotget=0; //which will be answer
	
	for(int i=0;i<s.length();i++)
	{
		if(visited[s[i]-'a']==0 && occupied <n) //this is the case when the customer visited for the first time and there is a computer whixh is unoccupied
		{
			visited[s[i]-'a']=1;
			occupied++;
		}
		else if(visited[s[i]-'a']==1 && occupied <=n) //this means the person is leaving now
		{
			occupied--;
			visited[s[i]-'a']=0; //cuz he left
		}
		else
			didnotget++;
	}
	
	cout<<didnotget/2<<endl; //by 2 is imp we cant count duplicates
    return 0;
}

