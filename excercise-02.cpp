/*
Nama	: Ahmad Egy Aranda
NPM		: 140810180043
Desc	: Stack Linked List
********************************/
#include<iostream>
using namespace std;
struct stack{
	char info;
	stack* next;
};
typedef stack* pointer;
typedef pointer List;

void createStack(List& Top)
{
	Top=NULL;
}
void createElement(pointer& pBaru)
{
	pBaru=new stack;
	cout<<"Masukkan Data	: ";cin>>pBaru->info;
	pBaru->next=NULL;
}

void push(List& Top, pointer pBaru)
{
	if(Top==NULL)
	{
		Top=pBaru;
	}
	else
	{
		pBaru->next=Top;
		Top=pBaru;
	}
}

void pop(List& Top, pointer& hapus)
{
	if(Top==NULL)
	{
		cout<<"Stack Kosong"<<endl;
	}
	else
	{
		hapus=Top;
		Top=Top->next;
		hapus->next=NULL;
	}
}


int main()
{
	List Top;
	pointer x,y;
	int n;
	createStack(Top);
	cout<<"Masukkan Banyak Data	: ";cin>>n;
	for(int i=0;i<n;i++)
	{
		createElement(x);
		push(Top,x);
	}
	for(int i=0;i<n;i++)
	{
		pop(Top, y);
		cout<<y->info<<" ";
	}
}
