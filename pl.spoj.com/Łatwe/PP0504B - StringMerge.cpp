#include<iostream> // AC
#include<string>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	
	string s1, s2;
	
	int t, r1, r2, i, r;
	
	cin >> t;
	
	while( t )
	{
		cin >> s1 >> s2;
		
		r1 = s1.size();
		
		r2 = s2.size();
		
		r = min( r1, r2 );
		
		for(i=0; i<=r-1; ++i)
		{
			cout << s1[i] << s2[i];
		}
		cout << endl;
		
		--t;
	}
		
	return 0;
}
