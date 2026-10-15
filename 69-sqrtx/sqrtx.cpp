class Solution {
public:
    int mySqrt(int x) {
        if(x==0 || x==1){
            return x;
        }
        
            int low = 1;
            int high = x;
            int mid =-1;

            while(low<=high){
                int mid = low + (high-low)/2;
                long long sqr = 1LL*mid*mid;
                if(sqr == x){
                    return mid;
                }
                else if(sqr > x){
                    high = mid-1;
                }
                else{
                    low = mid+1;
                }
            } 
        return high;
    }
};