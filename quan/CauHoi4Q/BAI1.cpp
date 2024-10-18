#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int tien = 1;
	
	int m;
	int m1;
	
	if(n==1)
	{
		tien*=10000;
		cout<<"so tien di taxi la: "<<tien;
	}
	else
	{
		if(n>2 && n<=10)
		{
			m = 9000;
			tien=tien*10000 + (m*n);
			cout<<"so tien di taxi la: "<<tien;
		}
		else
		{
			if(n>=11 && n<=50)
			{
				m= 9000;
				m1 = 8000;
				tien=tien*10000 + (m*n) + (m1*n);
				cout<<"so tien di taxi la: "<<tien;
			}
			else
			{
				if(n>50)
				{
				m = 9000;
				m1 = 8000;
				tien=(1*10000) + (m*n) + (m1*n);
				int tienn = tien * 90/100;
				cout<<"so tien di taxi la: "<<tienn;
				}
			}
		}
	}
	
	return 0;
}
