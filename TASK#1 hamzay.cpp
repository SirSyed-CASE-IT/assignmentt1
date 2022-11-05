#include<iostream>
#include<string.h>
using namespace std;

//NAME: HAMZA IFTIKHAR
//SECTION: B
//ROLL NO:: FA20BSCS049
//DEPARTMENT: CS
//QUESTIONl: DFA THAT ACCEPTS EVEN NUMBER OF STRINGS.
class dfa{
	public:
		string str;
		
		
		void DFA()
		{
			cout<<"ENTER THE STRING"<<endl;
			cin>>str;
			
			int c1,c2;
			for(int i=0;  i<str.length();   i++)
			{
				if(str[i]=='1')
				{
					c1++;
				}
				if(str[i]=='1')
				{
					c2++;
				}
			}
			
			if(c1%2==0  ||  c2%2==0)
			{
				cout<<"STRING IS CORRECR:"<<endl;
			}
			else 
			{
				cout<<"STRING IS INCORCCT:"<<endl;
			}
		}
		
			
};
int main()
{
	dfa d;
	d.DFA();
}
