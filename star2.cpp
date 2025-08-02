#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a row";
    cin>>a;
    for (int i=a; i>=1; i--)
    {
        for(int j=i; j>=1; j--)
        {
            cout<<j<<"  ";
        }
        cout<<endl;
    }
}