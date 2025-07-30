#include <iostream>
using namespace std;
int main(){
     // fibonari series
    int a;
    cout<<"Enter a number";
    cin>>a;
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<i+j <<" ";
        }cout<<endl;
    }
    cout<<endl;
    // 2 multiple
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=10;j++)
        {
            cout<<
            i*j<<" ";
        }cout<<endl;
    }
}