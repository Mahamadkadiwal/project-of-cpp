#include<iostream>
using namespace std;
main()
{
    cout<<"\t\tCAR PARKING"<<endl;
    int enter;
    int car=0,bike=0,reckshaw=0;
    while(true){
        system("CLS");
        cout<<"Press 1 to enter car"<<endl;
        cout<<"Press 2 to enter bike"<<endl;
        cout<<"Press 3 to enter reckshaw"<<endl;
        cout<<"Press 4 to show the record"<<endl;
        cout<<"Press 5 to delete the record"<<endl;
        cout<<"Press 6 to exit"<<endl;
        cin>>enter;
        
        if(enter==1){
            car++;
            system("CLS");
            cout<<"Car is Added"<<endl;
        }
        else if(enter==2){
            bike++;
            system("CLS");
            cout<<"Bike is Added"<<endl;
        }
        else if(enter==3){
            reckshaw++;
            system("CLS");
            cout<<"Reckshaw is Added"<<endl;
        }
        else if(enter==4){
            cout<<"Car "<<car<<endl;
            cout<<"Bike "<<bike<<endl;
            cout<<"Reckshaw "<<reckshaw<<endl;
        }
        else if(enter==5){
            car=0;
            bike=0;
            reckshaw=0;
            system("CLS");
            cout<<"All records has been deleted"<<endl;
        }
        else if(enter==6){
            exit(0);
        }
        else{
            cout<<"Invalid number please try again";
        }
    }
}