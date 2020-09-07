#include<iostream.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct node
{
  int info;
  node *ptr;
};

class Stack
{
   node *first,*last,*temp,*p;

   public:
     Stack()
     {
       first=last=NULL;
     }
void push()
{
 int value;
 node *ptr;
 cout<<"\nEnter the number to be pushed : ";
 cin>>value;
 p=new node;
 p->info=value;
 p->ptr=NULL;

 if(first==NULL)
 {
   first=last=p;
   last->ptr=NULL;
 }
 else
 {
 last->ptr=p;
 last=p;
 p->ptr=NULL;
 }
}

void pop()
{
  temp= new node;
  if(first==NULL)
  cout<<"\nStack is Empty";
  else
  {
    cout<<"\nDeleted element is : "<<first->info;
    temp=first;
    first=first->ptr;
    delete temp;
   }
}

void topele()
{
cout<<"First element is:"<<first->info;
}

void display()
{
 temp=new node;
 cout<<"Queue elements are:";
 temp=first;
 while(temp!=NULL)
 {
  cout<<temp->info<<"->";
  temp=temp->ptr;
 }
 cout<<"NULL";
}

void clear()
{
  node *ptr1 = first;
  while(ptr1 != NULL)
  {
    cout<<ptr1->info<<"->";
    node *temp = ptr1->ptr;
    delete ptr1;
    ptr1 = temp;
    }
  cout<<"NULL\n";
  }
};

void main()
{
  clrscr();
  Stack s;
  int a;

  do
  {
   cout<<"			QUEUES"<<endl;
   cout<<endl;
   cout<<" 1. PUSH\n 2. POP\n 3. CLEAR\n 4. Top element\n 5. Display\n";
   cin>>a;
   switch(a)
   {
    case 1:s.push();
    break;
    case 2:s.pop();
    break;
    case 3:s.clear();
    break;
    case 4:s.topele();
    break;
    case 5:s.display();
    break;
    case 6: exit(0);
   }
}
while(a!=6);
getch();
}