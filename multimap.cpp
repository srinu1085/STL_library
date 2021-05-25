#include<bits/stdc++.h>
using namespace std;
//another way for multimap map<char,vector<int>>obj; 
int main()
{
    multimap<char,int>Multimap;
    Multimap.insert(make_pair('a',5));
    Multimap.insert(make_pair('a',2));
    Multimap.insert(make_pair('a',3));
    Multimap.insert(make_pair('b',3));
    /*for(auto& ele: Multimap)
    {
        cout<<ele.first<<" "<<ele.second<<endl;
    }*/
    auto range=Multimap.upper_bound('a');
    cout<<range->first<<" "<<range->second<<endl;

}