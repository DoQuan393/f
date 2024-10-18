#include <bits/stdc++.h>
using namespace std;
int main()
{
	bool kt = false;
	string s;
	cin>>s;
	int tong = 0;
	for(char c : s)
	{
		if(isdigit(c))
		{
			tong+=c-'0';
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
