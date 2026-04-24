#include<bits/stdc++.h>
using namespace std;
class librarysystem
{
protected:
    string title;
    int itemid;
public:
    void setdata(string t,int id)
    {
        title=t;
        itemid=id;
    }
    virtual int getborrowdays()=0;
    virtual void display()
    {
        cout<<title<<endl;
        cout<<itemid<<endl;
    }

};
class book:public librarysystem
{
    string author;
    int pages;
public:
    void setbookdata(string t,int id,string a,int p)
    {
       setdata(t,id);
       author=a;
       pages=p;
    }
    int getborrowdays()
    {
        return 14;
    }
    void display()
    {
        cout<<title<<endl;
        cout<<itemid<<endl;
        cout<<author<<endl;
        cout<<pages<<endl;
        cout<<getborrowdays()<<endl;
    }
};
class magazine:public librarysystem
{
    int issuenum;
public:
    void setmagdata(string t,int id,int s)
    {
        setdata(t,id);
        issuenum=s;
    }
    int getborrowdays()
    {
        return 7;
    }
    void display()
    {
        cout<<title<<endl;
        cout<<itemid<<endl;
        cout<<issuenum<<endl;
        cout<<getborrowdays()<<endl;
    }

};
int main()
{
    book b;
    magazine m;
    b.setbookdata("Bonolota",245,"Something",20);
    m.setmagdata("Queen",248,5);
    librarysystem *lb;
    lb=&b;
    lb->display();
    lb=&m;
    lb->display();
    return 0;
}
