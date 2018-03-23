#include<iostream>

using namespace std;

int max(int x,int y)
{
	if(x>y)
		return x;
	else
		return y; 
}

int main()
{
	int a,b;
	cin >> a >> b;

	int res = max(a,b);

	cout << res << endl;
	return 0;
}
