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

    cout<<"After Reversing"<<endl;

    for(int i = 0; i<v1.size(); i++)
    {
        cout<<v1.at(i)<<" ";
    }
    cout<<endl;

    reverse(v1.begin(), v1.end());

    cout<<"\nBefore Reversing"<<endl;

    for(int i = 0; i<v1.size(); i++)
    {
        cout<<v1.at(i)<<" ";
    }
    cout<<endl;
}
