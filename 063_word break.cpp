//author :shreyamalogi

// dp prob


//Given a string A and a dictionary of n words B, find out if A can be segmented into a space-separated sequence of dictionary words. 

// we are given a string......we need to break the strings anmd check whether the broken strings are found in the library

//trying with recurssion but tcx is too high

//we can do dp : cuz optimization of recursion is dp

//so first put all those in unordered set to reduce the tc

//check from last....the if dp[0] = 1 it means we can make the entire string

#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string dict[n];
		
		string s;
		
		
		unordered_set<string> st;
		for(int i=0;i<n;i++){
			cin>>dict[i];		//while accepeting the input , insert it into the set
			st.insert(dict[i]);
		}
		
		cin>>s;
		int n=s.length();
		
		//now take a dp array which is gonna be a boolean array only
		int dp[n+1];
		memset(dp,0,sizeof(dp)); 				//let us set all the values of a dp array to 0
		dp[n]=1; 								//set dp of n as 1 because empty sequence is also valid
												//let us take twi variables i and j
			for(int i=n-1;i>0;i--){
				string word;
				for(int j=i; j<n; j++)
				{
					word.push_back(s[j]);
					if(st.find(word)!=st.end())
					{
						if(dp[j+1])
						dp[i]=1;
					}
				}
			}
//			if (dp[0])
//				cout<<"yes"<<endl;
//			else
//				cout<<"no"<<endl;

		cout<<dp[0]<<endl;
		
	}
     return 0;
}

//
//Input:
//n = 12
//B = { "i", "like", "sam", "sung", "samsung", "mobile",
//"ice","cream", "icecream", "man", "go", "mango" }
//A = "ilike"
//Output: 1
//Explanation:The string can be segmented as "i like".

