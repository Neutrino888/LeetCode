class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        unordered_map<int,int> umap;
        for(int i=0; i<nums.size(); i++){
            int complement = target - nums[i];
            auto search = umap.find(complement);
            if(search!=umap.end()){
                    result.push_back(search->second);
                    result.push_back(i);
            }
            umap[nums[i]]=i;
        }
        return result;
    }
};
