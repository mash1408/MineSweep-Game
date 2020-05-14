# include<iostream.h>
int main{
int display5()
{ int x,y=0,k=0,j;
for (x=1;x<35;x++)  // Moves the text to the right
{
   Sleep(100);
      gotoXY(x,y);
      cout<<" "; // Locate the asterisk
	  cout << Color(9,"MINESWEEP"); // Remove it from screen, so we don't have a trail of asterisks
   }
   x--; // Remove 1 from x, so we start where the text is now located
int c=0;
   for (y=5;y<28;y++) // Moves the text down the screen
   { c++;
      Sleep(100);
      if(c>12)
        c=0;
      gotoXY(x,y);
	   cout << "                                   ";// Remove the line of text
      Sleep(20);
      gotoXY(x,y+1);
      cout <<Color(c,"MINESWEEPER");
               // Print new text line
   }gotoXY(34,28);cout<<"               ";
   Sleep(800);
   c=0;
   for (y=20;y>1;y--) // Moves text up the screen to row 8
   { c++;
      if(c>12)
        c=0;
      Sleep(20);
      gotoXY(x,y);
	  cout << "                                   ";
      Sleep(100);
      gotoXY(x,y-1);
      cout <<Color(c,"GAME");
   }
}
}
