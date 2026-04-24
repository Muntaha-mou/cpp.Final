#include<bits/stdc++.h>
using namespace std;
void checkmarks(int marks)
{
    if(marks<0||marks>100)
    {
        throw invalid_argument("inalid marks entered");
    }
}
int main()
{
   int marks;
   cout<<"Enter marks:";
   cin>>marks;
   try
   {
       checkmarks(marks);
       cout<<"valid marks:"<<marks<<endl;

   }
   catch(const invalid_argument &e)
   {
       cout<<e.what()<<endl;
   }
   return 0;
}
