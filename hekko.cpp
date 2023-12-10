#include<iostream>
using namespace std;
int main()
{
    int row;
    cout<<"enter your rows "<<endl;
    cin>>row;
    for(int i=1; i<=row; i++)
    {
      for(int k=row-i;k>0; k--){
      cout<<" ";}
      for(int j=2*i-1; j>0; j--)
      {
        cout<<"*";
      }
      cout<<endl;
    }
    return 0;
}
