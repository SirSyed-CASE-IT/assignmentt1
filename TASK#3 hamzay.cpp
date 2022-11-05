#include<iostream>
#include<string.h>
using namespace std;

//NAME: HAMZA IFTIKHAR
//SECTION: B
//ROLL NO:: FA20BSCS049
//DEPARTMENT: CS
//QUESTIONl: 3
class dfa{
	public:
		string str;
		
		
		void DFA()
		{
			cout<<"ENTER THE STRING"<<endl;
			cin>>str;
			
			int c1,c2;
			for(int i=0;  i<str.length();  i++)
			if(str[0]=='a'  || str[1]=='b')
			{
				if(str[1]=='a'  || str[1]=='b'||  str[1]=='c')
				
				cout<<"GIVENT STRIN G IS CORRECT"<<endl;
				
			}
			else
			{
				cout<<"STRING IS INCORRECT:"<<endl;
			}
			if(str[0]=='c')
			{
				
				
				   if(str[1] == 'b' || str[1] == 'c')
        {
            if(str[1] == 'a' || str[1] == 'b' || str[1] =='c')
                {
               
                }
            cout << "STRING IS CORRECT"<<endl;;
				
			}
			
			}
			
		}
		
			
};
int main()
{
	dfa d;
	d.DFA();
}
