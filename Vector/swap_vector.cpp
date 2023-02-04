#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v1;

    v1.push_back(7);
    v1.push_back(8);
    v1.push_back(1);
    v1.push_back(10);
    v1.push_back(15);
    v1.push_back(71);

    vector<int> v2;
    v2.push_back(1);
    v2.push_back(2);
    v2.push_back(3);

    for(int i = 0; i<v1.size(); i++)
    {
        cout<<v1.at(i)<<" ";
    }
    cout<<endl;

    for(int i = 0; i<v2.size(); i++)
    {
        cout<<v2.at(i)<<" ";
    }
    cout<<endl;

    swap(v1,v2);

    for(int i = 0; i<v1.size(); i++)
    {
        cout<<v1.at(i)<<" ";
    }
    cout<<endl;

    for(int i = 0; i<v2.size(); i++)
    {
        cout<<v2.at(i)<<" ";
    }
    cout<<endl;
}
