/*
Write a C++ program that will accept the following information for each team in a cricket or a football league.

General Information

Team name

Number of wins

Number of losses

For a cricket team, add the following information:

No. of fours

No. of sixes

No. of runs

No. of ties

For a football team, add the following information:

No. of goals

No. of ties

No. of penalties

Step:1

Enter this information for all of the teams in the league. Then reorder and print the list of teams according to their win-lose records. Store the information in an array of structures, where each array elements (i.e. each structure) contains the information for a single team.

Make use of a Structure to represent the variable information (either cricket or football) that is included as a part of the structure. This Structure should itself contain two structures, one for cricket – related statistics and the other for football related statistics.

Note: use enum type in comparing menu options.

 

Note : Try executing the code in your own compiler to test for different inputs and get the desired output.

Starter Code:*/

#include<iostream>
using namespace std;

struct cricket
{
    string teamname;
    int wins;
    int losses;
    int ties;
    int four;
    int six;
    int runs;
};

void printinfo(cricket cteam){
    cout<<"**********************************************"<<endl;
    cout<<"Team Name: "<<cteam.teamname<<endl;
    cout<<"Wins: "<<cteam.wins<<endl;
    cout<<"Loses: "<<cteam.losses<<endl;
    cout<<"Sixes: "<<cteam.six<<endl;
    cout<<"Fours: "<<cteam.four<<endl;
    cout<<"Runs: "<<cteam.runs<<endl;
    cout<<endl;

}

int main()
{
    int num;
    cout<<"Enter Number of Cricket teams:";
    cin>>num;

    cricket* teams = new cricket[num];
    cout<<"Enter Team Information"<<endl;
    for(int i=0;i<num;i++){
        cout<<"Enter Team Name:";
        cin>>teams[i].teamname;
        cout<<"Enter Team Wins:";
        cin>>teams[i].wins;
        cout<<"Enter Team Losses:";
        cin>>teams[i].losses;
        cout<<"Enter Team Ties:";
        cin>>teams[i].ties;
        cout<<"Enter Team Fours:";
        cin>>teams[i].four;
        cout<<"Enter Team Sixes:";
        cin>>teams[i].six;
        cout<<"Enter Team Runs:";
        cin>>teams[i].runs;
    }

    for (int i=0;i<num;i++){
        printinfo(teams[i]);
    }
    delete[] teams;
    return 0;
} 

