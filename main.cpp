#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main()
{
    char Renam[100];
    char link[100];
    ifstream fName("Names.txt");
    ifstream fLink("Links.txt");
    while(!fLink.eof())
    {
        ofstream fBat("Temp.txt");
        fName.getline(Renam,100);
        strcat(Renam,".bat");
        fLink.getline(link,100);
        fBat<<"@echo off\nstart ";
        fBat<<link;
        fBat.close();
        rename("Temp.txt",Renam);
    }
    return 0;
}
