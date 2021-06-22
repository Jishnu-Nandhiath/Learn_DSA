class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int mR = -1,tmp;      
        for(int i = arr.size()-1 ; i>= 0 ; i--){
                tmp = arr[i];
                arr[i] = mR;
                mR = max(mR, tmp);
        }
    return arr;
    }
};
