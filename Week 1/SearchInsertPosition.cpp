#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int loc;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == target)
            {
                return i;
            }
        }
        nums.push_back(target);
        for(int i = 0; i < nums.size(); i++)
        {
        	for(int j = 0; j < nums.size()-i-1; j++)
        	{
        		if(nums[j]>nums[j+1])
        		{
        			swap(nums[j], nums[j+1]);
				}
			}
		}
    
		for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == target)
            {
                loc = i;
                break;
            }
        }
        return loc;
    }
};

int main()
{
    Solution obj;
    vector<int> vec;
    int nums, element, target, size;
    cout<<"Enter size: ";
    cin>>size;
    cout<<"Enter elements: ";
    for(int i = 0; i < size; i++)
    {
        cin>>element;
        vec.push_back(element);
    }
    cout<<"Enter target: ";
    cin>>target;
    cout<<obj.searchInsert(vec, target);
    return 0;
}