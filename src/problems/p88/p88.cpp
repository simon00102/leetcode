#include <vector>
using namespace std;

namespace P88
{
class Solution
{
  public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        if (n == 0)
        {
            return;
        }
        vector<int> result(m + n);
        int i = 0;
        int j = 0;
        int index = 0;
        while (true)
        {
            if (i == m && j == n)
            {
                break;
            }

            if (nums1[i] == 0 && i == m)
            {
                result[index] = nums2[j];
                j++;
                index++;
            }
            else if (j == n)
            {
                result[index] = nums1[i];
                i++;
                index++;
            }
            else if (nums1[i] < nums2[j])
            {
                result[index] = nums1[i];
                i++;
                index++;
            }
            else if (nums1[i] >= nums2[j])
            {
                result[index] = nums2[j];
                j++;
                index++;
            }
        }
        nums1 = result;
    }
};
} // namespace P88