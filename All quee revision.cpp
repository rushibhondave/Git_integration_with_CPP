
        //Bank Management System in C++

#include<iostream>
#include<fstream>
#include<cctype>
#include<iomanip>
using namespace std;


 class bank
{
 	
 	private:
 		string name;
		 string adress;
		    string email;
 		      int Mno,Ano;
 		        int acc_no;
 		 
 	
 	public: 
   
    void create_acc();
    void updateinfo_acc();
    void display(); 
    void deposite_acc();
	void withdraw_acc();	
	void acc_enquiry();
	void apply_for_cards();
	void Transfer_money();
	void delate_acc();
	void display_1();
	void exist();

	
    
};


void bank :: create_acc()
{   
     cout<<"\nEnter the Applicant your email address::";
	 cin>>email;
	 
	  
	 cout<<"\nEnter the Applicant full name::";
	 cin>>name;
	 
	 cout<<"\nEnter the Applicant full adress::";
	 cin>>adress;
	 
	 cout<<"\nEnter the account no::";
	 cin>>acc_no;
	 
	  cout<<"\nEnter the moblie no::";
	 cin>>Mno;
	 
	 cout<<"\nEnter the adhar no::";
	 cin>>Ano;
	 
	 cout<<"******************************************************************\n\n\n";
	 
    display();
	 
	 cout<<"\n\n";

}


void bank :: updateinfo_acc()
{
	
	int ch;
	do
	{
    cout<<"\nPlease enter key you want change update info \n1.NAME\n2.mobile \n3.Address\n4.email\n5.LEAVE \n Press key::";
	cin>>ch;
	

	
	switch(ch)
	{
	
	  case 1:
	  		cout<<"\nReenter the Applicant full name::";
	        cin>>name;
	        cout<<"\n";
	        cout<<"Name has update::"<<name;
	        
	        cout<<"\n\n\n******************************************************************\n\n\n";
	        
	     break;
	  
	  
	  case 2:
	       cout<<"\nReenter the moblie no::";
	       cin>>Mno;
	       cout<<"\n";
	       cout<<"mobile no has update::"<<Mno;
	       
	       cout<<"\n\n\n******************************************************************\n\n\n";
	     break;
	
	  
	  case 3:   
	        cout<<"\nReenter the Applicant full adress::";
	        cin>>adress;
			cout<<"\n"; 
			cout<<"Address has update::"<<adress; 
			
			cout<<"\n\n\n******************************************************************\n\n\n"; 
	      break;	
		
	 case 4:
	  
	     	cout<<"\nReenter the Applicant Email id::";
	        cin>>email;
	        cout<<"\n";
	        cout<<"Email ddress has update::"<<email;
	        
	        cout<<"\n\n\n******************************************************************\n\n\n";
	 	  break;
	 	  
	case 5:
		left;
		cout<<"\n\n\n******************************************************************\n\n\n";
		 break;
	  

 default:
 	cout<<"\n\n\ninvalid key you eneter plz cheak\n\n\n";

	}    

   }while(ch!=5);
	 

	
	
	
}

 

void bank ::display()    //show for created
	 {   
	 	 
	 	cout<<"\n\n";
	 	cout<<"\nCOUNGRATULATIONS YOUR ACCOUNT HAS CREATED ::";
	 	cout<<"\n\n";
	 	cout<<"\nApplicant full name::"<<name;
	 	cout<<"\n\n";
	 	cout<<"\nApplicant full adress::"<<adress;
	 	cout<<"\n\n";
	 	cout<<"\nApplicant  accout no::"<<acc_no;
		cout<<"\n\n";
		cout<<"\nApplicant  mobile no::"<<Mno;
		cout<<"\n\n";
	 	cout<<"\nApplicant adhar no::"<<Ano;
	 	cout<<"\n\n";
	 	
	 cout<<"\n\n******************************************************************\n\n\n";

	 	
	 	
	 }

 

