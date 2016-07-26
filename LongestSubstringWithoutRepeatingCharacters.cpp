/*this is really really bad, I failed too many times!!*/
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        std::unordered_map<char,int> umap;
        int max_length=0, left=0, right=0;

        for(int i=0; i<s.size(); i++){
            auto search = umap.find(s[i]);
            // not found
            if(search==umap.end()){
                umap[s[i]]=i;
                right++;
            }else if(search->second>=left){
            // found
                if(right-left>max_length) max_length=right-left;
                left=search->second+1;
                right++;
                umap[s[i]]=i;
            }else if(search->second<left){
                umap[s[i]]=i;
                right++;
            }
        }
        if(right-left>max_length) max_length=right-left;

        return max_length;
    }
};
