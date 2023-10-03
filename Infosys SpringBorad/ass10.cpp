/* 
Implementing Encapsulation
Flight Information
*/
#include <iostream>
#include <string>
using namespace std;

class FlightInfo{
    int flightid;
    string flighttype;
    string origin;
    string destination;

    public:
        	
            void setFlightID(){
                cout<<"Enter Fight ID";
                cin>>flightid;
            }
            void setFlightType(){
                cout<<"Enter Flight Type";
                cin>>flighttype;
            }
            void setOrigin(){
                cout<<"Enter Flight Origin";
                cin>>origin;
            }
            void setDestination(){
                cout<<"Enter Flight Destination";
                cin>>destination;
            }

            int getFlightID(){
                return flightid;
            }
            string getFlightType(){
                return flighttype;
            }
            string getOrigin(){
                return origin;
            }
            string getDestination(){
                return destination;
            }

};

int main(){
    FlightInfo f1;
    cout<<"Enter Flight Information"<<endl;
    f1.setFlightID();
    f1.setFlightType();
    f1.setOrigin();
    f1.setDestination();

    cout<<"Flight ID:"<<f1.getFlightID()<<endl;
    cout<<"Flight Type:"<<f1.getFlightType()<<endl;
    cout<<"Flight Origin:"<<f1.getOrigin()<<endl;
    cout<<"Flight Destination:"<<f1.getDestination()<<endl;


    return 0;
}