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
            cout<<(char)(j+96)<<"  ";  //  char is use to convert a munber into character        
        }
        cout<<endl;
    }
}