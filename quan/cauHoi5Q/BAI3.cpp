#include <bits/stdc++.h>
using namespace std;

int hoanT(int n){
    int tong = 0;
    for(int i = 1; i <= sqrt(n); i++){
        if(n % i == 0){
            tong += i;
            if(i != n / i){
                tong += n / i;
            }
        }
    }
    if(tong - n == n){
        return 1;
    }
    return 0;
}

int a[100005];
int main()
{
	int n;
	cin>>n;
	
	bool kt = false;
	int dem=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	for(int i=0;i<n;i++)
	{
		if(hoanT(a[i]))
		{
			dem++;
			kt=true;
		}
	}
	
	if(!kt)
	{
		cout<<0;
	}
	else
	{
		cout<<dem<<endl;
	}
	
	for(int i=0;i<n;i++)
	{
		if(hoanT(a[i]))
		{
			cout<<a[i]<<" ";
		}
	}
	
	return 0;
}
