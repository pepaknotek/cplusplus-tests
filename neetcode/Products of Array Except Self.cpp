class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int j = nums.size();
        int left = 1;
        int right = 1;
        vector<int> result(j,1);
        
        for(int i  = 0;i < j;i++){
            result[i] = left;
            left *= nums[i];
        }
        for(int i = j - 1; i >= 0;i--){
            result[i] *= right;
            right *= nums[i]; 
        }
        return result;
    }
};
