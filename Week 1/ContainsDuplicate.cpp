#include<iostream>
#include<vector>
using namespace std;

class Solution 
{
public:
    bool containsDuplicate(vector<int>& nums) 
    {
        for(int i=0; i<nums.size(); i++)
        {
            for(int j=i+1; j<nums.size(); j++)
            {
                if(nums[i]==nums[j])
                {
                    return true;
                }
            }
        }
        return false;
    }
};

int main()
{
    vector<int> vec;
    Solution obj;
    int size, element;
    cout<<"Enter size: ";
    cin>>size;
    cout<<"Enter elements: ";
    for(int i=0; i<size; i++)
    {
        cin>>element;
        vec.push_back(element);
    }
    if(obj.containsDuplicate(vec))
        cout<<"true";
    else
        cout<<"false";
    return 0;
}