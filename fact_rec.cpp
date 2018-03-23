#include <iostream>

using namespace std;

int facto(int x)
{
	if(x <= 1)
		return 1;
	else
		return x*facto(x-1);
}
		

int main()
{
	int n;
	cin >> n;
	int i=n;
	while(i >= 1)
	{
		cout << facto(i);
		i--;
	}
	cout << endl;
	return 0;
}

