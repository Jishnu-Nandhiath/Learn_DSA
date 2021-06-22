class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int zero = 0;
        for(int i = 0; i < arr.size() ; i++)
        {
            if(arr[i] == 0)
                zero++;
            else{
            if(find(arr.begin(),arr.end(),2*arr[i])!=arr.end())
                return true;      
            }
            if(zero>=2)
                return true;
            
          
        }
        return false;
    }
};
