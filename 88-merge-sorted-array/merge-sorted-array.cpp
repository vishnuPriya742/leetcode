class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int end = m+n-1;
        while(n>0 && m>0){
            if(nums2[n-1]>=nums1[m-1]){
                nums1[end] = nums2[n-1];
                n--;
            }
            else{
                nums1[end] = nums1[m-1];
                m--;
            }
            cout<<nums1[end]<<" ";
            end--;
        }
        while(n>0){
            nums1[end] = nums2[n-1];
            n--;
            end--;
        }
    }
};