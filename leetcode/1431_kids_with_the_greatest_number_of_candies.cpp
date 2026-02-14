class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size();
        vector<bool> result(n);
        for(int i = 0; i < candies.size(); i++){
            candies[i] += extraCandies;
            for(int y = 0; y < candies.size(); y++){
                if(candies[i] >= candies[y]){
                    result[i] = true;
                }else{
                    result[i] = false;
                    break;
                }
            }
            candies[i] -= extraCandies;
        }
        return result;
    }
};
