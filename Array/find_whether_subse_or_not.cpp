#include <iostream>
#include <unordered_set>
#include <vector>
#include <algorithm> // for std::sort
using namespace std;

bool isSubset(vector<int>& nums1, vector<int>& nums2) {
    unordered_set<int> hashSet(nums1.begin(), nums1.end());

    // Insert all elements of nums2 into hash set
    for (int num : nums2) {
        hashSet.insert(num);
    }

    // Check if all elements of nums1 are in hash set
    for (int num : nums1) {
        if (hashSet.find(num) == hashSet.end()) {
            return false;
        }
    }

    return true;
}

int main() {
    vector<int> nums1 = {1, 2, 3, 4, 5};
    vector<int> nums2 = {2, 7, 4};

    // Sort nums1 and nums2
    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());

    if (isSubset(nums1, nums2)) {
        cout << "nums2 is a subset of nums1" << endl;
    } else {
        cout << "nums2 is not a subset of nums1" << endl;
    }

    return 0;
}
