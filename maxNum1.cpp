#include <iostream>
#include <math.h>
using namespace std;
//int max(int,int);

int main()
{
	int a,b;
	cin >> a >> b;

	int res = max(a,b);

	cout << res << endl << "Sqrt:\t" << sqrt(a) << endl;
	return 0;
}

int max(int x , int y)
{
	if(x>y)
		return x;
	else
		return y;
}
