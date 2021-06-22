//approach 1
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        for(int i = 0; i < nums.size() ; )
        {
            if(nums[i] == val)
            {
                for(int j = i+1 ; j < nums.size(); j++ )
                {
                    nums[j - 1] = nums[j];
                }
            nums.resize(nums.size() - 1);
            }
            else
                i++;
        }
    
    return nums.size();
    }
};
//runtime 4ms

//approach 2
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0;
        for(int j = 0 ; j < nums.size() ; j++ )
        {
            if(nums[j] != val)
            {
                nums[i] = nums[j];
                i++;
            }
        }
        return i;
    }
};

