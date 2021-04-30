//author :shreyamalogi

//Given an array of N integers, and an integer K, 
//find the number of pairs of elements in the array whose sum is equal to K.

//basic hashing question

#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,k;
	cin>>n>>k;
	
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	
	int cnt=0;
        unordered_map<int, int>m;  //take an unordered map and store all the arrays in that map
        
        for(int i=0;i<n;i++)  m[a[i]]++;
        for(int i=0;i<n;i++){
        	cnt+=m[k-a[i]];  //then count this value where k is the required sum
        
        	if(k-a[i]==a[i])
        	cnt--;  // suppose k is 4 nad a[i]=2 then 2+2=4 but that values u should not count
        	
		} 
		//cnt/2 because we have already counted duplicates 
        cout<< cnt/2;  //ultimately we have to return count/2 because we have counted a pair twice like 1 and 4 is same as 4 and 1 
        
    return 0;
}

//4 6
//1 5 7 1

//2

//Explanation: 
//arr[0] + arr[1] = 1 + 5 = 6 
//and arr[1] + arr[3] = 5 + 1 = 6.

