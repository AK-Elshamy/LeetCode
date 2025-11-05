#include <vector>
#include <unordered_map>
#include <queue>
#include <utility> // for std::pair

using namespace std;

using pii = pair<int, int>; // Define a pair type for (element, frequency)
using vp = vector<pii>;     // Define a vector type for pairs

class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        // Custom comparator for the max heap based on frequency
        auto comp = [](const pii &a, const pii &b) -> bool
        {
            return a.second < b.second; // We want a max heap, so we compare frequencies
        };

        // Priority queue (max heap) to store pairs of (element, frequency)
        priority_queue<pii, vp, decltype(comp)> MaxHeap(comp);
        unordered_map<int, int> mp; // Map to count frequencies of elements

        // Count the frequency of each element in nums
        for (auto &it : nums)
        {
            ++mp[it]; // Increment the count for each element
        }

        // Push all elements and their frequencies into the max heap
        for (const auto &it : mp)
        {
            MaxHeap.push(it); // Push the pair (element, frequency) into the heap
        }

        vector<int> res; // Result vector to store the top K frequent elements

        // Extract the top K elements from the max heap
        while (k-- && !MaxHeap.empty())
        {
            res.push_back(MaxHeap.top().first); // Get the element with the highest frequency
            MaxHeap.pop();                      // Remove it from the heap
        }

        return res; // Return the result
    }
};
