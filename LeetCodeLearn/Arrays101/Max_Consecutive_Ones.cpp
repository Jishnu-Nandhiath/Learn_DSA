class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int flag = 1;
        int out = 0;
        for(int i = 0; i < nums.size();i++)
        {
            if(flag == 0)
                count = 0;
            if(nums[i] == 1)
            {
                flag = 1;
                count +=1;
                out = max(count,out);
            }
            else
                flag = 0;
        }
        return out;
    }
};
