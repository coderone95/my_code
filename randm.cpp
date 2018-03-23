#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int arr_rand[n];
	for(int i=0; i<n; i++)
		arr_rand[i]= (rand() % 50);  //cout << "\t" << (rand() % 50) << endl;
	
	for(int i=0; i<n; i++)
		cout << setw( 5 ) << arr_rand[i] <<"\t";
	cout << endl;
	return 0;
}
