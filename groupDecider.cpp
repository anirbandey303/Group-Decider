#include<iostream>
#include<stdio.h>
#include<math.h>
#include <cmath>
using namespace std;

class GroupDecider
{	
	public:
	int groupNumber(float teamLimit, float rollNo)
	{
		float yourGroupNumber;
		yourGroupNumber = ceil(rollNo/teamLimit);
		return yourGroupNumber;
	}
};

int main()
{
	GroupDecider obj;
	float limit, roll;
	cout<<"******************** Welcome to Group Deciding Application ********************\n"<<endl;;
	while(1)
	{
		int a;
		int yourGroupNumber;
		cout<<"\n\t\t ********** MENU **********"<<endl;
		cout<<"\n\t 1. Find my Team"<<endl;
		cout<<"\n\t 2. Exit"<<endl;
		cout<<"\n\t Enter your choice: ";
		cin>>a;
		switch(a)
		{
			case 1:
				cout<<"\n\t Enter maximum members possible in a team: ";
				cin>>limit;
				cout<<"\n\t Enter your Roll Number: ";
				cin>>roll;
				yourGroupNumber = obj.groupNumber(limit, roll);
				cout<<"\n\t Your Team Number is: "<<yourGroupNumber<<endl;
				break;
			case 2:
				exit(0);
				break;
			default:
				cout<<"Invalid Choice! Please Try Again!";
				break;
		}
	}
}
