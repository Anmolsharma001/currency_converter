#include<iostream>
using namespace std;
int main()
{
	char startValue;
	char selectAgain;
	float converter(void);
	start:
	cout<<"***** Welcome to Currency Convertor Application******"<<endl;
	cout<<"*****please follow the instruction********"<<endl;
	cout<<"you can have currencies dollar,rupees,euro,pound"<<endl;
	cout<<"you can type a,b,c,d respectively for currencies dollar,rupees,euro,pound"<<endl;
	cout<<"enter the currency1 which you want to convert"<<endl;
	cout<<"enter the value for currency1"<<endl;
	cout<<"enter the currency2 to in which you want to convert currency1"<<endl;
	cout<<"(a) dollar (b) rupees (c) euro (d) pound"<<endl;
	selectChoice:
	cout<<"please press s to start "<<endl;
	cin>>startValue;
	if(startValue=='s'||startValue=='S')
	{
		float finalValue=converter();
		cout<<"result is "<<finalValue<<endl;
		cout<<"do you want to use again? y or n"<<endl;
		typeAgain:
		cin>>selectAgain;
		if(selectAgain=='y'||selectAgain=='Y')
		{
			goto start;
		}
		else if(selectAgain=='n'||selectAgain=='N')
		{
			cout<<"thankyou use appliaction !"<<endl;
		}
		else
		{
			cout<<"wrong value entered ,please type again"<<endl;
			goto typeAgain;
		}
	}
	else
	{
		cout<<"you have enterted wrong value,please type s"<<endl;
		goto selectChoice;
	}
}
float converter(){
	char currName;
	char currName1;
	char currName2;
	char currName3;
	char currName4;
	float currency1;
	float currency2;
	currLevel:
	cout<<"enter the currency1 Name"<<endl;
	cin>>currName1;
	cout<<"enter the currency1 Value"<<endl;
	cin>>currency1;
	switch(currName1)
	{
		case 'a':
			currLevel1:
			cout<<"enter the currency2 Name"<<endl;
			cin>>currName2;
			if(currName2=='a'||currName2=='A')
			{
				currency2=currency1*1;
			}
			else if(currName2=='b'||currName2=='B')
			{
				currency2=currency1*73.84;
			}
			else if(currName2=='c'||currName2=='C')
			{
				currency2=currency1*0.85;
			}
			else if(currName2=='d'||currName2=='D')
			{
				currency2=currency1*0.72;
			}
			else
			{
				cout<<"you have not enter value,please type again"<<endl;
				goto currLevel1;
			}
			break;
			
		case 'b':
			currLevel2:
			cout<<"enter the currency2 Name"<<endl;
			cin>>currName2;
			if(currName2=='a'||currName2=='A')
			{
				currency2=currency1*0.01;
			}
			else if(currName2=='b'||currName2=='B')
			{
				currency2=currency1*1;
			}
			else if(currName2=='c'||currName2=='C')
			{
				currency2=currency1*0.01;
			}
			else if(currName2=='d'||currName2=='D')
			{
				currency2=currency1*0.009;
			}
			else
			{
				cout<<"you have not enter value,please type again"<<endl;
				goto currLevel2;
			}
			break;
			
		case 'c':
			currLevel3:
			cout<<"enter the currency2 Name"<<endl;
			cin>>currName2;
			if(currName2=='a'||currName2=='A')
			{
				currency2=currency1*1.16;
			}
			else if(currName2=='b'||currName2=='B')
			{
				currency2=currency1*86.37;
			}
			else if(currName2=='c'||currName2=='C')
			{
				currency2=currency1*1;
			}
			else if(currName2=='d'||currName2=='D')
			{
				currency2=currency1*0.85;
			}
			else
			{
				cout<<"you have not enter value,please type again"<<endl;
				goto currLevel3;
			}
			break;
			
			case 'd':
			currLevel4:
			cout<<"enter the currency2 Name"<<endl;
			cin>>currName2;
			if(currName2=='a'||currName2=='A')
			{
				currency2=currency1*1.37;
			}
			else if(currName2=='b'||currName2=='B')
			{
				currency2=currency1*101.20;
			}
			else if(currName2=='c'||currName2=='C')
			{
				currency2=currency1*1.17;
			}
			else if(currName2=='d'||currName2=='D')
			{
				currency2=currency1*1;
			}
			else
			{
				cout<<"you have not enter value,please type again"<<endl;
				goto currLevel4;
			}
			break;
			default:
				{
					cout<<"you have not enter value,please type again"<<endl;
				goto currLevel;
				break;
				}
	}
     return currency2;	
}
