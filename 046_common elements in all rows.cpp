//author :shreyamalogi
//common elements in all rows

//im using map

//map will help us to know how many times a particular elemet has appered
#include<bits/stdc++.h>

using namespace std;

int main()
{
	unordered_map<int,int> map;
	

	int n,m; //rows and coloums
	cin>>n>>m;
	int a[n][m];
	
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			cin>>a[n][m];
		}
	}
	
	
	for(j=0;j<m;j++)		//scan thru the 1st row
		map[a[0][j]]=1;		//map of
		
	for(i=1;i<n;i++)		//scan thru the 2nd row
	{
		for(j=0;j<m;j++){
			if(map[a[i][j]]=i)
			{
				map[a[i][j]]=i+1;  //increase the frequency of this element
				
				if(i==m-1)      //that is the last low(appeared in all rows)
					cout<<a[i][j]<<" ";
			}
		}
	}
	
     return 0;
}

//4 5
//1 2 1 4 8
//3 7 8 5 1
//8 7 7 3 1
//8 1 2 7 9

//8 1

