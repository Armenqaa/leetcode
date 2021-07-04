// O(n), my solution
class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int> res;
        if (x <= arr[0]) {
            int i = 0;
            while (i != k) {
                res.push_back(arr[i]);
                i++;
            }
            return res;
        }
        
        if (x >= arr[arr.size() - 1]) {
            int i = arr.size() - k;
            while (i < arr.size()) {
                res.push_back(arr[i]);
                i++;
            }
            return res;
        }
        
        int closest_idx = 0;
        int closest = x - arr[0];
        for (int i = 0; i < arr.size(); ++i) {
            if (abs(x - arr[i]) < closest) {
                closest = abs(x - arr[i]);
                closest_idx = i;
            }
        }
        
        int i = closest_idx - 1, j = closest_idx + 1, curr_count = 1; 
        cout << i << " " << j << endl; 
        while (curr_count < k) {
            if (i >= 0 && j < arr.size()) {
                if (abs(x - arr[i]) <= abs(x - arr[j])) {
                    i--;
                } else {
                    j++;
                }
            } else if (i < 0) {
                j++;
            } else {
                i--;
            }
            curr_count++;
        }
        cout << i << " " << j << endl; 
        for(int m = 0; m < k; ++m) {
            res.push_back(arr[m + i + 1]);
        }
        
        return res;
    }
};

//O(logN + K)
class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int> res;
        if (x <= arr[0]) {
            int i = 0;
            while (i != k) {
                res.push_back(arr[i]);
                i++;
            }
            return res;
        }
        
        if (x >= arr[arr.size() - 1]) {
            int i = arr.size() - k;
            while (i < arr.size()) {
                res.push_back(arr[i]);
                i++;
            }
            return res;
        }
        
        int closest_idx = 0, left = 0, right = arr.size() - 1;
        /*while (left < right) {
            mid = (left + right) / 2;
            if (abs(x - a[mid]) < closest) {
                right = mid - 1;
            } else if (x < arr[mid]){
                left = mid + 1;
            } else {
                closest_idx = mid;
                break;
            }
            
        }*/
        while (left <= right) {
            int mid = (right + left) / 2;

            if (arr[mid] < x) {
                left = mid + 1;
            } else if (arr[mid] > x) {
                right = mid - 1;
            } else {
                left = mid;
                break;
            }
        }

        closest_idx = left;
        
        int i = closest_idx - 1, j = closest_idx, curr_count = 0; 
        while (curr_count < k) {
            if (i >= 0 && j < arr.size()) {
                if (abs(x - arr[i]) <= abs(x - arr[j])) {
                    i--;
                } else {
                    j++;
                }
            } else if (i < 0) {
                j++;
            } else {
                i--;
            }
            curr_count++;
        }
        
        for(int m = 0; m < k; ++m) {
            res.push_back(arr[m + i + 1]);
        }
        
        return res;
    }
};
