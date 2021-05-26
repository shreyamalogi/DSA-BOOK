class Solution {
public:
    void nextPermutation(vector<int>& v) {
        
        next_permutation(v.begin(),v.end());
        
    }
};



////author :shreyamalogi
//

////without using STL
//class solution{
//	public: 
//		void nextPermutation(vector<int> & nums){
//		bool flag = false;  //initialize flag variable with false
//		int i;
//		for(i=nums.size()-1; i>0;i++)  //traverse to the vector from right to left
//		
//		{
//			if(nums[i]>nums[i-1])    //if an element is greater than its right neighbour
//			{
//				flag=true;           //then i will say flag is true
//				break;               //and i will break out
//			}
//		}
//		
//		if(flag){
//			int j;
//			for(j=nums.size()-1; j>=i; j--){
//				{
//					if(nums[j]>nums[i-1])
//					{
//						swap(nums[j], nums[i-1]);  //swap and break out
//						break;
//					}
//				}
//			}
//			else
//				i=0;     //if there is no such element in the if case then make i as 0
//				
//			sort(nums.begin()+i, nums.end())  //next greater will be a sorted array in ascending order
//		}
//    };
