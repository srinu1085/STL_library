#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,long long int,greater<>>s;
    s["Srinu"]=9618300479;
    s["Shandu"]=8790479566;
    s.insert(make_pair("Ramu",1548645415));

    for(auto &S: s)
    {
        cout<<S.first<<" "<<S.second<<endl;
    }
    return 0; 
}