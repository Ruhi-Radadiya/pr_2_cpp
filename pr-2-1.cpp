//1. WAP to make Railway Reservation System.
//Requirements:
//(A) User Input Train Number , Train Name , Source , Destination , Train Time.
//(B) Display Record By Search Train Number.
//(C) Minimum 3 Input Train Record.
#include<iostream>
#include<string>

using namespace std;

class Train 
{
	public:
	    int t_Num;
	    string t_Name;
	    string source;
	    string dest;
	    string t_Time;
	
	    Train(){}
	
	    Train(int t_Num, string t_Name, string source, string dest, string t_Time) 
		{
	        this->t_Num = t_Num;
	        this->t_Name = t_Name;
	        this->source = source;
	        this->dest = dest;
	        this->t_Time = t_Time;
	    }
	
	    void displayTrainDetails() 
		{
		    cout<< "\n\t---------------------------------------------";
			cout<< "\n\t|  Train number\t :- "<<t_Num<<"\t\t\t|";
			cout<< "\n\t|  Train name\t :- "<<t_Name<<"\t\t\t|";
			cout<< "\n\t|  Arriving at\t :- "<<t_Time<<"\t\t\t|";
			cout<< "\n\t|  Route\t :- From "<<source<<" to "<<dest<<"t|";
		    cout<< "\n\t---------------------------------------------";
		
	    }
	};
	
	Train trains[15];
	
	void addTrain() 
	{
	    static int count = 0;
	    if (count >= 15) 
		{
	        cout << "train are limited " << endl;
	        return;
	    }
	    int trainNumber;
	    string trainName, source, destination, trainTime;
	    
		cout<<"You are adding the train details now :- \n\n";
	    cout<<"\tEnter train number:- ";
	    cin>>trainNumber;
	
	    cout<<"\tEnter train name:- ";
	    cin>>trainName;
	
	    cout<<"\tEnter source:- ";
	    cin>>source;
	
	    cout<<"\tEnter destination:- ";
	    cin>>destination;
	
	    cout<<"\tEnter train time:- ";
	    cin>>trainTime;
	
		cout<<"\n\tYour train number is sucessfully added.";
		cout<<"\n\t-----------------------------------------";
		cout<<"\n\t   Train number\t :- "<<trainNumber;
		cout<<"\n\t   Train name\t :- "<<trainName;
		cout<<"\n\t   Arriving at\t :- "<<trainTime;
		cout<<"\n\t   Route\t :- From "<<source<<" to "<<destination;
	    cout<<"\n\t-----------------------------------------";
	    
	    		
	}
	
	void displayTrainByNumber() 
	{
	    int trainNumber;
	    int found = 0;
	
	    cout<<"Enter train number :- ";
	    cin>>trainNumber;
	
	    for (int i=0;i<15;i++) 
		{
	        if (trains[i].t_Num == trainNumber) 
			{
	            trains[i].displayTrainDetails();
	            found = 1;
	            break;
	        }
	    }
	
	    if (found==0) 
		{
	        cout << "\nThe entered number is not found\n" << endl;
	    }
	}

int main() 
{
    int choice;
    do 
	{
        cout << "\n1.ADD TRAIN DETAILS" << endl;
        cout << "2.SEARCH TRAIN BY NUMBER" << endl;
        cout << "3.EXIT" << endl;
        cout << "\nEnter your choice: ";
        cin >> choice;
		cout <<"\n-------------------------\n" ;
        switch (choice) 
		{
	        case 1:
	            addTrain();
	            break;
	        case 2:
	            displayTrainByNumber();
	            break;
	        case 3:
	            cout<<"EXIT...THANK YOU FOR VISIT..."<<endl;
	            break;
	        default:
	            cout <<"Your choice is Invalid..... Try again...."<<endl;
	            break;
        }
    }while(choice!=3);

    return 0;
}