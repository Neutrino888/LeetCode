// Also this is a wrong solution
// It exceeds the time limit

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int N=nums1.size()+nums2.size();
        int n1=0, n2=0;
        double result1=0., result2=0.;
        if (N%2==1){
            //odd number, only return 1 number
            vector<int> odd;
            for(int i=0; i<N/2+1; i++){
                if(nums1.at(n1)<=nums2.at(n2)){
                    odd.push_back(nums1.at(n1));
                    n1++;
                }else{
                    odd.push_back(nums2.at(n2));
                    n2++;
                }
            }
            result1=odd.back();
        }else if (N%2==0){
            //even number, need return the avrage of two numbers
            vector<int> even;
            for(int i=0; i<N/2+1; i++){
                if(nums1.at(n1)<=nums2.at(n2)){
                    even.push_back(nums1.at(n1));
                    n1++;
                }else{
                    even.push_back(nums2.at(n2));
                    n2++;
                }
            }
            result2=0.5*(even.at(N/2-1)+even.at(N/2));
        }
        return result1+result2;
    }
};
