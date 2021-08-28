/*
NAMES:
    -SAMEER ABRAR KHAN
    -SYED ASAD HASHMI
ROLLNOS:
    -CS161113
    -CS161085
SECTION:
    -3B
TIME:
   -09:05 PM(START)
   -         (END)
DATE:
   -29/10/2017(START)
   -           (END)
IDEA BY:
    -SYED ASAD HASMI
    -SAMEER ABRAR KHAN
WRITTEN BY:
    -SAMEER ABAR KHAN
	-SYED ASAD HASHMI
SIGNETURES:
      - S A K(sameer abrar khan)
      - S A H(syed asad hashmi)
AIR LINE NAME: S A (
                      -S=sameer
                      -A=asad
                   )
ID:arham || azmiU
PASSCODE:SA786
*/
#include <iostream>
#include <conio.h>
#include <fstream>
#include<stdlib.h>
#include<string>
#include<windows.h>
using namespace std;

struct Node//Node
{
    //Structure
    //having linked list
    string Name;
    string Address;
    string Phone;
    string Passport;
    string Type;
    Node *next;
    Node *prev;
    int flightCode;
};
class Doubly
{//Doubly class
protected:
    int flightCode;

public:
    Node *head;

Doubly()
{
	head=NULL;
}

void view()
{
   //Function definition
    //Flights take off timings and plane name
	cout<<endl;
	cout<<endl;
	cout<<"\t\t\tCODE"<<"\t"<<"ROUTE"<<"\t"<<"\t"<<"\t"<<"TIMINGS"<<endl;
	cout<<"\t\t\t-----------------------------------------"<<endl;
	cout<<"\t\t\t            DOMESTIC FLIGHTS            "<<endl;
	cout<<"\t\t\t-----------------------------------------";
	cout<<endl<<"\t\t\t5352"<<"\t"<<"KARACHI to ISLAMABAD"<<"\t"<<"01:30 AM";
	cout<<endl<<"\t\t\t1021"<<"\t"<<"Peshawar to QUEETA"<<"\t"<<"06:30 PM";
	cout<<"\t\t\t\t\t-----------------------------------------"<<endl;
	cout<<"\t\t\t            INTERNATIONAL FLIGHTS         "<<endl;
	cout<<"\t\t\t-----------------------------------------";
	cout<<endl<<"\t\t\t777"<<"\t"<<"ISLAMABAD to NEWYORK"<<"\t"<<"09:00 AM";
	cout<<endl<<"\t\t\t6667"<<"\t"<<"KARACHI to DUBAI"<<"\t"<<"12:00 PM"<<endl<<endl;
	cout<<"\t\t\t-----------------------------------------"<<endl;
	cout<<"\t\t\t            END OF FLIGHTS       "<<endl;
	cout<<"\t\t\t-----------------------------------------";
   	cout<<endl<<"\t\t\tPRESS ENTER TO CONTINUE"<<endl;
	getch();
}
void main_menu()
{
    //Function definition
	int choice;
    while(choice!=6)
	{
		cout<< endl<<"\t"<<"\t"<<"\t"<<"\t"<<""<<"*************";
		cout<< endl<<"\t"<<"\t"<<"\t"<<"\t"<<"* MAIN MENU *";
		cout<< endl<<"\t"<<"\t"<<"\t"<<"\t"<<"*************";
		cout<< endl<<endl<<endl<<"\t"<<"\t"<<"\t"<<"*-*-*-1.View Flights-*-*-*";
		cout<< endl<<"\t"<<"\t"<<"\t"<<"*-*-*-2.Book A Ticket-*-*-*";
		cout<< endl<<"\t"<<"\t"<<"\t"<<"*-*-*-3.Flight Data (PROTECTED :) )-*-*-*";
		cout<< endl<<"\t"<<"\t"<<"\t"<<"*-*-*-4.Help!-*-*-*";
		cout<< endl<<"\t"<<"\t"<<"\t"<<"*-*-*-5.Print LINKEDLIST-*-*-*";
		cout<< endl<<"\t"<<"\t"<<"\t"<<"*-*-*-6.Exit-*-*-*";
		cout<< endl<<endl<<"\t"<<"\t"<<"\t"<<"Enter Your Choice: ";
		cin>>choice;
        switch(choice)
		{
		    //selection through switch case
			case 1:
			    view();
                break;
            case 2:
                input();
				break;
            case 3:
                display();
				break;
            case 4:
                help();
				break;
            case 5:
                print();
                break;
            case 6:
                exit(0);
                break;
            default:
            {
                cout<<endl<<endl<<"\t"<<"\t"<<"\t"<<"Wrong choice.....!!!";
				cout<<endl<<"\t"<<"\t"<<"\t"<<"Press any key to continue....!!";
				getch();
				system("cls");
            }
        }
	}
}
void input()
{
    //Function definition
    //Write data in file and create file with flight name
	int flightCode;
	string Passport;
	string Name;
    string Address;
    string Phone;
    string firstName;
    string middleName;
    string lastName;
    char t;
    string Type;
    string temp;
	cout<<endl<<"\t\t\tEnter Passenger Details";
	cout<<endl<<"\t\t\t----------------------"<<endl;
    cout<<"\t\t\tEnter Flight code: ";
    cin>>flightCode;
        //////////////////////////////////////////////////////////
       ///////////////// Flight 5352 ////////////////////////////
      //////////////////////////////////////////////////////////
	if(flightCode==5352)
	{
        ofstream fout("5352.txt",ios::app);
        cout<<"\t\t\tEnter your passport Digits: ";
        cin>>Passport;
        cout<<"\t\t\tEnter your first Name: ";
        cin>>firstName;
        cout<<"\t\t\tEnter your middle Name: ";
        cin>>middleName;
        cout<<"\t\t\tEnter your last Name: ";
        cin>>lastName;
        Name=firstName+" "+middleName+" "+lastName;
        cout<<"\t\t\tEnter your Address: ";
		cin.ignore();
		getline(cin,temp);
    	Address=temp;
        cout<<"\t\t\tEnter your phone number ";
        cin>>Phone;
        cout<<"\t\t\tEnter your choice:_-*(press E for Economy Class)"<<endl<<"\t\t\t\t\t\t(B for Business Class)*-_:";
        cin>>t;
        if(t=='E' || t=='e')
        {
            Type="Economy";
        }
        else
        {
            Type="Business";
        }
        fout<<Passport<<"\t"<<Name<<"\t"<<Address<<"\t"<<Phone<<"\t"<<Type<<"\t"<<endl;
	    add(flightCode,Passport,Name,Address,Phone,Type);
	}
	    //////////////////////////////////////////////////////////
       ///////////////// Flight 777 /////////////////////////////
      //////////////////////////////////////////////////////////
        else if(flightCode==777)
        {
            ofstream fout("777.txt",ios::app);
            cout<<"\t\t\tEnter your passport Digits: ";
            cin>>Passport;
            cout<<"\t\t\tEnter your first Name: ";
            cin>>firstName;
            cout<<"\t\t\tEnter your middle Name: ";
            cin>>middleName;
            cout<<"\t\t\tEnter your last Name: ";
            cin>>lastName;
            Name=firstName+" "+middleName+" "+lastName;
            cout<<"\t\t\tEnter your Address: ";
            cin.ignore();
            getline(cin,temp);
            Address=temp;
            cout<<"\t\t\tEnter your phone number ";
            cin>>Phone;
            cout<<"\t\t\tEnter your choice:_-*(press E for Economy Class)"<<endl<<"\t\t\t\t\t\t(B for Business Class)*-_:";
            cin>>t;
            if(t=='E' || t=='e')
            {
                Type="Economy";
            }
            else
            {
                Type="Business";
            }
	//filling
            fout<<Passport<<"\t"<<Name<<"\t"<<Address<<"\t"<<Phone<<"\t"<<Type<<"\t"<<endl;
            add(flightCode,Passport,Name,Address,Phone,Type);

        }
	    //////////////////////////////////////////////////////////
       ///////////////// Flight 6667 ////////////////////////////
      //////////////////////////////////////////////////////////
            else if(flightCode==6667)
            {
                ofstream fout("6667.txt",ios::app);
                cout<<"\t\t\tEnter your passport Digits: ";
                cin>>Passport;
                cout<<"\t\t\tEnter your first Name: ";
                cin>>firstName;
                cout<<"\t\t\tEnter your middle Name: ";
                cin>>middleName;
                cout<<"\t\t\tEnter your last Name: ";
                cin>>lastName;
                Name=firstName+" "+middleName+" "+lastName;
                cout<<"\t\t\tEnter your Address: ";
                cin.ignore();
                getline(cin,temp);
                Address=temp;
                cout<<"\t\t\tEnter your phone number ";
                cin>>Phone;
                //char t
                cout<<"\t\t\tEnter your choice:_-*(press E for Economy Class)"<<endl<<"\t\t\t\t\t\t(B for Business Class)*-_:";
                cin>>t;
                if(t=='E' || t=='e')
                {
                    Type="Economy";
                }
                else
                {
                    Type="Business";
                }
                //filling
                fout<<Passport<<"\t"<<Name<<"\t"<<Address<<"\t"<<Phone<<"\t"<<Type<<"\t"<<endl;
                add(flightCode,Passport,Name,Address,Phone,Type);
            }

	    //////////////////////////////////////////////////////////
       ///////////////// Flight 1021 ////////////////////////////
      //////////////////////////////////////////////////////////

                else if(flightCode==1021)
                {
                    ofstream fout("1021.txt",ios::app);
                    cout<<"\t\t\tEnter your passport Digits: ";
                    cin>>Passport;
                    cout<<"\t\t\tEnter your first Name: ";
                    cin>>firstName;
                    cout<<"\t\t\tEnter your middle Name: ";
                    cin>>middleName;
                    cout<<"\t\t\tEnter your last Name: ";
                    cin>>lastName;
                    Name=firstName+" "+middleName+" "+lastName;
                    cout<<"\t\t\tEnter your Address: ";
                    cin.ignore();
                    getline(cin,temp);
                    Address=temp;
                    cout<<"\t\t\tEnter your phone number: ";
                    cin>>Phone;
                    //char t
                    cout<<"\t\t\tEnter your choice:_-*(press E for Economy Class)"<<endl<<"\t\t\t\t\t\t(B for Business Class)*-_:";
                    cin>>t;
                    if(t=='E' || t=='e')
                    {
                        Type="Economy";
                    }
                    else
                    {
                        Type="Business";
                    }
                    //filling
                    fout<<Passport<<"\t"<<Name<<"\t"<<Address<<"\t"<<Phone<<"\t"<<Type<<"\t"<<endl;
                    add(flightCode,Passport,Name,Address,Phone,Type);

                }
                    else
                    {
                        cout<<"\t\t\tEnter Valid flight code"<<endl;
                    }
                    cout<<endl<<"\t\t\tPress any key to continue.....!!";
	getch();

}
void twist()
{
    //Function definition
    //retrive data individually from file into link list and this function also have option to retrive whole file data
	ifstream file;
    string firstName;
    string middleName;
    string lastName;
    string Address;
    string Phone;
    string Passport;
    string Type;
    string Name;
    int FC=0; // flight code
    cout<<"Enter Flight Code To retrive Data OR Enter Flight Code 0000 to retrive all data"<<endl;
    cin>>FC;
/////////////////////////////////////////
////////////////5352////////////////////
///////////////////////////////////////


    if(FC == 5352)
    {
        file.open("5352.txt");
        if(file.is_open())
        {
            while(file>>Passport>>firstName>>middleName>>lastName>>Address>>Phone>>Type )
            {
                Name=firstName+" "+middleName+" "+lastName;
                add(flightCode,Passport,Name,Address,Phone,Type);
		}
	}
	else
	{
		cout<<"Not Exist\n";
	}
	file.close();
}
/////////////////////////////////////////
////////////////1021////////////////////
///////////////////////////////////////
    if(FC == 1021)
    {
        file.open("1021.txt");
        if(file.is_open())
        {
            while(file>>Passport>>firstName>>middleName>>lastName>>Address>>Phone>>Type )
            {
                Name=firstName+" "+middleName+" "+lastName;
                add(flightCode,Passport,Name,Address,Phone,Type);
            }
        }
        else
        {
            cout<<"Not Exist\n";
        }
        file.close();
    }
/////////////////////////////////////////
////////////////6667////////////////////
///////////////////////////////////////
    if(FC == 6667)
    {
        file.open("6667.txt");
        if(file.is_open())
        {
            while(file>>Passport>>firstName>>middleName>>lastName>>Address>>Phone>>Type )
            {
                Name=firstName+" "+middleName+" "+lastName;
                add(flightCode,Passport,Name,Address,Phone,Type);
            }
        }
        else
        {
            cout<<"Not Exist\n";
        }
        file.close();
    }
    if(FC == 777)
    {
        file.open("777.txt");
        if(file.is_open())
        {
            while(file>>Passport>>firstName>>middleName>>lastName>>Address>>Phone>>Type )
            {
                Name=firstName+" "+middleName+" "+lastName;
                add(flightCode,Passport,Name,Address,Phone,Type);
            }
        }
	else
	{
		cout<<"Not Exist\n";
	}
	file.close();
    }
/////////////////////////////////////////
////////////////ALL(0000)////////////////////
///////////////////////////////////////
    if(FC == 0000)
    {
	////
        file.open("5352.txt");
        if(file.is_open())
        {
            while(file>>Passport>>firstName>>middleName>>lastName>>Address>>Phone>>Type )
            {
                Name=firstName+" "+middleName+" "+lastName;
                add(flightCode,Passport,Name,Address,Phone,Type);
            }
        }
        else
        {
            cout<<"File 5352 <Not Exist>\n";
        }
        file.close();
	////////////////////////
        file.open("1021.txt");
        if(file.is_open())
        {
            while(file>>Passport>>firstName>>middleName>>lastName>>Address>>Phone>>Type )
            {
                Name=firstName+" "+middleName+" "+lastName;
                add(flightCode,Passport,Name,Address,Phone,Type);
            }
        }
        else
        {
            cout<<"File 1021 <Not Exist>\n";
        }
        file.close();
	 ///////////////////////
		file.open("6667.txt");
        if(file.is_open())
        {
            while(file>>Passport>>firstName>>middleName>>lastName>>Address>>Phone>>Type )
            {
                Name=firstName+" "+middleName+" "+lastName;
                add(flightCode,Passport,Name,Address,Phone,Type);
            }
        }
        else
        {
            cout<<"File 6667 <Not Exist>\n";
        }
        file.close();
	///////////////////////
		file.open("777.txt");
        if(file.is_open())
        {
            while(file>>Passport>>firstName>>middleName>>lastName>>Address>>Phone>>Type )
            {
                Name=firstName+" "+middleName+" "+lastName;
                add(flightCode,Passport,Name,Address,Phone,Type);
            }
        }
        else
        {
            cout<<"File 777 <Not Exist\n>";
        }
        file.close();
	////
    }
}
void add(int flightCode , string Passport , string Name , string Address , string Phone , string Type)
{
    //Function definition
    //creating nodes and liked each node
	Node *newNode;
	Node *temp;
	temp=new Node;
	newNode=new Node;
	newNode->flightCode=flightCode;
	newNode->Passport=Passport;
	newNode->Name=Name;
	newNode->Address=Address;
	newNode->Phone=Phone;
	newNode->Type=Type;
    newNode->next=NULL;
	newNode->prev=NULL;
    if(head==NULL)
    {
        head=newNode;
    }
    else
	{
        temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newNode;
		newNode->prev=temp;
    }
}
void display()
{
    //Function definition
    //display data through file
    //It also contains password id
	string id;
	string password;
	cout<<"Enter ID :";
	for (int i=0;i<5;i++)
	{
		id += getch();
  		cout<<"*";
	}
	cout<<endl<<"Enter Password !:";
	for (int i=0;i<5;i++)
	{
		password+= getch();
		cout<<"*";
	}
	if(( password=="SA786") && (id=="arham" || id=="azmiU" ))
	{

		int f;
		int flag;
		int i=1;
		string x;
		cout<<endl<<"Enter flight code: ";
		cin>>f;
		if(f==5352)
		{
			flag++;
			cout<<"\t"<<"Name"<<"\t"<<"Address"<<"\t\t"<<"Phone Number"<<endl;
			ifstream fin("5352.txt");
			while (getline(fin,x))
			{
	        	cout<<i<<".\t" << x << endl ;
	        	i++;
	    	}

		}
		else if(f==1021)
		{
			flag++;
			cout<<"\t"<<"Name"<<"\t"<<"Address"<<"\t\t"<<"Phone Number"<<endl;
			ifstream fin("1021.txt");
			while (getline(fin,x))
			{
	        	cout<<i<<".\t" << x << endl ;
	        	i++;
	    	}

		}
		else if(f==777)
		{
            flag++;
            cout<<"\t"<<"Name"<<"\t"<<"Address"<<"\t\t"<<"Phone Number"<<endl;
            ifstream fin("777.txt");
			while (getline(fin,x))
			{
	        	cout<<i<<"."<<"\t"<< x << endl ;
	        	i++;
	    	}

		}
		else if(f==6667)
		{
			flag++;
            cout<<"\t"<<"Name"<<"\t"<<"Address"<<"\t\t"<<"Phone Number"<<endl;
			ifstream fin("6667.txt");
			while (getline(fin,x))
			{
	        	cout<< i <<"."<<"\t"<< x << endl ;
	    		i++;
			}

		}
		else
		{
			flag=0;
		}

//////////////////////////
		if(flag==0)
		{
			cout<<endl<<" Sorry no flight found....!!";
		}
/////////////////////////
		if(i==1)
   		{
    		cout<<endl<<"No Data found";
		}
////////////////////////

		if(i!=1 && flag !=0)
        {
            cout<<endl<<" Do you want to delete any record?? (Y/N)";
            char ch;
            cin>>ch;
            if(ch=='Y')
            {
                delete_rec(&f);
            }
        }
		cout<<std::endl<<endl<<" Press any key to continue....!!";
		getch();
	}
    else
    {
        cout<<std::endl<<"Enter valid ID and Password";
		getch();
		system("cls");
	}

}
void delete_rec(int *a)
{
    //Function definition
    //deleting record in files
	string line;
	int lineNumber=0, deleteline,flag=0;
	ifstream fin;
  	ofstream temp;
	temp.open("temp.txt");
	   				 	//////////////////////////////////////////////////////////
				       ///////////////// Flight 5352 ////////////////////////////
      				  //////////////////////////////////////////////////////////
	if(*a==5352)
	{
	    fin.open("5352.txt");
        cout << "Enter the line number you want to remove : ";
        cin >> deleteline;
    	while (getline(fin,line))
    	{
    		lineNumber++;

			if(lineNumber == deleteline)
            {
    			deleteLinklist(lineNumber, *a);
			}

        	if (lineNumber != deleteline)
        	{
                temp << line << endl;
                flag++;
        	}
		}
        temp.close();
        fin.close();
    }
    if(*a==5352)
	{
	    remove("5352.txt");
	    rename("temp.txt","5352.txt");
	}
    cout <<endl<<endl<<endl;

                     	//////////////////////////////////////////////////////////
				       ///////////////// Flight 1021 ////////////////////////////
      				  //////////////////////////////////////////////////////////

    if(*a==1021)
	{
	    fin.open("1021.txt");

        cout << "Enter the line number you want to remove : ";
        cin >> deleteline;
    	while (getline(fin,line))
    	{
    		lineNumber++;

        	if(lineNumber == deleteline)
            {
    			deleteLinklist(lineNumber, *a);
			}

			if (lineNumber != deleteline)
        	{
            temp << line << endl;
            flag++;
        	}
		}
        temp.close();
        fin.close();
   }
        if(*a==1021)
        {
            remove("1021.txt");
            rename("temp.txt","1021.txt");
        }
        cout <<endl<<endl<<endl;
                    //////////////////////////////////////////////////////////
				   ///////////////// Flight 777 ////////////////////////////
      			  //////////////////////////////////////////////////////////

        if(*a==777)
        {
            fin.open("777.txt");
            cout << "Enter the line number you want to remove : ";
            cin >> deleteline;
            while (getline(fin,line))
            {
                lineNumber++;

				if(lineNumber == deleteline)
            	{
    				deleteLinklist(lineNumber, *a);
				}

                if (lineNumber != deleteline)
                {
                    temp << line << endl;
                    flag++;
                }
            }
            temp.close();
            fin.close();
        }
        if(*a==777)
        {
            remove("777.txt");
            rename("temp.txt","777.txt");
            cout <<endl<<endl<<endl;
        }
                    //////////////////////////////////////////////////////////
				   ///////////////// Flight 6667 ////////////////////////////
      			  //////////////////////////////////////////////////////////
        if(*a==6667)
        {
            fin.open("6667.txt");
            cout << "Enter the line number you want to remove : ";
            cin >> deleteline;
            while (getline(fin,line))
            {
                lineNumber++;

                if(lineNumber == deleteline)
	            {
    				deleteLinklist(lineNumber, *a);
				}

                if (lineNumber != deleteline)
                {
                    temp << line << endl;
                    flag++;
                }
            }
            temp.close();
            fin.close();
        }
        if(*a==6667)
        {
            remove("6667.txt");
            rename("temp.txt","6667.txt");
        }
        cout <<endl<<endl<<endl;

                    //////////////////////////////////////////////////////////
				   /////////////////     END     ////////////////////////////
      			  //////////////////////////////////////////////////////////
}
void help()
{
    //Function definition
    //Help for the users
	cout<<"\t\tIf you wanted to view the flight timmings press(1) "<<endl;
	cout<<"\t\tIf you wanted to book a trip press (2) "<<endl;
	cout<<"\t\tIf you wanted to view the costumer profile then press (3)"<<endl;
	cout<<"\t\tIf you wanted to QUIT then press (4)"<<endl;
	cout<<"\t\tIf you wanted further information then call to the given numbers"<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"\t\tSAMEER ABRAR KHAN: 03072909868"<<endl;
	cout<<"\t\tSYED ASAD HASHMI: 090078601"<<endl;
	cout<<endl;
	cout<<endl;
}
void deleteLinklist(int lineNumber, int a)
{
	//Function definition
    //delete link list through filing
	ifstream file;
    string firstName;
    string middleName;
    string lastName;
    string Name;
    string Passport;
    string Address;
    string Phone;
    string Type;
    string search;

    int FileCode;
    FileCode=a;
    //delete node


///////////////////////////////////
/////// FLIGHT: 5352 /////////////
/////////////////////////////////

if(FileCode == 5352){


	file.open("5352.txt");
	if(file.is_open())
	{
		int i=0;
		while(file>>Passport>>firstName>>middleName>>lastName>>Address>>Phone>>Type )
		{

			Name=firstName+" "+middleName+" "+lastName;
	         search=Name;

	        if(i==lineNumber){
	        break;
			}

		}
	}


}

///////////////////////////////////
/////// FLIGHT: 1021 /////////////
/////////////////////////////////

if(FileCode == 1021){


	file.open("1021.txt");
	if(file.is_open())
	{
		int i=0;
		while(file>>Passport>>firstName>>middleName>>lastName>>Address>>Phone>>Type )
		{

			Name=firstName+" "+middleName+" "+lastName;
	         search=Name;

	        if(i==lineNumber){
	        break;
			}

		}
	}


}

///////////////////////////////////
/////// FLIGHT: 6667 /////////////
/////////////////////////////////

if(FileCode == 6667){


	file.open("6667.txt");
	if(file.is_open())
	{
		int i=0;
		while(file>>Passport>>firstName>>middleName>>lastName>>Address>>Phone>>Type )
		{

			Name=firstName+" "+middleName+" "+lastName;
	         search=Name;

	        if(i==lineNumber){
	        break;
			}

		}
	}


}

///////////////////////////////////
/////// FLIGHT: 777  /////////////
/////////////////////////////////

if(FileCode == 777){


	file.open("777.txt");
	if(file.is_open())
	{
		int i=0;
		while(file>>Passport>>firstName>>middleName>>lastName>>Address>>Phone>>Type )
		{

			Name=firstName+" "+middleName+" "+lastName;
	         search=Name;

	        if(i==lineNumber){
	        break;
			}

		}
	}


}


	///// coman code for all /////
	Node *printo;
	printo = new Node;
	printo=head;

	if(printo==NULL)
    {

        	cout<<"Linklist is empty :)"<<endl;

    }
	else
	{



   //head node
    if(head->Name==search){
	     	Node *first;
	     	first=head;
	     	head=head->next;
	     	head->prev= NULL;
	     	delete first;
	     }


	     //middle node
	while(printo->next != NULL)
	{
		              ///
           if(printo->Name==search){

		 Node *delo;
	     delo=printo;
	     printo->prev->next=printo->next;
         printo->next->prev=printo->prev;
         delete delo;
     }

       printo=printo->next;
		////
    }

      //tail
    if(printo->Name==search){

	        Node *o;
			o=printo;
			printo->prev->next= NULL;
			printo->prev= NULL;
			delete o;

	}


	}

    file.close();
}
void printing()
{
    //Function definition
    //THIS FUNCTION IS  FOR PRINTING HARDCOPY OF BOOKED TICKET
	int printer=0;
	if(printer == 0)
    {
        cout<<"No Device Detected :("<<endl;
	}
	else
	{
		cout<<"Sorry virus detected nothing to print :("<<endl;
	}
}
void print()
{
     //Function definition
    //printing function
	char cho;
	Node *printo;
	printo = new Node;
	printo=head;
	if(printo==NULL)
    {
        cout<<"Do You wanted to retrive Your all Data (Y/N)?"<<endl;
        cin>>cho;
        if(cho == 'Y' || cho == 'y')
        {
			twist();
			print();
		}
		else
		{
			cout<<"Linklist is empty :)"<<endl;
		}
    }
    else
    {
        while(printo->next != NULL)
        {
            cout<<"\t\t\tFLight NO: "<<printo->flightCode<<endl;
            cout<<"\t\t\tTYPE: "<<printo->Type<<" Class"<<endl;
            cout <<"\t\t\tPASSPORT: "<<printo->Passport<< endl;
            cout <<"\t\t\tNAME: "<<printo->Name << endl;
            cout <<"\t\t\tADDRESS: "<<printo->Address << endl;
            cout <<"\t\t\tPHONE NUMBER: "<<printo->Phone << endl;
            printo=printo->next;
        }
	        cout<<"\t\t\tFLight NO: "<<printo->flightCode<<endl;
            cout<<"\t\t\tTYPE:"<<printo->Type<<" Class"<<endl;
            cout <<"\t\t\tPASSPORT:"<<printo->Passport<< endl;
            cout <<"\t\t\tNAME:"<<printo->Name << endl;
            cout <<"\t\t\tADDRESS:"<<printo->Address << endl;
            cout <<"\t\t\tPHONE NUMBER:"<<printo->Phone << endl;
            cout<<"Do You Want to print This information(Y/N) ?"<<endl;
            char p;
            cin>>p;
            if(p == 'y' || p=='Y')
            {
                printing();

			}
    }
}
};
int main()
{
     //main program starts from main
    //graphics
	system("Color 93");
	system("color 0E");
    cout<<"\n\n\n\t\t\t  Please wait while loading\n\n";
    char a=177, b=219;
	cout<<"\t\t\t\t";
 	for (int i=0;i<=15;i++)
 	cout<<a;
 	cout<<"\r";
 	cout<<"\t\t\t\t";
 	for (int i=0;i<=15;i++)
	{
        cout<<b;
        for (int j=0;j<=1e8;j++);

 	}
	system("cls");
	cout<<endl<<"\t"<<"\t"<<"\t"<<"*****************************";
	cout<<endl<<"\t"<<"\t"<<"\t"<<"*  WELLCOME TO SA AIRLINE  *";
    cout<<endl<<"\t"<<"\t"<<"\t"<<"*****************************";
    cout<<endl;
    cout<<endl;
	cout<<endl<<"\t"<<"\t"<<"\t"<<"****************************";
	cout<<endl<<"\t"<<"\t"<<"\t"<<"* AIRLINE TICKETING SYSTEM *";
    cout<<endl<<"\t"<<"\t"<<"\t"<<"****************************";
    cout<<endl;
    cout<<endl;
    cout<<"                       PLEASE PRESS ENTER TO CONTINUE!!!"                  <<endl;
	Doubly list;
	getch();
	list.main_menu();
    return 0;
}
