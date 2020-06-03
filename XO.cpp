#include <iostream>
#include <windows.h>
#include <ctime>
using namespace std;

void emptyLines(){
	string emptyy = "       ";
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t " << emptyy << "|" << emptyy << "|" << emptyy <<  endl;
}

int main(){
	
  cout<<"\n\n\n\t\t\t\t\t\t\t\t\t                                               #########"<<endl;
  cout<<"\t\t\t\t\t\t\t\t\t             ####       ####                  ###########"<<endl;
  cout<<"\t\t\t\t\t\t\t\t\t              ####    ####                   ##         ##"<<endl;
  cout<<"\t\t\t\t\t\t\t\t\t     	       ####  ####                   ##           ##"<<endl;
  cout<<"\t\t\t\t\t\t\t\t\t     	        ########                   ##             ##"<<endl;
  cout<<"\t\t\t\t\t\t\t\t\t                ########                   ##            ##"<<endl;
  cout<<"\t\t\t\t\t\t\t\t\t               #### ####                    ##          ##"<<endl;
  cout<<"\t\t\t\t\t\t\t\t\t              ####   ####                    ###########"<<endl;
  cout<<"\t\t\t\t\t\t\t\t\t             ####     ####                    #########\n"<<endl;
	
	time_t a;
	string answer; 
	system("color 7c");
    int year=2020;
    int counter=10 ;
    int days;
    int minute;
    int hours ;
	int seconds; 
    string months[12]={"January","February","March","April","May","June","July","August","September","October","November","December"};

cout<<endl<<endl;
cout<<"Opened at : \n";

       a=time(NULL);
		tm *t=localtime(&a);
	    if(t->tm_hour<10)
		{
			cout<<0<<t->tm_hour<<":";
		}
		if(t->tm_hour>=10)
		{
			cout<<t->tm_hour<<":";
		}	
		if(t->tm_min<10)
		{
			cout<<0<<t->tm_min<<":";
		}
		if(t->tm_min>=10)
		{
			cout<<t->tm_min<<":";
		}
		if(t->tm_sec<10)
		{
			cout<<0<<t->tm_sec<<endl;
		}
		if(t->tm_sec>=10)
		{
			cout<<t->tm_sec<<endl;
		}
		cout<<t->tm_mday<<"/"<<months[t->tm_mon]<<"/"<<t->tm_year+1900;
		Sleep(1000);
		
		cout<<"\n\n";


	string emptty="       ";
	int index = 0;
	string user1, user2, user1Name, user2Name;
	bool turns = true;
	int user1win = 0, user2win = 0, tie = 0;
	string box[9] = {emptty,emptty,emptty,emptty,emptty,emptty,emptty,emptty,emptty};
	string X = "   X   ";
	string O = "   O   ";
	string tempChoice;
	int cell;
	int totalgames = 0, gamesplayed = 0;
	
	cout << "\t\t\tUser1 name:  ";
	cin >> user1Name;
	cout << "\t\t\tUser2 name:  ";
	cin >> user2Name; 
	
here1:
	cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t  "<< user1Name <<" wants to be X or O:  --->  ";
	cin >> tempChoice;
	if(tempChoice == "x" || tempChoice == "X"){
		user1 = X;
		user2 = O;
	}else if(tempChoice == "o" || tempChoice == "O"){
		user1 = O;
		user2 = X;
	}else{
		goto here1;
	}
	
	cout << "\t\t\t\t\t\t\t\t\t\t\tHow many games do you want to play ? --->  ";
	cin >> totalgames;
	
	system("cls");
	
	do{
		
	cout << "\n\n\n\n\t\t\t\t\t\t\t\t\t\t------------------------------------------------------\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t"<< user1Name <<"       |  " << user1win << "  -  " << user2win << "  |       " << user2Name << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t------------------------------------------------------\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t                TIE: " << tie;
	
	
	
		cout << "\n\n\n\n\n";
		
		
		
		
		
		
		// first row
		emptyLines();
		cout << "\t\t\t\t\t\t\t\t\t\t\t\t " << box[0] << "|" << box[1] << "|" << box[2] <<  endl;
		emptyLines();
		
		
		cout << "\t\t\t\t\t\t\t\t\t\t\t\t-------------------------"<< endl;
		
		// second row
		emptyLines();
		cout << "\t\t\t\t\t\t\t\t\t\t\t\t " << box[3] << "|" << box[4] << "|" << box[5] <<  endl;
		emptyLines();
		
		cout << "\t\t\t\t\t\t\t\t\t\t\t\t-------------------------"<< endl;
		
		// third row
		emptyLines();
		cout << "\t\t\t\t\t\t\t\t\t\t\t\t " << box[6] << "|" << box[7] << "|" << box[8] <<  endl;
		emptyLines();
		
		
		if(turns == true)
		{
			again1:
		cout << user1Name <<", Which cell do you choose  --->  ";
		cin >> cell;
		
		if(box[cell-1] == user1 || box[cell-1] == user2)
		{
			cout<<"\nThe cell is taken Please try again ...\n";
			goto again1;
		}
		
		else 
		{
			box[cell-1] = user1;
			
		}
		
		
		
		
	    } // ends here 
	
		
		
		if(turns == false)
		{
			again2:
		cout << user2Name << ", Which cell do you choose  --->  ";
		cin >> cell;
		
		if(box[cell-1] == user1 || box[cell-1] == user2)
		{
			cout<<"\nThe cell is taken Please try again ...\n";
			goto again2;
		}
		
		else 
		{
			box[cell-1] = user2;
			
		}
		
		
		
		
	    } // ends here
		
		
		
		
		
		//winning conditions for user 1 
		
		if(box[0] == user1 && box[1] == user1 && box[2] == user1)
			{
			
			user1win +=1;
			gamesplayed +=1;
			
			cout<<"Congrats "<<user1Name<<" won !!!\n\n";
			Sleep(5000);
			cout<<"Loading ";
			Sleep(600);
			cout<<".";
			Sleep(600);
			cout<<".";
			Sleep(600);
			cout<<".\n";
			Sleep(600);
			
			for(int i=0 ; i<9 ; i++)
				box[i]=emptty;
			
			}
		
			
			if(box[3] == user1 && box[4] == user1 && box[5] == user1)
			{
			
			user1win +=1;
			gamesplayed +=1;
			
			cout<<"Congrats "<<user1Name<<" won !!!\n\n";
			Sleep(5000);
			cout<<"Loading ";
			Sleep(600);
			cout<<".";
			Sleep(600);
			cout<<".";
			Sleep(600);
			cout<<".\n";
			Sleep(600);
			
			for(int i=0 ; i<9 ; i++)
				box[i]=emptty;
			
			}
			
			if(box[6] == user1 && box[7] == user1 && box[8] == user1)
			{
			
			user1win +=1;
			gamesplayed +=1;
			
			cout<<"Congrats "<<user1Name<<" won !!!\n\n";
			Sleep(5000);
			cout<<"Loading ";
			Sleep(600);
			cout<<".";
			Sleep(600);
			cout<<".";
			Sleep(600);
			cout<<".\n";
			Sleep(600);
			
			for(int i=0 ; i<9 ; i++)
				box[i]=emptty;
			
			}
			
			
			if(box[0] == user1 && box[4] == user1 && box[8] == user1)
			{
			
			user1win +=1;
			gamesplayed +=1;
			
			cout<<"Congrats "<<user1Name<<" won !!!\n\n";
			Sleep(5000);
			cout<<"Loading ";
			Sleep(600);
			cout<<".";
			Sleep(600);
			cout<<".";
			Sleep(600);
			cout<<".\n";
			Sleep(600);
			
			for(int i=0 ; i<9 ; i++)
				box[i]=emptty;
			
			}
			
			
			if(box[2] == user1 && box[4] == user1 && box[6] == user1)
			{
			
			user1win +=1;
			gamesplayed +=1;
			
			cout<<"Congrats "<<user1Name<<" won !!!\n\n";
			Sleep(5000);
			cout<<"Loading ";
			Sleep(600);
			cout<<".";
			Sleep(600);
			cout<<".";
			Sleep(600);
			cout<<".\n";
			Sleep(600);
			
			for(int i=0 ; i<9 ; i++)
				box[i]=emptty;
			
			}
		
		// wnning conditions for user two 
		
		if(box[0] == user2 && box[1] == user2&& box[2] == user2)
			{
			
			user2win += 1;
			gamesplayed +=1;
			
			cout<<"Congrats "<<user2Name<<" won !!!\n\n";
			Sleep(5000);
			cout<<"Loading ";
			Sleep(600);
			cout<<".";
			Sleep(600);
			cout<<".";
			Sleep(600);
			cout<<".\n";
			Sleep(600);
			
			for(int i=0 ; i<9 ; i++)
				box[i]=emptty;
			
			}
		
			
			if(box[3] == user2 && box[4] == user2 && box[5] == user2)
			{
			
			user2win += 1 ;
			gamesplayed +=1;
			
		cout<<"Congrats "<<user2Name<<" won !!!\n\n";
			Sleep(5000);
			cout<<"Loading ";
			Sleep(600);
			cout<<".";
			Sleep(600);
			cout<<".";
			Sleep(600);
			cout<<".\n";
			Sleep(600);
			
			for(int i=0 ; i<9 ; i++)
				box[i]=emptty;
			
			}
			
			if(box[6] == user2 && box[7] == user2 && box[8] == user2)
			{
			
			user2win += 1 ;
			gamesplayed +=1;
			
			cout<<"Congrats "<<user2Name<<" won !!!\n\n";
			Sleep(5000);
		cout<<"Loading ";
			Sleep(600);
			cout<<".";
			Sleep(600);
			cout<<".";
			Sleep(600);
			cout<<".\n";
			Sleep(600);
			
			for(int i=0 ; i<9 ; i++)
				box[i]=emptty;
			
			}
			
			
			if(box[0] == user2 && box[4] == user2 && box[8] == user2)
			{
			
			user2win +=1;
			
			for(int i=0 ; i<9 ; i++)
				gamesplayed +=1;
				
				cout<<"Congrats "<<user2Name<<" won !!!\n\n";
			Sleep(5000);
			cout<<"Loading ";
			Sleep(600);
			cout<<".";
			Sleep(600);
			cout<<".";
			Sleep(600);
			cout<<".\n";
			Sleep(600);
			
			}
			
			
			if(box[2] == user2 && box[4] == user2 && box[6] == user2)
			{
			
			user2win +=1;
			gamesplayed +=1;
			
			cout<<"Congrats "<<user2Name<<" won !!!\n\n";
			Sleep(5000);
			cout<<"Loading ";
			Sleep(600);
			cout<<".";
			Sleep(600);
			cout<<".";
			Sleep(600);
			cout<<".\n";
			Sleep(600);
			
			for(int i=0 ; i<9 ; i++)
				box[i]=emptty;
			
			}
			
			
			
			
			if(box[0] != emptty && box[1] != emptty && box[2] != emptty && 
			    box[3] != emptty && box[4] != emptty && box[5] != emptty &&
				 box[6] != emptty && box[7] != emptty && box[8] != emptty )
				 {
				 	tie +=1;
				 	gamesplayed +=1;
				 	
				 	cout<<"IT was a tie, a new game will start soon !!!\n\n";
				 	
				 	Sleep(600);
					cout<<".";
					Sleep(600);
					cout<<".";
					Sleep(600);
					cout<<".\n";
					Sleep(600);
					 
					 	for(int i=0 ; i<9 ; i++)
							box[i]=emptty;
				 }
		
				if(turns==true)
					turns = false;
					
				else
				turns = true;	
					
				
		
		
		system("cls");
		
	}while(gamesplayed < totalgames);
	
	cout<<"\n\n\n\n\n";
	for(int i=0 ; i<1 ; i++)
	{
	
			cout<<"\t\t\t\t\t\t\t\t\t\t\tProducers: Mhamad Raad , Siroz Taib\n";
		
			Sleep(1500);
	
			cout<<"\t\t\t\t\t\t\t\t\t\t\tEquipment: Mhamads Laptop , Yousufs Laptop\n";
	
			Sleep(1500);
			
			cout<<"\t\t\t\t\t\t\t\t\t\t\tStudio: Hamas Room\n";
			Sleep(1500);
			
			cout<<"\t\t\t\t\t\t\t\t\t\t\tMuch Love !!!!";
			Sleep(2000);
		
		
		cin.get();
		system("cls");
	}
	
	
	cout<<"\n\n\n\n\n\n\n\n";
	cout<<"\t\t\t\t\t\tThe end of the game <3\n";
	
	cout<<"\t\t\t\t\t\t\t\t\t";
			cout<<"G";Beep(700,200);
			Sleep(500);
			cout<<"O";Beep(700,200);
			Sleep(500);
			cout<<"O";Beep(700,200);
			Sleep(500);
			cout<<"D";Beep(700,200);
			Sleep(500);
			cout<<" ";Beep(700,200);
			Sleep(500);
			cout<<"B";Beep(700,200);
			Sleep(500);
			cout<<"Y";Beep(700,200);
			Sleep(500);
			cout<<"E";Beep(700,200);
			Sleep(500);
			cout<<" ";Beep(700,200);
			Sleep(500);
			cout<<"<";Beep(700,200);
			Sleep(500);
			cout<<"3";Beep(700,200);
			Sleep(500);
			cout<<"\a";
	
	
	
	
	
	
}

