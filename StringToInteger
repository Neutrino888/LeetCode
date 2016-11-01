//my first successful submission, bad performance

class Solution {
public:
         int myAtoi(std::string str) {
        int i=0;
        int k=0;
        int sign=1;
        long result=0;

        if(str.empty()){
            return 0;
        }
        while(str.at(i)==' '){
            i++;
        }

        if(i==str.length()){
            return 0;
        }else if((str.at(i)<'0'||str.at(i)>'9')&&str.at(i)!='+'&&str.at(i)!='-'){
            return 0;
        }else if(str.at(i)=='+'){
            sign=1;
            i++;
            for(int j=i;j<str.length();j++){
                if(str.at(j)>='0'&&str.at(j)<='9'){
                    k++;
                }else{
                    break;
                }
            }
            std::string temp(str,i,k);
            std::stringstream m_stream(temp);
            m_stream >> result;
            result=sign*result;
            if(result>INT_MAX){
                return INT_MAX;
            }else if(result<INT_MIN){
                return INT_MIN;
            }else{
                return result;
            }
        }else if(str.at(i)=='-'){
            sign=-1;
            i++;
            for(int j=i;j<str.length();j++){
                if(str.at(j)>='0'&&str.at(j)<='9'){
                    k++;
                }else{
                    break;
                }
            }
            std::string temp(str,i,k);
            std::stringstream m_stream(temp);
            m_stream >> result;
            result=sign*result;
            if(result>INT_MAX){
                return INT_MAX;
            }else if(result<INT_MIN){
                return INT_MIN;
            }else{
                return result;
            }
        }else{
            sign=1;
            for(int j=i;j<str.length();j++){
                if(str.at(j)>='0'&&str.at(j)<='9'){
                    k++;
                }else{
                    break;
                }
            }
            std::string temp(str,i,k);
            std::stringstream m_stream(temp);
            m_stream >> result;
            result=sign*result;
            if(result>INT_MAX){
                return INT_MAX;
            }else if(result<INT_MIN){
                return INT_MIN;
            }else{
                return result;
            }
        }
    }
};
