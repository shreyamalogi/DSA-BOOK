//author :shreyamalogi

//median in a row wise sorted array
//fundamental thinking behind this algo is that
//the median in a sorted array then it would be
//greater than n/2 elements

class Solution{
	public:
		int median(<vector<int>> &m, int r, int c){
			int mn= INT_MAX;
			int mx= INT_MIN;
			
			for(int i=0;i<r;i++)
			{
				//search space will be min to max
				mn=min(mn, m[i][0]);
				mx=max(mx, m[i][c-1]);
			}
			
			//what ans we would expect = needed
			int needed=(r*c+1)/2 //row x col+2 whole divide by 2
			while(mn<mx)
			{
				int mid=mn+(mx-mn)/2;
				int cnt=0;  //initialize count
				for(int i=0;i<r;i++)
				cnt+= upper_bound(m[i].begin(), m[i].end(), mid)-m[i].begin();
				
				if(cnt<needed)
					mn=mid+1;
				else
					mx=mid;	
			}
			return min;
		}
};


//Input:
//R = 3, C = 3
//M = [[1, 3, 5], 
//     [2, 6, 9], 
//     [3, 6, 9]]
//
//Output: 5
//
//Explanation:
//Sorting matrix elements gives us 
//{1,2,3,3,5,6,6,9,9}. Hence, 5 is median. 
