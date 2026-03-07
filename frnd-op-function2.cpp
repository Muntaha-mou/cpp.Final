#include<bits/stdc++.h>
using namespace std;
class coord
{
    int x,y;
public:
    coord()
    {
        x=0;
        y=0;
    }
    coord(int i,int j)
    {
        x=i;
        y=j;
    }
    void display()
    {
        cout<<"x="<<x<<endl<<"y="<<y<<endl;
    }
    friend coord operator+(coord ob1,int i);
    friend coord operator+(int i,coord ob1);
};
coord operator+(coord ob1,int i)
{
    coord temp;
    temp.x=ob1.x+i;
    temp.y=ob1.y+i;
    return temp;
}
coord operator+(int i,coord ob1)
{
    coord temp;
    temp.x=i+ob1.x;
    temp.y=i+ob1.y;
    return temp;
}
int main()
{
    coord o1(10,10);
    coord o2=o1+10;
    o2.display();
    o2=99+o1;
    o2.display();
    return 0;
}
