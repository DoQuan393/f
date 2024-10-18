#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int chuso = 0, chucai = 0, dacbiet = 0;
    for(char c : s){
        if(isdigit(c)){
            chuso++;
        }
        else if(isalpha(c)){
            ++chucai;
        }
        else{
            ++dacbiet;
        }
    }    
    
    cout<<chucai<<" "<<chuso<<" "<<dacbiet;
    return 0;
}
