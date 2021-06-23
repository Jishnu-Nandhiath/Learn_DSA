class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int size = nums.size();
        int j = size - 1;
        for(int i = 0; i < size ;)   
        {
            if(nums[i]%2 != 0 && j > i)
            {
                swap(nums[i],nums[j]);
                j--;
            }
            else
                i++;

        }

        return nums;
    }
};
