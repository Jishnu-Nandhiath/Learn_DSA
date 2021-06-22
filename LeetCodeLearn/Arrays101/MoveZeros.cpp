class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int writePointer = 0,size = nums.size();
        for(int readPointer = 0; readPointer < size; readPointer++)
        {
            if(nums[readPointer] != 0)
            {
                nums[writePointer++] = nums[readPointer];
            }
    }
	    for(int i = writePointer ; i < size; i++ ) nums[i] = 0;
    }
};
