#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;

    for(int i = 1; i<=5; i++)
    {
        v.push_back(i);
    }
    v.pop_back();
    v.erase(v.begin()+0);
    v.insert(v.begin()+0,10);
    v.insert(v.begin()+1,3, 11);
    for(int i = 0; i<v.size(); i++)
    {
        cout<<v.at(i)<<" ";
    }

    cout<<endl;
    cout<<v.front()<<endl;
    cout<<v.back()<<endl;
    v.clear();
    cout<<v.size()<<endl;

    if(v.empty())
    {
        cout<<"Empty Vector"<<endl;
    }
}
