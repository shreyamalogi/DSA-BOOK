//author :shreyamalogi

//#include<bits/stdc++.h>
//
//using namespace std;
//
//int main()
//{
//
//     return 0;
//}

//using quicksort

vector<int> threeWayPartition(vector<int> v, int a, int b)
{
	int start=0,end=v.size-1;
	int i=0;
	
	while(i<=end)
	{
		if(v[i]<a)
		swap(v[i++],v[start++]);
		
		else if(v[i]>b)
		swap(v[i],v[end--]);
		
		else
		i++;
	}
	return v;
}
