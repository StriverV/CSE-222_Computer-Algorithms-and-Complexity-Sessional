class Solution {
    public:
        int search(vector<int>& nums, int target) {
         
            int n = nums.size();
            int lp = 0, rp = n-1;
            bool flag = 0;
            int idx = -1;
            while( lp <= rp)          // O(logn)
            {
                int mid = (lp + rp)/2;
    
                if(nums[mid] == target  )  
                {
                    flag = 1;
                    idx = mid;
                    break;
                }   
    
                else if(target  < nums[mid])   rp = mid - 1;
    
                else   lp = mid + 1;
            }
    
            return idx;
        }

    };