//My first solution, beating 26.53%

class Solution {
public:
    string convert(string s, int numRows) {
        std::string ans;
        
        if (numRows==1){
            ans = s;
            return ans;
        }else{
            for(int j=0; j*2*(numRows-1)<s.length(); j++){
                ans.push_back(s.at(j*2*(numRows-1)));
            }
            for(int i=1; i<numRows-1; i++){
                for(int j=0; j*2*(numRows-1)+i<s.length(); j++){
                    ans.push_back(s.at(j*2*(numRows-1)+i));
                    if((j+1)*2*(numRows-1)-i<s.length()){
                        ans.push_back(s.at((j+1)*2*(numRows-1)-i));
                    }
                }
            }
            for(int j=0; (j*2+1)*(numRows-1)<s.length(); j++){
                ans.push_back(s.at((j*2+1)*(numRows-1)));
            }
            return ans;
        }
    }
};
