#include <iostream>
using namespace std ;

int main (int argc,char** argv)
{
	int hour,min,sec,time,a,b;
	cout<<"��J�A���ɶ�"<< endl;
	cout<<"�p��:";
	cin>>hour;
	cout<<"����:";
	cin>>min;
	cout<<"���:";
	cin>>sec;
	a=hour*3600;
	b=min*60;
	time=a+b+sec;
	if(time<25200) 
	{
		cout<<"�٨S�W�ҩO"<<endl; 
	}
	else if (time>61200)
	{
		cout<<"��ǤF"<<endl;	
	} 
	else
	{
		cout<<"�٦b�W�Ҫ�"<<endl; 
	}
	system("pause");
	return 0;
}
