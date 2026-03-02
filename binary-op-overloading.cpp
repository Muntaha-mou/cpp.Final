#include<bits/stdc++.h>
using namespace std;
class Distance
{
public:
    int feet,inch;
    Distance()
    {
        this->feet=0;
        this->inch=0;
    }
    Distance (int f,int i)
    {
        this->feet=f;
        this->inch=i;
    }
    Distance operator+(Distance const &ob)
    {
        Distance d3;
        d3.feet=this->feet+ob.feet;
        d3.inch=this->inch+ob.inch;
        return d3;
    }
};
int main()
{
    Distance d1(8,9);
    Distance d2(10,2);
    Distance c3;
    c3=d1+d2;
    cout<<"Total feet & inches:"<<c3.feet<<"'"<<c3.inch<<endl;
    return 0;
}
