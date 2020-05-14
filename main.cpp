#include <iostream>
# include <iomanip>
#include <stdio.h>
#include<time.h>
#include "conio.h"
#include <windows.h>
# include <fstream>
using namespace std;
HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD CursorPosition;

char* Color(int color=7, char* Message = "")
{
    return Message;}

void gotoXY(int x, int y)
{
CursorPosition.X = x; // Locates column
CursorPosition.Y = y; // Locates Row
SetConsoleCursorPosition(console,CursorPosition); // Sets position for next thing to be printed
}
class minecraft {
   int u;
int en();
public:
int display(int );
int tim();
int minecraftcondition(int,int &lives,int &a);
int minecraftcondition2(int,int &lives,int &a);
int minecraftcondition3(int,int &lives,int &a);
int display2(int );
int mine1();
int menu(int,int);
int startupmenu();
int give();
minecraft()
{}
};
int minecraft::display(int speed)
{ minecraft m;
    int i,j=0;

    for(i=2;i<12;i++)
    {Sleep(speed);
        gotoXY(25,i);
        cout<<Color(12,"|");
    }
    for(i=2;i<12;i++)
    {Sleep(speed);
        gotoXY(35,i);
        cout<<Color(10,"|");
    }
    for(i=2;i<12;i++)
    {Sleep(speed);
        gotoXY(45,i);
        cout<<"|";
    }
    for(i=2;i<12;i++)
    {Sleep(speed);
        gotoXY(55,i);
        cout<<"|";
    }
    for(i=2;i<12;i++)
    {Sleep(speed);
        gotoXY(65,i);
        cout<<"|";
    }
     for(i=2;i<12;i++)
    {Sleep(speed);
        gotoXY(75,i);
        cout<<Color(12,"|");
    }
        for(i=25;i<75;i++)
    {Sleep(speed);
        gotoXY(i,1);
        cout<<Color(10,"__");
    }
    for(i=26;i<74;i++)
    {Sleep(speed);
    if(i==34||i==35||i==44||i==45||i==54||i==55||i==64||i==65)
        continue;
        gotoXY(i,3);
        cout<<"__";
    }
    for(i=26;i<74;i++)
    { Sleep(speed);
    if(i==34||i==35||i==44||i==45||i==54||i==55||i==64||i==65)
        continue;
        gotoXY(i,5);
        cout<<"__";
    }
     for(i=26;i<74;i++)
    {Sleep(speed);
     if(i==34||i==35||i==44||i==45||i==54||i==55||i==64||i==65)
        continue;
        gotoXY(i,7);
        cout<<"__";
    }for(i=26;i<74;i++)
    {Sleep(speed);
     if(i==34||i==35||i==44||i==45||i==54||i==55||i==64||i==65)
        continue;
        gotoXY(i,9);
        cout<<"__";
    }
    for(i=26;i<74;i++)
    {Sleep(speed);
     if(i==34||i==35||i==44||i==45||i==54||i==55||i==64||i==65)
        continue;
        gotoXY(i,11);
        cout<<"__";
    }i=1;
    cout<<Color(12,"");
    for(j=30;j<80;j+=10)
    {
        gotoXY(j,2);cout<<i;
        i++;
    }
    for(j=30;j<80;j+=10)
    {
        gotoXY(j,4);cout<<i;
        i++;
    }

    for(j=30;j<80;j+=10)
    {
        gotoXY(j,6);cout<<i;
        i++;
    }
     for(j=30;j<80;j+=10)
    {
        gotoXY(j,8);cout<<i;
        i++;
    }
    for(j=30;j<80;j+=10)
    {
        gotoXY(j,10);cout<<i;
        i++;
    }
    gotoXY(25,13);cout<<"this is the standard version of the game"<<endl;
    gotoXY(25,14);cout<<"press any key to continue";getch();

}
 int minecraft:: minecraftcondition(int x,int &lives,int &a)
{
       switch(x)
    {
    case 1:
        gotoXY(30,2);
        cout<<"X";break;
      case 2:
          gotoXY(40,2);
          cout<<"X";break;
       case 3:
          gotoXY(50,2);
          cout<<"X";break;
       case 4:
        gotoXY(60,2);
        cout<<"X";break;
       case 5:
            gotoXY(70,2);//mine
            cout<<"*";--lives;--a;break;
        case 6:
            gotoXY(30,4);
            cout<<"X";break;
        case 7: // mine
            gotoXY(40,4);
            cout<<"*";--lives;--a;break;
        case 8:
            gotoXY(50,4);
           cout<<"X";break;
        case 9:
            gotoXY(60,4);
            cout<<"X";break;
        case 10:
           gotoXY(70,4);
           cout<<"X";break;
        case 11: // mine
           gotoXY(30,6);
           cout<<"*";--lives;--a;break;
        case 12:
           gotoXY(40,6);
           cout<<"X";break;
        case 13: // mine
           gotoXY(50,6);
           cout<<"*";--lives;--a;break;
        case 14:
           gotoXY(60,6);
           cout<<"X";break;
       case 15:
           gotoXY(70,6);
           cout<<"X";break;
       case 16:
           gotoXY(30,8);
           cout<<"X";break;
       case 17:
           gotoXY(40,8);//mine
           cout<<"*";--lives;--a;break;
       case 18:
           gotoXY(50,8);
           cout<<"X";break;
       case 19:
           gotoXY(60,8);
           cout<<"X";break;
       case 20:
           gotoXY(70,8);
           cout<<"X";break;
      case 21:
           gotoXY(30,10);
           cout<<"X";break;
      case 22:
           gotoXY(40,10);// mine
           cout<<"*"; gotoXY(41,10);cout<<"*";gotoXY(39,10);cout<<"*";
           gotoXY(40,11);cout<<"*";gotoXY(39,11);cout<<"*";

           --lives;--a;break;
     case 23:
           gotoXY(50,10);
           cout<<"X";break;
     case 24:
           gotoXY(60,10); // mine
           cout<<"*";--lives;--a;break;
     case 25:
           gotoXY(70,10);
           cout<<"X";break;
}
}

    int minecraft::display2(int speed)
    {

    int i,j=0;
    for(i=2;i<12;i++)
    {Sleep(speed);
        gotoXY(25,i);
        cout<<Color(12,"|");
    }
    for(i=2;i<12;i++)
    {Sleep(speed);
        gotoXY(35,i);
        cout<<Color(10,"|");
    }
    for(i=2;i<12;i++)
    {Sleep(speed);
        gotoXY(45,i);
        cout<<"|";
    }
    for(i=2;i<12;i++)
    {Sleep(speed);
        gotoXY(55,i);
        cout<<"|";
    }
    for(i=2;i<12;i++)
    {Sleep(speed);
        gotoXY(65,i);
        cout<<"|";
    }
     for(i=2;i<12;i++)
    {Sleep(speed);
        gotoXY(75,i);
        cout<<Color(12,"|");
    }
        for(i=25;i<75;i++)
    {Sleep(speed);
        gotoXY(i,1);
        cout<<Color(10,"__");
    }
    for(i=26;i<74;i++)
    {Sleep(speed);
    if(i==34||i==35||i==44||i==45||i==54||i==55||i==64||i==65)
        continue;
        gotoXY(i,3);
        cout<<"__";
    }
    for(i=26;i<74;i++)
    { Sleep(speed);
    if(i==34||i==35||i==44||i==45||i==54||i==55||i==64||i==65)
        continue;
        gotoXY(i,5);
        cout<<"__";
    }
     for(i=26;i<74;i++)
    {Sleep(speed);
     if(i==34||i==35||i==44||i==45||i==54||i==55||i==64||i==65)
        continue;
        gotoXY(i,7);
        cout<<"__";
    }for(i=26;i<74;i++)
    {Sleep(speed);
     if(i==34||i==35||i==44||i==45||i==54||i==55||i==64||i==65)
        continue;
        gotoXY(i,9);
        cout<<"__";
    }
    for(i=26;i<74;i++)
    {Sleep(speed);
     if(i==34||i==35||i==44||i==45||i==54||i==55||i==64||i==65)
        continue;
        gotoXY(i,11);
        cout<<"__";
    }
     time_t t = time(0);   // get time now
    struct tm * now = localtime( & t );
    u=t;
}
int highscores(int score)
{char name[30];
 system("cls");
 gotoXY(50,4);cout<<"enter your name"<<endl;cin>>name;
    ofstream ofs;
    ofs.open("minescores.txt",ios::app);
    ofs<<endl<<score<<setw(19)<<name;
    cout<<endl<<Color(11,"your score and name has been successively added to highscores");Sleep(5000);
    ofs.close();
}
int minecraft::mine1() //driver function
{ minecraft k;
char take[30];
int b[35]={0},w=10;
    int i=0,j=0,K=0,a=1,p=0,l=0,q=0;
 int lives=3;int x=0;
 Color(8);
gotoXY(48,14);cout<<"INPUT";
for(int r=15;r<20;r++)
{
    gotoXY(45,r);cout<<"|";
}
for(int r=15;r<20;r++)
{
    gotoXY(55,r);cout<<"|";
}
for(int r=45;r<54;r++)
{
    gotoXY(r,15);cout<<"___";
}
for(int r=46;r<53;r++)
{
    gotoXY(r,19);cout<<"___";
}
   gotoXY(50,18);
  for(i=15;i<=35;i++)
    {
     gotoXY(50,18);Color(8);cin>>x;
     gotoXY(2,9);cout<<"Time:"<<tim();
Color(20);
     for(q=0;q<35;q++)
     { if(b[q]==x)
       {   gotoXY(80,w);
          cout<<"wrong input"<<endl;++w;
           gotoXY(50,18);cin>>x; }
     }
   b[i-15]=x;
   while(x>25||x<1)
 {
    gotoXY(80,w);
    cout<<"wrong input";
    gotoXY(50,18);
    cin>>x;i++;w++;
 }
     k. minecraftcondition(x,lives,a);k.menu(lives,a);
       if(lives==0)
       { gotoXY(80,5);system("cls");cout<<"game over";Sleep(2000);
         break;
       }a++;K++;

       }
       system("cls");
       gotoXY(50,10);cout<<"Results";
       gotoXY(50,12);
       cout<<Color(12,"your score:")<<a;
       Sleep(8000);
       highscores(a);

}

