#include <iostream>
using namespace std;
int main()
{
    int a[10],n,x,y,i;
    cout<<"enter total val n:";
    cin>>n;
    cout<<"enter the elements:";
    for(i=0;i<n;i++)
       {
            cin>>a[i];
       }
       for(i=0;i<n;i++)
       {
            cout<<a[i];
       }
    cout<<"enter index and value";
    cin>>x>>y;
    a[x]=y;
    cout<<"after ";
     for(int j=0;j<n;j++)
        cout<<a[j];
        return 0;
}
