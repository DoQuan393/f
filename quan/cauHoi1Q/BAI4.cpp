#include <bits/stdc++.h>

using namespace std;
int cp(int n)
{
	int sqr = sqrt(n);
	if(sqr*sqr == n)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

long long a[100005];
int main()
{
	int n;
	long long tong = 0;
	cin>>n;
	bool kt = false;
	
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	for(int i=0;i<n;i++)
	{
		if(cp(a[i]))
		{
			tong += a[i];
			kt=true;
		}
	}
	
	if(kt)
	{
		cout<<tong;
	}
	else
	{
		cout<<-1;
	}
	
	return 0;
}
