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
{   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
    return Message;}



int main()
{ system("color F2");cout<<"cool";system("color F4");cout<<"good ";

}

