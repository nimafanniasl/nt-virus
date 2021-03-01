#include <iostream>
#include <conio.h>
#include <windows.h>
#include <cwchar>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <iomanip>
using namespace std;

void check();
void exit();
void error();

int n=1;
int f=1;
int nt=0;
int response;
int p=1;
int t=1;
int exit1=0;
char sp[100000000];
main()
{
  keybd_event(VK_F11,0,0,0);
  CONSOLE_FONT_INFOEX cfi;
  cfi.cbSize = sizeof(cfi);
cfi.nFont = 0;
cfi.dwFontSize.X = 0;                   // Width of each character in the font
cfi.dwFontSize.Y = 20;                  // Height
cfi.FontFamily = FF_DONTCARE;
cfi.FontWeight = FW_NORMAL;
std::wcscpy(cfi.FaceName, L"Consolas"); // Choose your font
SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);

  cout<<"Do you want to install Windows 12 on your computer?";
  cout<<endl<<endl<<"1 : OK"<<endl<<"2 : no,exit"<<endl<<endl<<"Your response: ";
  cin>>response;
  check();
  cout<<endl;
  if (exit1 != 1)
  {
  cout<<"mode : autoupdate"<<endl; 
  Sleep(1000);
  cout<<"Backing up your programs ..."<<endl;
  Sleep(5000);
  cout<<"Backing up your files ..."<<endl;
  Sleep(7000);
  cout<<"INSTALLING..."<<endl;
  Sleep(2000);
  cout<<"2% completed"<<endl;
  Sleep(1000);
  cout<<"5% completed"<<endl;
  Sleep(1000);
  cout<<"7% completed"<<endl;
  Sleep(1000);
  cout<<"10% completed"<<endl;
  Sleep(1000);
  	  error();
  }
  cout<<endl<<":("<<endl;
  	cout<<endl<<"windows stoped.";
  	Sleep(1000);
  	cout<<endl<<"explorer.exe stoped.";
  	Sleep(1000);
  	cout<<endl<<"nvvsvc.exe stoped.";
  	Sleep(1000);
  	cout<<endl<<"taskmgr.exe stoped.";
  	Sleep(1000);
  	cout<<endl<<"svchost.exe stoped.";
  	Sleep(1000);
  	cout<<endl<<"SgrmBroker.exe stoped.";
  	Sleep(1000);
  	cout<<endl<<"UserOOBEBroker.exe stoped.";
  	Sleep(1000);
  	cout<<endl<<"runing NT-VIRUS...";
  	Sleep(1000);
  	cout<<endl<<"removing your backup...";
  	Sleep(1000);
  	cout<<endl<<"removeng your windows...";
  	Sleep(1000);
    cout<<endl<<endl;
  	cout<<endl<<"------------------------------";
  	cout<<endl<<"| NTVIRUS HACKING YOUR PC... |";	
  	cout<<endl<<"------------------------------";
  	Sleep(3000);
  	cout<<endl<<endl;
  	cout<<endl<<"     ____________      ";
  	cout<<endl<<"     | warning! |      ";
  	cout<<endl<<"--- --- ----- -- ------";
	cout<<endl<<"you|are|haked|by|ni555!";
	cout<<endl<<"--- --- ----- -- ------";
	cout<<endl<<endl<<endl<<endl<<endl;
  	Sleep(8000);
  	while (t<6000)
    {
  	 cout<<"ÊÛäÎÝÎÛÎÎÎÎÛ8Ú596Ú9ÛáãÇÇäáÇÏäÈáÇáËÞ   ";
  	 t++;
    }
    Sleep(2000);
	
  	cout<<endl;
    Sleep(2000);
    system("color 9F");
    cout<<endl<<endl<<endl<<endl<<endl<<"do not be scared! It was just a joke!"<<endl<<"But from now on, if you are not sure about a program, do not run it at all!"<<endl<<"Because it may be a real virus and it can ruin your computer!"<<endl<<endl<<"github : github.com/nimafanniasl"<<endl<<"aparat : aparat.com/smartnima"<<endl<<"youtube : youtube.com/channel/UCf1aAkpyC3zz6PhdXC-aLwQ"<<endl<<"website : smartnima.com"<<endl<<endl<<"To exit the program, press the Enter key! ";
  
  
  
  getch();
}

void error()
{
  system("color 04");
  cout<<"ERROR! : 0x654"<<endl;
  Sleep(2000);
  while (n<6000)
  {
  	cout<<"0101";
  	n++;
  }
  while (f<6000)
  {
  	cout<<"ÇÝÇÊÝÞÇåÕ4ÊÝÛ86ÛÎÝå9áÞÝÇ9ÛåÇ9åÛ9ÇåÛÞÝ-9åÇ9ÝÛåÇ9åÝ";
  	f++;
  }
}

void exit()
{
	cout<<"exiting..."<<endl;
	Sleep(2000);
	error();
	exit1=1;
}

void check()
{
	if (response==2){
		exit();
	}
	while (response > 2)
	{
	cout<<endl<<"ERROR!";
	cout<<endl<<"1 : OK"<<endl<<"2 : no,exit"<<endl<<"Your response:";
	cin>>response;
	if (response==2){
		exit();
	}
	}
}






