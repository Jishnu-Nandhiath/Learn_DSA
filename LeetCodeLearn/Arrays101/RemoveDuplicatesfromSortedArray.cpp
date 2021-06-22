//This method is called two pointer technique
//The algorithm keeps the space complexity in the order of O(1). 
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i;
        if(nums.size() != 0)
            i = 1;
        else
            i = 0;
        for(int j = 1; j < nums.size(); j++)
        {
            if(nums[j-1] != nums[j])
            {
                nums[i] = nums[j];
                i++;
            }

        }
        return i;
    }
};
