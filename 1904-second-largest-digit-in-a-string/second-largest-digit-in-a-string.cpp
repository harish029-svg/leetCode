class Solution {
public:
    int secondHighest(string s) {
        int largest = -1;
        int slargest = -1;

        for(int i=0; i<s.size(); i++){
            if(s[i] >= 48 && s[i] <= 57){
                int val = s[i] - 48;
                if(val > largest){
                    int temp = largest;
                    largest = val;
                    slargest = temp;
                }
                else if(val > slargest && val < largest){
                    slargest = val;
                }
            }
        }
        return slargest;
    }
};