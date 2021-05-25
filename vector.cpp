#include<bits/stdc++.h>
using namespace std;
int main()
{
//creating a vector
vector<int>ve;

//pushing elements into a vector
ve.push_back(10);
ve.push_back(20);

//another way tp push elements into vector
ve.emplace_back(30);

//poping element from the vector
ve.pop_back();

//creating a iterator
vector<int>::iterator it=ve.begin();

//accesing vector elements using iterator
//1st way
for(vector<int>::iterator it=ve.begin();it!=ve.end();it++)
{
cout<<*it<<endl;
}

//2nd way
for(it=ve.begin();it!=ve.end();it++)
{
cout<<*it<<endl;
}

//3rd way using auto keyword
for(auto it:ve)
{
cout<<it<<endl;
}

//finding element in an vector
it=find(ve.begin(),ve.end(),23);
//if present return position and value else return 0
cout<<it -ve.begin()<<"\t"<<*it;

}


