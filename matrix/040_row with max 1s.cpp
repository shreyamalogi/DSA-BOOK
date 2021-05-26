//author :shreyamalogi

//it is sorted....whenever v get 0 go to next row
//if we are getting 1, then go to next coloumn
//using this approach we will get row with max no of ones

//author :shreyamalogi

#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	int a[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
	
		int mre =0; //max row element
		int j=m-1;
		int i=0;
		
		while(i<n && j>=0)
		{
			if(a[i][j]==1){
				mre = i;
				j--;
			}else
			i++;
		}
		cout<<mre<<endl;
		
		return 0;
	}
	
	
//	4 4
//0 1 1 1
//0 0 1 1
//1 1 1 1
//0 0 0 0

//2

//Explanation: Row 2 contains 4 1's (0-based
//indexing).








//class Solution{
//	public:
//		int rowWithMax1s(vector<vector<int>> a, int n, int m,)
//		
//		int mre =0; //max row element
//		int j=m-1;
//		int i=0;
//		
//		while(i<n && j>=0)
//		{
//			if(a[i][j]==1){
//				mre = i;
//				j--;
//			}else
//			i++;
//		}
//		
//		return mre;
//	}
//};