void bank ::display_1()    //DATA STORE SHOWS ON DIESPLAYy
	 {   
	 	 
	 	cout<<"\n\n";
	 	cout<<"\nCOUNGRATULATIONS YOUR ACCOUNT HAS CREATED ::";
	 	cout<<"\n\n";
	 	cout<<"\nApplicant full name::"<<name;
	 	cout<<"\n\n";
	 	cout<<"\nApplicant full adress::"<<adress;
	 	cout<<"\n\n";
	 	cout<<"\nApplicant  accout no::"<<acc_no;
		cout<<"\n\n";
		cout<<"\nApplicant  mobile no::"<<Mno;
		cout<<"\n\n";
	 	cout<<"\nApplicant adhar no::"<<Ano;
	 	cout<<"\n\n";
	 	
	 cout<<"\n\n******************************************************************\n\n\n";

	 	
	 	
	 }


void bank :: deposite_acc()
{
	int temp,acc_no,amount,predeposit=5000;
	 
	cout<<"\t\t\t\t\nWCOME IN THUG BANK";
	cout<<"\n\n";
	
	cout<<"\nEnter the account no::";
	 cin>>acc_no;
	 
	 cout<<"\nPlease Enter the account no for confirm::";
	 cin>>temp;
	 
	 
	 if(temp==acc_no)
	 {
	 	
	 	cout<<"\nEnter the ammount you deposite::";
	 	cin>>amount;
	 	
	 	
	 	 predeposit+=amount;
	 	 
	 	 cout<<"\n\nTotal amount::"<<predeposit<<endl;
	 	
	 	 
	 	 cout<<"\n\n******************************************************************\n\n\n";

	 }
	
	 else 
	 {
	 	cout<<"\n\nSORRY WRONG ACCOUNT NUMBER YOU ENTER ";
	 	
	 	 cout<<"\n\n\n******************************************************************\n\n\n";

	 }
	 
	 
	
}


void bank :: withdraw_acc()
{

   int temp,acc_no,amount,predeposit=5000;
	 
	cout<<"\t\t\t\t\nWCOME IN THUG BANK";
	cout<<"\n\n";
	
	cout<<"\nEnter the account no::";
	 cin>>acc_no;
	 
	 cout<<"\nPlease Enter the account no for confirm::";
	 cin>>temp;
	 
	 
	 if(temp==acc_no)
	 {
	 	
	 	cout<<"\nEnter the ammount you withdraw::";
	 	cin>>amount;
	 	
	 	 predeposit= predeposit-amount;
	 	 
	  	 cout<<"\n\nTotal amount::"<<predeposit;
	  	 
	  	 
	 	 cout<<"\n\n******************************************************************\n\n\n";
 
	 }
	
	 else 
	 {
	 	cout<<"\nSORRY WRONG ACCOUNT NUMBER YOU ENTER ";
	 	cout<<"\n\n\n******************************************************************\n\n\n";

	 }
	 
	 
	
}






void bank ::acc_enquiry()
{
	
	  int total_balance=5000,acc_no,temp;
	  
	    
	     cout<<"\n\nEnter the account no::";
	 cin>>acc_no;
	 
	 cout<<"\n\nPlease Enter the account no for confirm::";
	 cin>>temp;
	 
	 
	 if(temp==acc_no)
	 {
	 	total_balance=predeposite+amount;
	      cout<<"Total ammount in your accountis ::"<<total_balance;
     }
     
     else
     {
     	cout<<"Invalid account number";
	 }
	
}




void bank::Transfer_money()
{
	int total_balance,balance,acc_no,temp;
	

	cout<<"\t\t\t\t\nWCOME IN THUG BANK";
	cout<<"\n\n";
	
	cout<<"\n\nEnter the account no::";
	 cin>>acc_no;
	 
	 cout<<"\n\nPlease Enter the account no for confirm::";
	 cin>>temp;
	 
	 
	 if(temp==acc_no)
	 {
	 	cout<<"\n\nEnter the amount your transfer::";
	 	
	 	cin>>balance;
	
	   cout<<"\n\nEnte the total_balance  in your account::";
	 	
	 	cin>>total_balance;
	 	
	}
	 		 
	  if(balance<total_balance)
	 {
	 	
	 	
	 		cout<<"\n\nAMOUNT SUCCESSfULLY TRASNFER !";
	 		
	 		cout<<"\n\n\n******************************************************************\n\n\n";

	 	  
	 	
	 }
	
	
	 else 
	 {
	 	cout<<"\nSORRY! TRANSFER FAILED ! Reason: Insufficient Balance. ";
	 	
	 	cout<<"\n\n\n******************************************************************\n\n\n";

	 }
	 
	 
	
}
	
