#include<iostream>
using namespace std;

int main()
{
	string s;
	int a[10]={6,2,5,5,4,5,6,3,7,6};
	cin>>s;
	int total_dash=0;
	for(int i=0 ; i < s.size() ; i++)
	{
		int temp=s[i]-48;
 		total_dash=total_dash+a[temp];
	}
	cout<<"\nTotal_dash:\t"<<total_dash<<endl;
	return 0;
}


