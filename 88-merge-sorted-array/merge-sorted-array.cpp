class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
         vector<int> x;
    // add nums1
    for(int i = 0; i < m; i++){
        x.push_back(nums1[i]);
    }

    // add nums2
    for(int i = 0; i < n; i++){
        x.push_back(nums2[i]);
    }
    int size = n+m;

    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(x[j] > x[j+1]){
            
                swap(x[j], x[j+1]);
                
            }
        }
    }
    
    for(int i=0;i<size;i++){
            nums1[i] = x[i];
        }

    }
};