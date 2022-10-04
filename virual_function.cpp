#include <iostream>

using namespace std;
class a
{
public:
    virtual void print()
    {
        cout<<"vritual print function class a"<<endl;
    }
    virtual void show()
    {
        cout<<"vritual show function class a"<<endl;
    }
    void display()
    {
        cout<<"Non virtual function function in class a"<<endl;
    }
};

class b:public a
{
     void show()
    {
        cout<<"vritual show function class b"<<endl;
    }
    void display()
    {
        cout<<"Non virtual function function in class b"<<endl;
    }
};


class c: public a
{
     void print()
    {
        cout<<"vritual show function class c"<<endl;
    }
    void display()
    {
        cout<<"Non virtual function function in class c"<<endl;
    }
};
int main()
{
    a *bptr;
    //a b1;
   b d;
  //  bptr=&b1;
   bptr=&d;
    bptr->print();
    bptr->show();
    bptr->display();

    c d1;
    bptr=&d1;
    bptr->print();
    bptr->show();
    bptr->display();


    return 0;
}
