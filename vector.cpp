#include<bits/stdc++.h>
using namespace std;
void printvec(vector<int>v)
{
   cout<<"size :"<<v.size()<<endl;
   for(int i=0;i<v.size();i++)
   {
    cout<<v[i]<<endl;
   }
}
int main()
{
    vector<int>v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
       cin>>x;
       printvec(v);
       v.push_back(x);
    }
    printvec(v);
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<endl;
    }
    for(int i:v)
    {
        cout<<v[i];
    }
    
}