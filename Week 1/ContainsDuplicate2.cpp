#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) 
	{
    	int diff=1000;
        for(int i=0; i<nums.size(); i++)
        {
        	for(int j=i+1; j<nums.size(); j++)
        	{
        		if(nums[i]==nums[j] && diff>abs(i-j))
        		{
					diff = abs(i-j);
				}
			}
		}
		if(diff==k)
			return true;
		else
			return false;
    }
};

int main()
{
	vector<int> vec;
	Solution obj;
	int size, element, dif;
	cout<<"Enter size: ";
    cin>>size;
    cout<<"Enter elements: ";
    for(int i=0; i<size; i++)
    {
        cin>>element;
        vec.push_back(element);
    }
    cout<<"Enter difference: ";
    cin>>dif;
	if(obj.containsNearbyDuplicate(vec,dif))
		cout<<"true";
	else
		cout<<"false";
	return 0;
}
