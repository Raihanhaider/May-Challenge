// Single Element in a sorted array

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        
	    int s = 0, e = nums.size()-1, m;
	    while (s<e) 
        {
		    m = (s+e)/2; 
            m = m%2==0?m+1:m;
		    if (nums[m-1] == nums[m]) 
                s = m+1; 
		    else 
                e = m-1;
	    }
	return nums[s];
    }
};