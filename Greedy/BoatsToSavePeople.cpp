class Solution {
public:
    int numRescueBoats(vector<int>& arr, int limit) {
        int boats = 0;
        sort(arr.begin(),arr.end());
        int i = 0, j = arr.size()-1;
        while(i <= j){
            if(arr[i] + arr[j] <= limit) i++;
            boats++;
            j--;
        }
        return boats;
    }
};
