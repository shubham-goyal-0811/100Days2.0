
int maximumFrequency(vector<int> &arr, int n)
{
    //Write your code here
    unordered_map<int, int> frequencyMap;

    // Count the frequency of each number in the array
    for (int num : arr) {
        frequencyMap[num]++;
    }

    // Find the number with the maximum frequency
    int maxFrequencyNumber = arr[0];
    int maxFrequency = frequencyMap[arr[0]];

    for (int i = 1; i < arr.size(); ++i) {
        if (frequencyMap[arr[i]] > maxFrequency) {
            maxFrequency = frequencyMap[arr[i]];
            maxFrequencyNumber = arr[i];
        }
    }

    return maxFrequencyNumber;
}
