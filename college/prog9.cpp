//To implement Stack Using Virtual function
#include <iostream>
using namespace std;

int stack[10],top=-1;

class Virtualf
{
    virtual void push(){}
    virtual void pop(){}
    virtual void traverse()=0;
};

class Myclass:public Virtualf
{
    public:
    void push()
    {
        int item;
        if(top==9)
        {
            cout<<"Stack is full"<<endl;
        }
        else
        {
            top=top+1;
            cout<<"Enter the Item:"<<endl;
            cin>>item;
            stack[top]=item;
            cout<<"Item Inserted Successfully"<<endl;
        }
    }

    void pop()
    {
        int item;
        if (top==-1)
        {
            cout<<"Stack is Empty!";
        }
        else{
            item=stack[top];
            top=top-1;
            cout<<"Deleted item is:"<<item<<endl;
        }
    }

    void traverse()
    {
        if(top==-1)
        {
            cout<<"Stack is Empty!"<<endl;
        }
        else{
            cout<<"[";
            for (int i=0;i<=top;i++)
            {
                cout<<stack[i]<<" ";
            }
            cout<<"]"<<endl;
        }
    }
};

int main()
{
    Myclass o1;
    int choice;
    do{
        cout<<endl;
        cout<<"1.Push into Stack"<<endl;
        cout<<"2.Pop from Stack"<<endl;
        cout<<"3.Traverse the Stack"<<endl;
        cout<<"Enter Your Choice"<<endl;
        cin>>choice;
        switch (choice)
        {
        case 1:
            o1.push();
            o1.traverse();
            break;
        
        case 2:
            o1.pop();
            o1.traverse();
            break;
        
        case 3:
            o1.traverse();
            break;
        
        default:
            break;
        }
    }while(choice!=0);
    return 0;
}