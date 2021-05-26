//author :shreyamalogi

//Given three arrays sorted in increasing order. Find the elements that are common in all three arrays.
//Note: can you take care of the duplicates without using any additional Data Structure?


//take 3 pointer approach
#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n1,n2,n3;
	cin>>n1>>n2>>n3;
	
	int a[n1],b[n2],c[n3];
	for(int i=0;i<n1;i++) cin>>a[i];
	for(int i=0;i<n2;i++) cin>>b[i];
	for(int i=0;i<n3;i++) cin>>c[i];
	
	unordered_map<int,int> m1,m2,m3;
	
	for(int i=0;i<n1;i++) m1[a[i]]++;
	for(int i=0;i<n2;i++) m2[b[i]]++;
	for(int i=0;i<n3;i++) m3[c[i]]++;
	
	vector<int> v;
	for(int i=0;i<n1;i++)
	{
		if(m1[a[i]] and m2[a[i]] and m3[a[i]]){
			v.push_back(a[i]);
			m1[a[i]]=0;
		}
	}
	
	for(int i=0; i<v.size(); i++) 
	cout<<v[i]<<" ";
	
	
  return 0;
}

//6 5 8
//1 5 10 20 40 80
//6 7 20 80 120
//3 4 15 20 30 70 80 120
//
//20 80

