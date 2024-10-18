#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a;
	cin>>b;
	cin>>c;
	int tich=1;
	
	if(a>c && b > c)
	{
		tich=a*b;
		cout<<tich;
	}
	else
	{
		if(b>a && c>a)
		{
			tich=b*c;
			cout<<tich;
		}
		else
	{
		tich=c*a;
		cout<<tich;
	}
	}
	
	return 0;
}
