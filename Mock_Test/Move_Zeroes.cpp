#include <iostream>
#include <vector>

using namespace std;


    void moveZeroes(vector<int> &nums)
    {
        if (nums.size() == 1)
            return;
        int l = 0, r = 0;
        while (r < nums.size())
        {
            if (nums[r] != 0)
            {
                swap(nums[l], nums[r]);
                l++;
            }
            r++;
        }
    }

int main()
{
   

    // Take input from the user
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    // Call the moveZeroes function
   moveZeroes(nums);

    // Print the modified array
    cout << "Modified array: ";
    for (int i = 0 ; i<nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
