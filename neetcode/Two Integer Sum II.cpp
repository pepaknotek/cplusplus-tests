class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        int right = numbers.size()-1;
        int temp = 0;
        int i = 0;
        while (left < right){
            temp = numbers[left] + numbers[right];
            if(temp == target){
                return {left + 1, right + 1};
            }
            else if(temp < target){
                left++;
            }else{
                right--;
            }
            
            cout << temp <<endl;
        }
        
    }
};
