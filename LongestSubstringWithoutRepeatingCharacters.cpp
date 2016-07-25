class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        std::unordered_map<char,int> umap;
        int max_counter=0, temp_begin=0, temp=0;

        for(int i=0; i<s.size(); i++){
            auto search = umap.find(s[i]);
            // not found
            if(search==umap.end()){
                umap[s[i]]=i;
                temp++;
            }else{
            // found
                temp=i-temp_begin;
                temp_begin=search->second;
                if(temp>max_counter) max_counter=temp;
                umap.erase(search);
                umap[s[i]]=i;
            }
        }
        if(temp>max_counter) max_counter=temp;

        return max_counter;
    }
};
