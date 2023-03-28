#include<iostream>
using namespace std;

void swap(int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}

int main()
{
    //Dev
int x=10,y=20;
swap(x,y);
cout<<x<<endl<<y;           
/*ahi call by reference ma x&y ne value change tay 6*/
return 0;
}
