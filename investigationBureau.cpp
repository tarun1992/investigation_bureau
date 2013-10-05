#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<string.h>
#include<iomanip.h>
class ibsystem
{
private:
	char user_name[10];
	char password[20];
public:

void assign_user()
{

	strcpy(user_name, "tarun");
	strcpy(password, "8587937484");
}

int verify_password()
{
	char u_name[10];
	char u_pwd[20],temp[2];
	int x=1;
	cout<<"\n\n   Enter user name : ";
	cin>>u_name;
	cout<<"\n\n   Enter Password : ";
	cin>>u_pwd;
	x=strcmp(user_name,u_name);
	if (x==0)
	{
		x=strcmp(password,u_pwd);

	}
	cin.getline(temp,2);
	return(x);

}
};
class department
{
public:
virtual void view()=0;
};

class forensicdepartment:public department
{
public:
void view()
{
criminalrecords cr;
int object;
char ch;
fstream fs;
//id1=cr.getid();
fs.open("100.txt",ios::in | ios::out);
fs.seekg(0,ios::beg);
cout<<"current blood group:"<<endl;
while(!fs.eof())
{
fs.read((char *) & cr, sizeof cr);
cr.putbg();
}
fs.clear();
cout<<"enter object:";
cin>>object;
cin.get(ch);
int loc=(object-1) * sizeof(cr);
//cin.get(ch);
if(fs.eof())
fs.clear();
fs.seekp(loc);
cr.getbg();
cin.get(ch);
fs.write((char *) &cr, sizeof cr)<<flush;
fs.seekg(0);
cout<<"\n\n\t CONTENTS OF UPDATED FILE........\n";
while(fs.read((char *) & cr,sizeof cr))
{
cr.putbg();
}
fs.close();
}
};
class crimebranch:public department
{

public:
void view()
{
//int object;

criminalrecords cr;
//char ch;
fstream fs;
//id1=cr.getid();
fs.open("101.txt",ios::in | ios::out);
fs.seekg(0,ios::beg);
cout<<"criminals records"<<endl;
while(!fs.eof())
{
fs.read((char *) & cr, sizeof cr);
{
cr.putin();
}
}
fs.clear();
fs.close();
}
};
class itdepartment:public department
{
public:
void view()
{
criminalrecords cr;
int object;
//char ch;
fstream fs;
//id1=cr.getid();
fs.open("102.txt",ios::in | ios::out);
fs.seekg(0,ios::beg);
cout<<"employee details:"<<endl;
while(!fs.eof())
{
fs.read((char *) & cr, sizeof cr);
cr.employ();
}
fs.clear();

fs.close();
}
};
class criminalrecords
{
char name[10];
char bg;
int id,age;
public:
int getid()
{
cout<<"enter the criminal id:";
cin>>id;
return id;
}
void getbg()
{
cout<<"enter the name:";
cin>>name;
cout<<"enter the age:";
cin>>age;
cout<<"enter the blood group:";
cin>>bg;
cout<<"enter the id:";
cin>>id;
cout<<endl;
//return bg;
}
void putin()
{
cout<<name<<bg<<id<<age<<endl;
}
void putbg()
{
cout<<bg<<endl;
}
void agetbg()
{
cout<<"enter the name:";
cin>>name;
cout<<"enter the age:";
cin>>age;
cout<<"enter the blood group:";
cin>>bg;
cout<<"enter the id:";
cin>>id;
}
void aputbg()
{
cout<<name<<bg<<id<<age<<endl;
}
void employ()
{
cout<<name<<bg<<id<<age<<endl;
}
};
void welcome()
	{
	textmode(C40);
	textbackground(BLACK);
	textcolor(MAGENTA);
	clrscr();
	cout<<endl<<endl<<endl<<endl;
	cout<<"\n\n           *** WELCOME TO ***";
	cout<<endl;
	cout<<"\n\n OOPS PROJECT........";
	cout<<"\n\n BY :\n";
	cout<<"\n  #  Tarun Narang      #";
	cout<<"\n  #  Shagun Saxena     #";
	cout<<"\n  #  Kavyanshi Garg    #";
	cout<<"\n  #  Juhi Shukla       # ";
	cout<<"\n\n\n\npress any key to continue...";
	getch();
}
void thanks()
	{
		clrscr();
		cout<<"\n\n\n\n\n\n\n\n\n\n\t**********   T H A N K   Y O U   F O R   W O R K I N G   *******";
		cout<<"\n\n\n\n\n\n\n\t\t\t                        press any key to exit";
		getch();
	}
