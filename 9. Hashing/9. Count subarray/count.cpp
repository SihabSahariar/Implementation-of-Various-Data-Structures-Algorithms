#include <bits/stdc++.h>
using namespace std;

// utility fn to print map
void print(unordered_map<int, int> prefixSum)
{
    cout << "\n";
    for (auto m : prefixSum)
        cout << m.first << " " << m.second << "\n";
    cout << "\n";
}

// count subarray with sum = k
int subarraySum(vector<int> &nums, int k)
{
    // init map:
    unordered_map<int, int> prefixSum;
    prefixSum.insert({0, 1});

    // logic:
    int currentSum = 0, count = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        // calculate subarray sum
        currentSum += nums[i];

        // if currSum - k already present increment count
        if (prefixSum.find(currentSum - k) != prefixSum.end())
            count += prefixSum[currentSum - k];

        // insert new value
        prefixSum[currentSum]++;
    }

    // answer
    return count;
}

// Driver code
int main()
{
    // Given vector
    vector<int> nums = {1, 2, 7, 0, 0, 0};

    // fn call
    cout << subarraySum(nums, 10);
}