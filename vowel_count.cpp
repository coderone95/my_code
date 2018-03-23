#include <iostream>

using namespace std;


int main()
{
	string s;
	int total_vowel_count=0;	
	cin >> s;

	for(int i=0; i<s.size(); i++)
	{
		if(s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' || s[i] == 'i' || s[i] == 'I' || s[i] == 'o' ||
			 s[i] == 'O' || s[i] == 'u' || s[i] == 'U' )
		{
			total_vowel_count++;
		}
	}
	cout << endl << "total_vowel_count:\t" << total_vowel_count << endl;
				

	return 0;
}
