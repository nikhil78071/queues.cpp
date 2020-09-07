#include<conio.h>
#include<stdlib.h>
#include <iostream.h>
#include<process.h>
#define n 10

int q[n];

struct Qarr{

int  head, last;

Qarr()

{

 head=last= -1;
}

~Qarr()
{

}

void insert()

 {
   int val;
   char ch;

do
{
cout<<"Enter element\n";
cin>>val;


   if(last == -1)

{
 last++;
 head++;
 q[head]=val;
}
else if(last<n)
{
   last++;
   q[last] = val;
}
else
{
cout<<"Queue full\n"
cout<<"continue ";
cin>>ch;
}
}
while(ch=='y');
}
void topel()
{
cout<<"First element is "<<q[head];
}

void Delete()
{
   if(head== -1)
   {
      cout<<"Queue Empty ";
   }
   else if ((head<n)&&(head>-1))
   {
    cout<<"Element deleted from queue is:"<< q[head] <<endl;
    head++;
   }
   else
   cout<<"queue finished";
}

void display()

{
   if(head== -1)
   cout<<"Queue is empty!"<<endl;
   else
   {
   cout<<"Queue elements are:";
   for (int i = head; i <= last; i++)
   cout<<q[i]<<" ";
   cout<<endl;
   }
}
};

int main()
{
clrscr();
int a;
Qarr s;
cout<<"1. Insert element in queue"<<endl;
cout<<"2. Delete element from queue"<<endl;
cout<<"3. Display all the elements of queue"<<endl;
cout<<"4. Top element of queue"<<endl;
cout<<"5. Exit"<<endl;
do
{
cout<<"Enter your choice : "<<endl;
cin>>a;
switch(a)
{
 case 1:s.insert();
 break;
 case 2:s.Delete();
 break;
 case 3:s.display();
 break;
 case 4:s.topel();
 break;
 case 5:exit(0);
}
}
while(a!=5);
getch();
return 0;
}
