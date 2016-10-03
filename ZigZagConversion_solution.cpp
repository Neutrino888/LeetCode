//from the forum, beating 41.41%

class Solution {
public:
    string convert(string s, int numRows) {
        vector<string> row(numRows,"");
        int i=0,j=0;
        if(numRows==1) return s;
        while(j<s.length()){
            while(j<s.length() && i<numRows-1) row[i++]+=s[j++];
            
            while(j<s.length() && i>0) row[i--]+=s[j++];
            
        }
        string result="";
        for(string st:row) result+=st;
        return result;
    }
};
