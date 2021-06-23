class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> result;
        int size = nums.size(),num;
        for(int i=0; i < size ;i++)
        {
             num = abs(nums[i])-1;
             nums[num] = -abs(nums[num]);    
        }
        for(int j = 0; j < size ; j++)
        {
            if(nums[j] > 0)
            {
                result.push_back(j+1);
            }
        }
        return result;
    }
};