int main()
{
	  clrscr();
	  welcome();

	 // cout< <"welcome";
char ch1='y', ch;
char dep[20];
department *arr[2];
 int opt;
do
{
	textmode(C80);
	textcolor(RED);
	textbackground(WHITE);
	clrscr();
	cout<<"\n\t======================  MAIN   MENU  =======================\n";
	cout<<"\n\t[1] CREATE / MODIFY CRIMINAL RECORDS(Administrator only)";
	cout<<"\n\n\t[2] FORENSIC DEPARTMENT OFFICERS ";
	cout<<"\n\n\t[3] CRIME BRANCH DEPARTMENT OFFICERS";
	cout<<"\n\n\t[4] IT DEPARTMENT OFFICERS";
	cout<<"\n\n\t[5] QUIT";
	cout<<"\n\t=============================================================\n";
	cout<<"\n\n\t\tEnter your  choice : ";
	cin>>opt;
	if(opt==1)
	{
	int p;
ibsystem de;
de.assign_user();
p=de.verify_password();
if(p==0)
{
//cout<<"correct";
//a.input_criteria(); function that he can update or delete criminal records
criminalrecords cr;
int object;
//char ch;
fstream fs;
//id1=cr.getid();
fs.open("101.txt",ios::in | ios::out);
fs.seekg(0,ios::beg);
cout<<"CURRENT DETAILS:"<<endl;
while(fs.read((char *) & cr, sizeof cr))
{
cr.aputbg(); //YOU HAVE TO MAKE THIS FUNCTION AND FILE AS SAME AS BLOOD GROPU
}
fs.clear();
cout<<"enter object:";
cin>>object;
cin.get(ch);
int loc=(object-1) * sizeof(cr);
//cin.get(ch);
if(fs.eof())
fs.clear();
fs.seekp(loc);
cr.agetbg();//you gfgk
cin.get(ch);
fs.write((char *) &cr, sizeof cr)<<flush;
fs.seekg(0);
fs.close();
}
else
{
cout<<"\n\tU R Not a Valid User.";
cout<<"\n\tU Dont have the Authority.. Bye\n\n";
}
break;
}
else if(opt==2)
{
//cout<<"still in progress:";
char ch2='y';
int opt1;
while(ch2=='y')
{
cout<<"\n\n\t[1] UPDATE BLOOD GROUP";
	//cout<<"\n\n\t[2] VIEW CRIMINAL RECORD";
	//cout<<"\n\n\t[2] QUIT";
cout<<"\n\n\t\tEnter your choice :";
cin>>opt1;
if(opt1==1)
{
forensicdepartment fo;
//department *arr[2];
arr[0]=&fo;
arr[0]->view();
}
else
break;
cout<<"do u want to continue:";
ch2=getch();
//getch();
//return 0;
//clrscr();
}
}
else if(opt==3)
{
//cout<<"still in progress:";
char ch3='y';
int opt2;
while(ch3=='y')
{

	cout<<"\n\n\t[1] VIEW CRIMINAL RECORDS";
	//cout<<"\n\n\t[2] QUIT";
cout<<"\n\n\t\tEnter your choice :";
cin>>opt2;
 if(opt2==1)
 {
crimebranch co;
//department *arr[2];
arr[1]=&co;
arr[1]->view();
}
else
break;
cout<<"do u want to continue:";
ch3=getch();
//getch();
//return 0;
//clrscr();
}
}
else if(opt==4)
{
//cout<<"still in progress:";
char ch4='y';
int opt3;
while(ch4=='y')
{

	cout<<"\n\n\t[1] VIEW EMPLOYEE DETAILS";
	//cout<<"\n\n\t[2] QUIT";
cout<<"\n\n\t\tEnter your choice :";
cin>>opt3;
 if(opt3==1)
 {
itdepartment io;
//department *arr[2];
arr[2]=&io;
arr[2]->view();
}
else
break;
cout<<"do u want to continue:";
ch4=getch();
//getch();
//return 0;
//clrscr();
}
}
else 
{
thanks();
		 //	cout<<"\nTHANKS BYE ";
		 //	exit(0);
		break;
}
//cout<<"PRESS Y TO CONTINUE:";
//ch1=getch();
}
while(ch1!=5);
getch();
return 0;
}