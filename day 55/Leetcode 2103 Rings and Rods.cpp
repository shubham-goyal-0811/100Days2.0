class Solution {
public:
    int countPoints(string str) {
        int arr[10][3] = {0};
        
        for (int i = 0; i < str.length(); i += 2) {
            if (str[i] == 'B') {
                arr[str[i + 1] - '0'][0] += 1; // blue
            } 
            else if (str[i] == 'G') {
                arr[str[i + 1] - '0'][1] += 1; // green
            } 
            else {
                arr[str[i + 1] - '0'][2] += 1; // red
            }
        }
        
        int count = 0;
        
        for (int i = 0; i < 10; i++) {
            if (arr[i][0] >= 1 and arr[i][1] >= 1 and arr[i][2] >= 1) {
                count++;
            }
        }
        return count;
    }
};
