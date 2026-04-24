#include<bits/stdc++.h>
using namespace std;
void checktemp(double temp)
{
    if(temp<-273.15)
    {
        throw invalid_argument("invalid input");
    }
}
int main()
{
    double temp;
    cout<<"enter temp="<<endl;
    cin>>temp;
    try
    {
        checktemp(temp);
        cout<<"valid input"<<endl;
    }
    catch(const invalid_argument &e)
    {
        cout<<e.what()<<endl;
    }
    return 0;
}