void bank::apply_for_cards()
{
	
	int acc_no,card,ch;
	string name;
     
    
     
     cout<<"Select card 1.Debit card 2.Credit card \n press key ::";
     cin>>ch;
     
     switch(ch)
     {
     	
     	case 1:
     	    cout<<"\n\nbEnter the account no::";
            cin>>acc_no;
            cout<<"\n\nEnter the Applicant name::";
            cin>>name;
            cout<<"\n\nReuqest has sent!!";
             cout<<"\n\n\n******************************************************************\n\n\n";

            
        break;
        
        
        case 2:
        	cout<<"\nEnter the account no::";
            cin>>acc_no;
            cout<<"\n\nEnter the Applicant name::";
            cin>>name;
            cout<<"\n\nReuqest has sent!!";
            cout<<"\n\n\n******************************************************************\n\n\n";

             
        break;
    
     	
     	default:
     		cout<<"\ninvalid Key you enter plaese corrct key enter ";
     		 cout<<"\n\n\n******************************************************************\n\n\n";

	 }
	
	
	
}




void bank::delate_acc()

{
	int acc_no,temp,ch;
	string name;
	char T,R;
	
	cout<<"\n\n\nEnter the account no::";
	cin>>acc_no;
	
	cout<<"\n\nPlease enter the account no for confirmation::";
	cin>>temp;
	
	if(temp=acc_no)
	
	{  
	   cout<<"\n\n\nEnter the 1.Temporary deactivate 2 Remove account\n press key ::";
	   cin>>ch;
	   
	   switch(ch)
	   {
	   	
	   	 case 1:
	   	 	cout<<"\n\n\npleae press T forTemporary deactivate::";
	   	 	cin>>T;
	   	 	cout<<"\n\n\nYOUR ACCOUNT HAS Temporary deactivate !";
		    cout<<"\n\n\n******************************************************************\n\n\n";
	   	 	
	     	break;
	   	
	   	case 2:
	   		
	   	 	cout<<"\n\n\nplease  press R for Remove account::";
	   	 	cin>>R;
				
			cout<<"\n\n\nYOUR ACCOUNT HAS SUCCEFULLY REMOVE !";
		    cout<<"\n\n\n******************************************************************\n\n\n";
            
            break;
            
            
	   	 default:
	   	cout<<"\n\n\ninvalid key ente ";
	   	 cout<<"\n\n\n******************************************************************\n\n\n";
		
		   
	   	
	   }
	   
	  
		
		
	}
	

	
}



void bank ::exist()
{
	cout<<"\nTHANKS FOR VISTING THUG BANK!!!!!";
	 cout<<"\n\n((((((///(((((((((((((((((!!((((Phir jarur Ana))))!!)))))))))/////))))))))))))))\n\n\n";

}



main()
{

    cout<<"\n\n\t\t\t\tWLECOME TO THUG BANK"<<endl;
        bank b1;
            int i;
   
do
{

cout<<"Enter the key";
cout<<"\n";
cout<<"\nCreate account-1\n";
cout<<"\nUpdate inforamation-2\n";
cout<<"\nDeposite-3\n";
cout<<"\nwithdraw-4\n";
cout<<"\nAccount Enquiry-5\n";
cout<<"\nTransfer money-6\n";
cout<<"\nApplay for cards-7\n";
cout<<"\ndisplay-8\n";
cout<<"\ndelate_acc-9\n";
cout<<"\nExit -10\n";

cout<<"\n\n\t\t\tenter the choose option::";
cin>>i;

switch(i)
{
	
	case 1:
	b1.create_acc();
	break;

	case 2:
	b1.updateinfo_acc();
	break;
	
	case 3:
	b1.deposite_acc();
	break;
	
	case 4:
	b1.withdraw_acc();
	break;
	
	case 5:
	b1.acc_enquiry();   
	break;
	
	case 6:
	b1.Transfer_money();
	break;
	
	case 7:
	b1.apply_for_cards();
	break;
	
	case 8:
	b1.display();
	break;
	
	case 9:
	b1.delate_acc();
	break;
	
	
	case 10:
	 b1.exist();
	 break;
	
	

	
default:
printf("invalid key you are press press correct key");
cout<<"\n\n\n******************************************************************\n\n\n";


		
}

}while(i!=10);
}



	




















