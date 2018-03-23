#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int sum=0, n;
	
	cin >> n;

	for(int i=0; i<n; i++)
		sum=sum+ (rand() % 20);

	cout<< sum << endl;
	return 0;
}	

	
