#include<bits/stdc++.h>
using namespace std;
void checkage(int age)
{
    if(age<0||age>120)
    {
        throw invalid_argument("Invalid age entered.");
    }
}
int main()
{
    int age;
    cout<<"Entered age: "<<endl;
    cin>>age;
    try
    {
        checkage(age);
        {
            cout<<"valid age!"<<endl;
        }
    }
    catch(const invalid_argument &e)
    {
        cout<<e.what()<<endl;

    }
    return 0;
}
