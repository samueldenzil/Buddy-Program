#include <iostream>
using namespace std;

class TOH
{
	public:
	int tSteps;
	void TowerOfHanoi(int, char, char, char, int);	
};

void TOH::TowerOfHanoi(int n, char source, char destination, char auxilary, int s)
{
	tSteps = s;
	if(n == 1)
	{
		cout<<"move disk "<<n<<" from rod "<<source<<" to rod "<<destination<<endl;
		tSteps++;
		return;
	}
	tSteps++;
	TowerOfHanoi(n-1, source, auxilary, destination, tSteps);
	cout<<"move disk "<<n<<" from rod "<<source<<" to rod "<<destination<<endl;
	TowerOfHanoi(n-1, auxilary, destination, source, tSteps);
}

int main()
{
	TOH obj;
    int t, n, totalSteps = 0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        obj.TowerOfHanoi(n, '1', '3', '2', totalSteps);
        cout<<obj.tSteps<<endl;
    }
	return 0;
}


