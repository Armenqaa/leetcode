class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        int count = 0, max_distance = 0, unitfound = 0;
        for (int i = 0; i < seats.size(); ++i) {
            if (seats[i] == 0) {
                count++;
            } else {
                unitfound = 1;
                count = 0;
            } 
            
            if (i == seats.size() - 1 || unitfound == 0) {
                max_distance = max(max_distance, count);
            } else if (unitfound == 1) {
                max_distance = max(max_distance, (count + 1) / 2);
            }
            
        }
        
        return max_distance;
        
    }
};
