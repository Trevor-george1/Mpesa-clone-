// Mpesa clone
#include <iostream>
using namespace std;

class Mpesa {
    private:
        int mobile;
        int balance = 100;
        int total =0;

    public:
        
        void send_money() {
            cout<<"Enter Number: "<<endl;
            cin>>mobile;

            cout<<"Enter amount(ksh): "<<endl;
            cin>>total;
            
            if(balance < total){
                cout<<"Insufficient funds to complete transaction"<<endl;
            }
            else {
                balance = balance - total;
                cout<<"Confirmed! Amount"<<" "<<total<<"ksh"<<" "<<"sent to"<<" "<<mobile<<".Balance is: "<<balance<<"Ksh"<<endl;
            }

            
        }

        void withdraw() {
            int agent_number;
            cout<<"Enter agent number: "<<endl;
            cin>>agent_number;

            cout<<"Enter amount: "<<endl;
            cin>>total;

            if(balance < total){
                cout<<"Insufficient funds to complete transaction"<<endl;
            }
            else {
                balance = balance - total;
                cout<<"Confirmed! Amount"<<" "<<total<<"ksh"<<" "<<"withdrwan"<<" "<<"Balance is: "<<balance<<"Ksh"<<endl;
            }
        }


        void airtime() {
            cout<<"Enter amount: "<<endl;
            cin>>total;
            if(balance < total){
                cout<<"Insufficient funds to complete transaction"<<endl;
            }
            else {
                balance = balance - total;
                cout<<"Confirmed! Amount"<<" "<<total<<"ksh"<<" "<<"bought"<<" "<<".Balance is: "<<balance<<"Ksh"<<endl;
            }
        }

        void deposit() {
            int deposit;
            int pin;

            cout<<"Enter pin: "<<endl;
            cin>>pin;

            if(pin == 1234) {
                cout<<"Enter amount to deposit: "<<endl;
                cin>>deposit;
                if(deposit > 10000) {
                    cout<<"Amount is above limit"<<endl;
                }
                else{
                balance = balance + deposit;
                cout<<"Your balance is"<<" "<<balance<<endl;

            }
               

            }
            
            
            
         }

        void mybalance() {
            int pin;
            cout<<"Enter pin: "<<endl;
            cin>>pin;

            if(pin == 1234) {
                cout<<"Your balance is"<<" "<<balance<<endl;

            }

            else {
                cout<<"Invalid pin.Try again!"<<endl;
            }
        }

            
       


};
int main() {
    Mpesa m1;
    int choice;

    while (1){
        cout<<"\n****WELCOME TO MPESA TOOLKIT(BY Dr Trev)"<<endl;
        cout<<"Enter a choice: "<<endl;
        cout<<"1. Send money"<<endl;
        cout<<"2. withdraw"<<endl;
        cout<<"3. Buy airtime"<<endl;
        cout<<"4. deposit"<<endl;
        cout<<"5. Mybalance"<<endl;
        cout<<"6. exit"<<endl;
        cin>>choice;


        switch (choice) 
        {
        case 1:
            m1.send_money();
            break;
        case 2:
            m1.withdraw();
            break;
        case 3:
            m1.airtime();
            break;
        case 4:
            m1.deposit();
            break;
        case 5:
            m1.mybalance();
            break;
        case 6:
            exit(1);
            break;
        
        default:
            cout<<"\nInvalid choice"<<endl;
        }
    }
    
    
    
    

    return 0;
}