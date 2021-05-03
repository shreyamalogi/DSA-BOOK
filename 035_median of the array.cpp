//author :shreyamalogi

//Given an array arr[] of N integers, calculate the median

//#include<bits/stdc++.h>
//
//using namespace std;

class Solution
{
	public:
		public:
			
		int find_median(vector<int> v)
		{
			sort(v.begin(),v.end());			 			//just sort the array
			if(v.size()%2==0)								//if array size is even
				return (v[v.size()/2]+v[v.size()/2-1])/2;	//avg of middle values
			else
				return v[v.size()/2];						//otherwise median will be the middle value
		}
};



	


