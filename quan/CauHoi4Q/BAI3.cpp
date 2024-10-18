#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b!=0) {
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}

int main() {
    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;

    if (a<1||b<1||c<1||a>=100000||b>=100000||c>=100000) {
        return 1;
    }

    int soLon = max(max(a, b),c);
    int Uoc = gcd(gcd(a, b),c);

    cout<<soLon<<endl;
    cout<<Uoc<<endl;

    if (a*a==b*b+c*c||b*b==a*a+c*c||c*c==a*a+b*b) {
        cout<<"("<<a<<","<<b<<","<< c << ") la bo ba pitago" << endl;
    } else {
        cout<<"("<<a<<","<<b<<","<<c<<") khong la bo ba pitago"<<endl;
    }

    return 0;
}

