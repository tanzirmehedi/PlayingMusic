#include <stdio.h>
#include <graphics.h>
#include <iostream>
#include <windows.h>
#include <mmsystem.h>
#include <dos.h>
#include<string.h>
using namespace std;
  COORD coord={0,0};
 void gotoxy(int x,int y)
 {
   coord.X=x;
 coord.Y=y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
 }
int main()
{
    int c=178,i,n;char x,name[20];
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
    printf("\n           ENTER YOUR NAME: ");
    scanf("%s",&name);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
    printf("\n           ENTER YOUR CHOICE: ");
    scanf("%d",&c);
    printf("\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
    {
    for(i=0;i<50;i++)
    {
    printf("%c",c);
    }
    printf("\n");
    for(i=0;i<15;i++)
    {
    printf("%c\t\t\t\t\t\t %c\n",c,c);
    }

    for(i=0;i<50;i++)
    {
    printf("%c",c);
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
    for(;;)
    {
    gotoxy(13,9);
    cout << "FOR BANGLA GOGOL G:" << endl;
    gotoxy(13,10);
    cout << "FOR BANGLA SONG B:" << endl;
    gotoxy(13,11);
    cout << "FOR HINDI SONG H:" << endl;
    gotoxy(13,12);
    cout << "FOR ROMANTIC SONG R:" << endl;
    gotoxy(13,13);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
    cout<<"PLEASE ENTER ANY KEY:";
    cin>>x;
    if(x=='G')
    {
     gotoxy(13,9);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),13);
    cout << "THIS GOGOL SANG BY: AZAD" << endl;
    gotoxy(13,10);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),13);
    cout << "PROGRAMMING BY SHAWON" << endl;
    gotoxy(13,11);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),13);
    cout << "PROGRAMMING RUN BY: " <<name<< endl;
    gotoxy(13,12);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),13);
    cout << "LENGTH 4:36 & 05-04-2015 " << endl;
    gotoxy(13,13);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),13);
    cout << "SIZE 55.00MB & TYPE:WAVE " << endl;
    gotoxy(13,16);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
    cout<<"LOADING: ";
    for(i=0;i<16;i++)
    {
   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),1);
   delay(200);
    printf("%c",c);
    }
    delay(1000);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
    gotoxy(13,16);
    cout<<"PLAYING: ";
    for(i=0;i<16;i++)
    {
   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
    delay(100);
    printf("%c",c);
    }
    PlaySound(TEXT("shawon.wav"), NULL, SND_ALIAS);

    //SCEAH BLACK

    gotoxy(13,9);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
    cout << "THIS GOGOL SANG BY: AZAD" << endl;
    gotoxy(13,10);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
    cout << "PROGRAMMING BY SHAWON" << endl;
    gotoxy(13,11);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
    cout << "PROGRAMMING RUN BY: " <<name<< endl;
    gotoxy(13,12);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
    cout << "LENGTH 4:36 & 05-04-2015 " << endl;
    gotoxy(13,13);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
    cout << "SIZE 55.00MB & TYPE:WAVE " << endl;
    gotoxy(13,16);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
    cout<<"LOADING: ";
    for(i=0;i<16;i++)
    {
   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
   delay(200);
    printf("%c",c);
    }
    delay(1000);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
    gotoxy(13,16);
    cout<<"PLAYING: ";
    for(i=0;i<16;i++)
    {
   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
    delay(100);
    printf("%c",c);
    }

    }
    else if(x=='B')
    {
      gotoxy(13,9);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),13);
    cout << "THIS SONG SANG BY: ABCDEFG" << endl;
    gotoxy(13,10);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),13);
    cout << "PROGRAMMING BY SHAWON" << endl;
    gotoxy(13,11);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),13);
    cout << "PROGRAMMING RUN BY: " <<name<< endl;
    gotoxy(13,12);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),13);
    cout << "LENGTH 5:12 & 05-04-2015 " << endl;
    gotoxy(13,13);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),13);
    cout << "SIZE 62.00MB & TYPE:WAVE " << endl;
    gotoxy(13,16);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
    cout<<"LOADING: ";
    for(i=0;i<16;i++)
    {
   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),1);
   delay(200);
    printf("%c",c);
    }
    delay(1000);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
    gotoxy(13,16);
    cout<<"PLAYING: ";
    for(i=0;i<16;i++)
    {
   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
    delay(100);
    printf("%c",c);
    }
    PlaySound(TEXT("bangla.wav"), NULL, SND_ALIAS);

        //SCEAH BLACK

    gotoxy(13,9);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
    cout << "THIS GOGOL SANG BY: AZADGDDAGFVD" << endl;
    gotoxy(13,10);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
    cout << "PROGRAMMING BY SHAWON" << endl;
    gotoxy(13,11);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
    cout << "PROGRAMMING RUN BY: " <<name<< endl;
    gotoxy(13,12);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
    cout << "LENGTH 4:36 & 05-04-2015 " << endl;
    gotoxy(13,13);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
    cout << "SIZE 55.00MB & TYPE:WAVE " << endl;
    gotoxy(13,16);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
    cout<<"LOADING: ";
    for(i=0;i<16;i++)
    {
   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
   delay(200);
    printf("%c",c);
    }
    delay(1000);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
    gotoxy(13,16);
    cout<<"PLAYING: ";
    for(i=0;i<16;i++)
    {
   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
    delay(100);
    printf("%c",c);
    }
        }
    else if(x=='H')
         {
    gotoxy(13,9);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),13);
    cout << "THIS SONG SANG BY: ABCDEFG" << endl;
    gotoxy(13,10);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),13);
    cout << "PROGRAMMING BY SHAWON" << endl;
    gotoxy(13,11);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),13);
    cout << "PROGRAMMING RUN BY: " <<name<< endl;
    gotoxy(13,12);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),13);
    cout << "LENGTH 5:01 & 05-04-2015 " << endl;
    gotoxy(13,13);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),13);
    cout << "SIZE 65.00MB & TYPE:WAVE " << endl;
    gotoxy(13,16);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
    cout<<"LOADING: ";
    for(i=0;i<16;i++)
    {
   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),1);
   delay(200);
    printf("%c",c);
    }
    delay(1000);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
    gotoxy(13,16);
    cout<<"PLAYING: ";
    for(i=0;i<16;i++)
    {
   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
    delay(100);
    printf("%c",c);
    }
   PlaySound(TEXT("hindi.wav"), NULL, SND_ALIAS);

       //SCEAH BLACK

    gotoxy(13,9);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
    cout << "THIS GOGOL SANG BY: AZADFCFGCG" << endl;
    gotoxy(13,10);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
    cout << "PROGRAMMING BY SHAWON" << endl;
    gotoxy(13,11);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
    cout << "PROGRAMMING RUN BY: " <<name<< endl;
    gotoxy(13,12);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
    cout << "LENGTH 4:36 & 05-04-2015 " << endl;
    gotoxy(13,13);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
    cout << "SIZE 55.00MB & TYPE:WAVE " << endl;
    gotoxy(13,16);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
    cout<<"LOADING: ";
    for(i=0;i<16;i++)
    {
   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
   delay(200);
    printf("%c",c);
    }
    delay(1000);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
    gotoxy(13,16);
    cout<<"PLAYING: ";
    for(i=0;i<16;i++)
    {
   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
    delay(100);
    printf("%c",c);
    }
         }
    else if(x=='R')
    {
        gotoxy(13,9);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),13);
    cout << "THIS SONG SANG BY: ABCDEFG" << endl;
    gotoxy(13,10);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),13);
    cout << "PROGRAMMING BY SHAWON" << endl;
    gotoxy(13,11);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),13);
    cout << "PROGRAMMING RUN BY: " <<name<< endl;
    gotoxy(13,12);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),13);
    cout << "LENGTH 4:52 & 05-04-2015 " << endl;
    gotoxy(13,13);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),13);
    cout << "SIZE 51.00MB & TYPE:WAVE " << endl;
    gotoxy(13,16);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
    cout<<"LOADING: ";
    for(i=0;i<16;i++)
    {
   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),1);
   delay(200);
    printf("%c",c);
    }
    delay(1000);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
    gotoxy(13,16);
    cout<<"PLAYING: ";
    for(i=0;i<16;i++)
    {
   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
    delay(100);
    printf("%c",c);
    }
    PlaySound(TEXT("rhindi.wav"), NULL, SND_ALIAS);

        //SCEAH BLACK

    gotoxy(13,9);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
    cout << "THIS GOGOL SANG BY: AZADFGCFGC" << endl;
    gotoxy(13,10);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
    cout << "PROGRAMMING BY SHAWON" << endl;
    gotoxy(13,11);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
    cout << "PROGRAMMING RUN BY: " <<name<< endl;
    gotoxy(13,12);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
    cout << "LENGTH 4:36 & 05-04-2015 " << endl;
    gotoxy(13,13);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
    cout << "SIZE 55.00MB & TYPE:WAVE " << endl;
    gotoxy(13,16);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
    cout<<"LOADING: ";
    for(i=0;i<16;i++)
    {
   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
   delay(200);
    printf("%c",c);
    }
    delay(1000);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
    gotoxy(13,16);
    cout<<"PLAYING: ";
    for(i=0;i<16;i++)
    {
   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
    delay(100);
    printf("%c",c);
    }
    }
    }
    printf("\n");
    return 0;
}}
