#include<iostream>
#include<string>
using namespace std;
class Move
{
    private:
    string name;
    int num;
    public:
    Move(string nam,int n)
    :num(n),name(nam)
    {

    }
    string getName()
    {
        return name;
    }
    int getNum()
    {
        return num;
    }
    void disp()
    {
        cout<<"Name :"<<name<<endl<<"Number :"<<num<<endl;
    }


};
int main()
{
    Move m("TKello",2119);
    m.disp();
}