#include<bits/stdc++.h>
using namespace std;
class shape
{
public:
    virtual void draw()
    {
        cout<<"Draw a shape"<<endl;
    }

};
class circle:public shape
{
    void draw()
    {
        cout<<"Draw a circle"<<endl;
    }
};
class square:public shape
{
    void draw()
    {
        cout<<"Draw a square"<<endl;
    }
};
class triangle:public shape
{
    void draw()
    {
        cout<<"Draw a triangle"<<endl;
    }
};
int main()
{
    shape *s;
    circle c;
    square sq;
    triangle t;
    s=&c;
    s->draw();
    s=&sq;
    s->draw();
    s=&t;
    s->draw();
    return 0;
}
