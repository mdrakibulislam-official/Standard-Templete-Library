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

    vector<int>:: iterator it;

    for(it=v1.begin(); it!=v1.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}
