#include<iostream>
#include<string.h>
using namespace std;

//NAME: HAMZA IFTIKHAR
//SECTION: B
//ROLL NO:: FA20BSCS049
//DEPARTMENT: CS
//QUESTIONl: 2
class dfa{
	public:
		string str;
		
		
		void DFA()
		{
			cout<<"ENTER THE STRING"<<endl;
			cin>>str;
			
			int c1,c2;
			if(str[0]='0')
			{
			
			for(int i=0;  i<str.length();  i++)
		{
			if(str[i]=='0')
			{
				cout<<"STRING IS CORRECR"<<endl;
				
			}
		}
	}
			
			
			else{
				cout<<"STRING IS INCORRECT"<<endl;
			}
			
			}
			if(str[0]='1')
			{
				cout<<"string is correctr"<<endl;
			}
		
		else
		{
			cout<<"your string is incorrect"<<endl;
		}
	}
		
};
int main()
{
	dfa d;
	d.DFA();
}