int minecraft::en()
{
    exit(0);
}
int minecraft::tim()
{
     time_t t = time(0);   // get time now
    struct tm * now = localtime( & t );

float x=t-u;
x=60-x;
return x;
}
int minecraft:: menu(int lives,int A)
{ gotoXY(2,1);cout<<Color(3,"STATUS");

gotoXY(2,3);cout<<"LIVES:"<<lives;
gotoXY(2,7);cout<<"SCORE:"<<A;

}


int ne()
{
    int i,j=80,k=0,p=35,m=36;
    for(i=0;i<40&&j>43&&p>2&&m>3;i++)
        {
         gotoXY(i,2);cout<<Color(k,"* ");cout<<Color(12," mine");Sleep(40);
   if(i%2==0)k=17;else k=7;
   gotoXY(j,2);cout<<Color(12,"sweep ");cout<<Color(k," *");j--;
   gotoXY(42,p);cout<<Color(12,"game");gotoXY(42,p);Sleep(40);
   if(p>3){cout<<"    ";}
   gotoXY(43,m);cout<<Color(8500,"|");m--;
   p--;
    }
}


int main()
{ int n;char take[30];
int speed=0;Color(18);
minecraft m;
ne();
system("cls");

    while(1)
{ system("cls");
gotoXY(55,4);cout<<Color(11,"MENU")<<endl<<endl;
for(int i=5;i<12;i++)
{
   gotoXY(40,i);cout<<"|";
}
for(int i=5;i<12;i++)
{
   gotoXY(75,i);cout<<"|";
}
for(int i=40;i<75;i++)
{
   gotoXY(i,5);cout<<"|";
}
for(int i=40;i<76;i++)
{
   gotoXY(i,12);cout<<"|";
}
gotoXY(50,7);

cout<<"Speed execution"<<":"<<"1"<<endl;
 gotoXY(50,8);
 cout<<"Proceed to game:"<<"2"<<endl;
 gotoXY(50,9);
 cout<<"Highscores:"<<"3"<<endl;
 gotoXY(50,10);
 cout<<"EXIT:"<<"4"<<endl;
 gotoXY(55,14);cin>>n;
if(n==1){system("cls");cout<<"enter speed";cin>>speed;system("cls");}
     else if(n==2)
       {system("cls");
        m.display(speed);system("cls");m.display2(speed);
       m.mine1();
       }
    else if(n==3)
    { system("cls");gotoXY(7,0);cout<<"HIGHSCORES"<<endl<<endl;
    ifstream ifs;
    ifs.open("minescores.txt");
    int i=2;
    while(ifs)
    {
        ifs.getline(take,30);
      cout<<Color(i,take)<<endl;i++;
    }
    getch();system("cls");

    }
    else if(n==4)exit(0);
    else break;
}

}


