/*
Nama	: Ahmad Egy Aranda
NPM		: 140810180043
Desc	: Stack Array
********************************/
#include<iostream>
using namespace std;
const int maxElement=100;
struct stack{
	char info[maxElement];
	int top;
};
stack s;

void createStack(stack& s)
{
	s.top=-1;
}

void push(stack& s, char newElement)
{
	if(s.top==maxElement-1)
	{
		cout<<"Stack Penuh"<<endl;
	}
	else
	{
		s.top=s.top+1;
		s.info[s.top]=newElement;
	}
}

void pop(stack& s, char& hapus)
{
	if(s.top<0)
	{
		cout<<"Stack sudah kosong"<<endl;
	}
	else
	{
		hapus=s.info[s.top];
		s.top=s.top-1;
	}
}

void traversal(stack s)
{
	for(int i=s.top;i>=0;i--)
	{
		cout<<s.info[i]<<" ";
	}
}

int main()
{
	int n;
	char x,y;
	cout<<"Masukkan banyak data	: ";cin>>n;
	createStack(s);
	for(int i=n-1;i>=0;i--)
	{
		cout<<"Masukkan Element	: "; cin>>x;
		push(s,x);
	}
	for(int i=0;i<n;i++)
	{
		pop(s,y);
		cout<<y<<" ";
	}
}
