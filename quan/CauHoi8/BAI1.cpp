#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a;
	int b;
	if (n%2==0)
	{
		a=n/2;
		b=n/2;
		cout<<a<<" "<<b;
	}
	else
	{
		if (n%2!=0)
		{
			a=n/2;
			b=n/2+1;
			cout<<a<<" "<<b;
		}
	}
	
	return 0;
}

