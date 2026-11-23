class Solution {
public:
    vector<string> assignUmbrella(vector<int>& rain) {
        int n = rain.size();
        int countAlice = 0;
        int countBob = 0;
        vector<string> answer;
        for(int i=0; i<n; i++){
           bool aliceneeds = (i<n-1 && rain[i]==1 && rain[i+1]==1);
            bool bobneeds = (rain[i]==1);
            if(aliceneeds && bobneeds){
                if(countAlice<= countBob){
                    answer.push_back("Alice");
                    countAlice++;
                }
                else{
                    answer.push_back("Bob");
                    countBob++;
                }
            }
            else if(aliceneeds){
                answer.push_back("Alice");
                countAlice++;
            }
            else if(bobneeds){
                answer.push_back("Bob");
                countBob++;
            }
            else{
                answer.push_back("None");
            }
        }
        return answer;
    }
};