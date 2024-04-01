#include<iostream>
using namespace std;

int top=-1;
int Stack[10];

void push(int data)
{
	if(top==9)
	{
		cout<<"Overflow"<<endl;
	}
	
	else
	{
		
		top=top+1;
		Stack[top]=data;
		
		cout<<data<<" has been added to the top of Stack!"<<endl;
	}
}

void pop()
{
		if(top==-1)
	{
		cout<<"Underflow"<<endl;
	}
	
	else
	{
		cout<<Stack[top]<<" has been removed from the Stack!"<<endl;
		top=top-1;
	}
}

void display()
{
	if(top==-1)
	{
		cout<<"Underflow"<<endl;
	}
	
	else
	{
		for(int i=top; i>=0 ;i--)
		{
			cout<<Stack[i]<<endl;
		}
	}
}