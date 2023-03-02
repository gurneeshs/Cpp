// Simple Calculator
#include <iostream>
using namespace std;

int main()
{
    int a,b,c=0,d,e=1;
    char g,h;
    cout<<"Press O/F to On/OFf the Calculator"<<endl;
    cin>>g;    
    while (g=='O'|| g=='o')
    {
        cout<<"SIMPLE CALCULATOR:"<<endl;
        cout<<"1. Addition"<<endl;
        cout<<"2. Subtraction"<<endl;
        cout<<"3. Multiplication"<<endl;
        cout<<"4. Division"<<endl;
        cout<<"5. To Check Given number is Prime or not"<<endl;
        cout<<"6. To Check Given number is even or odd"<<endl;
        cout<<"Enter your Choice:"<<endl;
        cin>>a;

        switch (a)
        {
            case 1:
                cout<<"Enter the numbers and press enter:"<<endl;
                cout<<"Press 0 to add:"<<endl;

                while (b>0)
                {
                    cin>>b;
                    c=c+b;
                    if (b==0)
                    {
                        break;
                    }
                }
                cout<<c<<endl;
                cout<<"Press O/F to On/OFf the Calculator"<<endl;
                cin>>g;
                break;
            case 2:
                cout<<"Enter the two numbers"<<endl;
                cin>>b>>c;

                d=b-c;
                cout<<d<<endl;
                cout<<"Press O/F to On/OFf the Calculator"<<endl;
                cin>>g;
                break;

            case 3:
                cout<<"Enter the numbers and press enter:"<<endl;
                cout<<"Press 1 to Multiply"<<endl;

                while (b>=1)
                {
                    cin>>b;
                    e=e*b;
                    if (b==1)
                    {
                        break;
                    }
                }
                cout<<e<<endl;
                cout<<"Press O/F to On/OFf the Calculator"<<endl;
                cin>>g;
                break;
            case 4:
                cout<<"Enter the two numbers:"<<endl;
                cin>>b>>c;

                int f;
                f=b/c;
                cout<<f<<endl;
                cout<<"Press O/F to On/OFf the Calculator"<<endl;
                cin>>g;
                break;
            
            case 5:
                cout<<"Enter the Number"<<endl;
                cin>>b;

                for (c=2;c<b;c++)
                {
                    if (b%c==0)
                    {
                        cout<<"Non Prime"<<endl;
                        break;
                    }
                }
                if (b==c)
                    {
                        cout<<"Prime "<<endl;
                    }
                cout<<"Press O/F to On/OFf the Calculator"<<endl;
                cin>>g;
                break;

            case 6:
                cout<<"Enter the Number:";
                cin>>b;

                if (b%2==0)
                {
                    cout<<"Even Number"<<endl;

                }
                else
                {
                    cout<<"Odd Number"<<endl;
                }
                cout<<"Press O/F to On/OFf the Calculator"<<endl;
                cin>>g;
                break;
            default:
                cout<<"Invalid Choice";
                break;
        }
        //cout<<"Press O/F to On/OFf the Calculator"<<endl;
        //cin>>h;

    }

}
