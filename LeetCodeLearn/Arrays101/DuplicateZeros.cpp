class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        queue<int> duplicateZero;
        for(int i = 0 ; i < arr.size() ; i++ )
        {
            duplicateZero.push(arr[i]);
            if(arr[i] == 0 )
            {
                duplicateZero.push(0);                
            }
            arr[i] = duplicateZero.front();
            duplicateZero.pop();
        }
    }
};
