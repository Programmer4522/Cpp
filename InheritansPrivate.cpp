#include<iostream>
using namespace std;

class ractangle
{
private:
int length;
int breath;

public:
void setlength(int l)
{
    length=l;
}
void setbreath(int b)
{
    breath=b;
}

int getlength()
{
    return length;
}
int getbreath()
{
    return breath;
}
int area()
{
    return length*breath;
}
};

class cube:public ractangle
{
private:
int hight;

public:
cube(int l=0,int b=0,int h=0)
{
    setlength(l);
    setbreath(b);
    hight=h;
}

int volume()
{
    return getlength()*getbreath()*hight;
}
};


int main()
{
    cube c1(5,4,3);
    cout<<"Area="<<c1.area()<<endl;
    cout<<c1.volume();
}