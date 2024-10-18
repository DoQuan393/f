#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	cin>>s;
	unordered_map<char, int> dem;
	
	
	int demm = 0;
	for(char c : s)
	{
		dem[c]++;
	}
	
	for(const auto & pair : dem)
	{
		demm++;
	}
	cout<<demm<<endl;
	
	for(const auto & pair : dem)
	{
		cout<<pair.first<<" "<<pair.second<<endl;
	}
	
	return 0;
}
