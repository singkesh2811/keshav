#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int> pq;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        pq.push(a);
    }
    while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
}
