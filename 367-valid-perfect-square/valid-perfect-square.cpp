class Solution {
public:
    bool isPerfectSquare(int num) {
        int s =1;
        int end = num;
        int mid;

    if(num==0 || num==1){
        return true;
    }
        while(s<=end){
            mid = s + (end-s)/2;
            if(mid== num/mid && num%mid==0){
                return true;
            }
            else if(mid < num/mid){
                s = mid+1;
            }
            else{
                end = mid-1;
            }
        }
        return false;
    }
};




//my first attempt
// class Solution {
// public:
//     bool isPerfectSquare(int num) {
//         bool ans = false;
//         if(num>= INT_MIN && num<= INT_MAX/2){
//             for(int i=1; i*i<=num; i++){
            
//                 if(num == i*i){
//                     return true;
//                 }
//         }
//         }
        
            
//         return false;
//     }
// };