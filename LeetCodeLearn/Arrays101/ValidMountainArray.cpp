class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size() < 3)
            return false;
        int Inc = 0,Dec = 0;
        for(int i = 1; i< arr.size(); i++)
        {           
            
            if(arr[i-1] < arr[i] && Dec == 0)
            {
                Inc = 1;
            }
            else if(arr[i-1] > arr[i] && Inc == 1)
            {
                Dec = 1;
            }
            else
                return false;

        }
      if(Dec == 1)
          return true;
    return false;   
    }
};
