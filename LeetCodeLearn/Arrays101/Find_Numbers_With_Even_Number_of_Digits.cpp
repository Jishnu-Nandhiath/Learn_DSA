class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int c = 0;
        for(int i = 0; i < nums.size() ; i++)
        {
            int digitCount = to_string(nums.at(i)).length();
            if(digitCount % 2 == 0)
                c += 1;
        }
        return c;
    }
};
