// Split the problem into two schemes: abba, aba
// Using the idea of sliding window.
// Haven't checked others' solutions

class Solution {
public:
    string longestPalindrome(string s) {
        std::string mstr;
        int width=0;
        
        if(s.length()==1){
            mstr.push_back(s[0]);
        }else{
            for(int i=1; i<s.length(); i++){
                if(s[i]==s[i-1]){
                //type 1 palindrome, even number of members
                    int k=1;
                    while((i-k)>0 && (i+k-1)<(s.length()-1) && s[i-1-k]==s[i+k]){
                        k++;
                    }
                    if(2*k>width){
                        width=2*k;
                        mstr.clear();
                        mstr.assign(s.begin()+i-k,s.begin()+i+k);
                    }
                }
                if(s[i+1]==s[i-1]){
                //type 2 palindrome, odd number of members
                    int k=1;
                    while((i-k)>0 && (i+k)<(s.length()-1) && s[i-1-k]==s[i+1+k]){
                        k++;
                    }
                    if(2*k+1>width){
                        width=2*k+1;
                        mstr.clear();
                        mstr.assign(s.begin()+i-k,s.begin()+i+k+1);
                    }
                }
            }
        }
        return mstr;
        
    }
};
