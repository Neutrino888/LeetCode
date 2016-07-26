// For the first time, my solution was accepted with the first trial
// Need to learn about std::sort, insert method for vector
// Run time is not good. Need to learn more about this question.

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        //concatenating two arrays, and sort it
        int N=nums1.size()+nums2.size();
        vector<int> mvec(nums1.begin(),nums1.end());
        mvec.insert(mvec.end(),nums2.begin(),nums2.end());
        sort(mvec.begin(),mvec.end());
        //return the median according to even and odd situation
        if(N%2==1){
            return mvec.at(N/2);
        }else{
            return 0.5*(mvec.at(N/2-1)+mvec.at(N/2));
        }
    }
};
