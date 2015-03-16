#include <iostream>
using namespace std;

int main()
{
  int n,a;
  cout<<"Please input a number:";
  cin>>n;
  while(1)
  {
    cout<<n<<" ";
    if(n==1) break;
    a=n%2;
    if(a==1) n=n*3+1;
    else n=n/2;
  }
  cout<<endl;
  return 0;
}
