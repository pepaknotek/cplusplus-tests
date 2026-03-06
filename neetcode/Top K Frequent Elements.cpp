class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        //spojeni cisel
        vector<int> result;
        unordered_map<int,int> cisla;
        for(int n : nums){
            cisla[n]++; 
        }
        //sort    
        vector<vector<int>> buckets(nums.size()+1);
        for(auto const& [val,count] : cisla){
            buckets[count].push_back(val);
        }

        //output
        for(int i = buckets.size()-1; i > 0;i--){
            for(int num : buckets[i]){
                result.push_back(num);
                if(result.size() == k){
                    return result;
                }
            }
        }

        return result;
    }
};
