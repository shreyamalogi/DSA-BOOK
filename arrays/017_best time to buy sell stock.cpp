//author :shreyamalogi

/*

Best Time to Buy and Sell Stock

*/


//FIRST WE NEED TO RECORD THE MINIMUM VALUE WHILE TRAVERSING THROUGH THE ARRAY

// WE have to get maximum profit so we will compsare our max profit which is initially 0 with maximum available profit that is on that particular day if you sell a stock what will happen.
    
// so on that particular day if you brought a stock at some price so what u buy and what u sell, 

// that differece u have to compare with the answer and that answer is the maximum value

class Solution {
public:
    int maxProfit(vector<int>& v) {
        
        int i=0,m=0,m1=INT_MAX;
        int ans=0;
        for(i=0;i<v.size();i++)
        {
            m1=min(m1, v[i]);
            ans=max(v[i]-m1,ans);
         }
        return ans;
        
    }
};

