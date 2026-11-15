class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       int n1 = nums1.size();
       int n2 = nums2.size();
       int n3;
       n3 = n1 + n2;
       
       int arr[n3];
       for(int i=0; i<n1; i++){
        arr[i] = nums1[i];
       }

       for(int i=0; i <n2; i++){
        arr[n1+i] = nums2[i];
       }

       for(int i=1; i<n3; i++){
        for(int j=0; j<n3-i; j++){
            if(arr[j]> arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
       }

       int s = 0;
       int e = n3-1;
       int mid = s + (e-s)/2;
       float median;

        if(n3%2!=0){
            median = arr[mid];
        }

        else{
            median = (arr[mid]+ arr[mid+1])/2.0;
        }
       

       return median;

    }
};