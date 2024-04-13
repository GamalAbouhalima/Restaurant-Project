#include<bits/stdc++.h>
#include <iostream>
#include <string>
#include <conio.h>
using namespace std;
int x,y,Employee_Number_Selected;
double Price_Per_Unit;
string d1,d2,d3,d4,d5,d6,d7,d8,d9,d10;
string data[10]={d1,d2,d3,d4,d5,d6,d7,d8,d9,d10};
int amount[10];// y
string printOrders[20];// to store data
double price [10]={20,15,35,10,25,35,100,150,65,120};


bool login(){
		
		cout<<endl; 
		cout<<"[1] User 1:  "<<endl; // user name: ahmed or Ahmed ,pass: 123
		cout<<"[2] User 2:  "<<endl; // user name: abdallah or Abdallah ,Pass: 456
		do{
			
			cout<<"Please choose Employee Number  1 or 2:  "<<endl;
			cin>> Employee_Number_Selected;
			if(Employee_Number_Selected == 1){
				
				string userName;
				cout<<"Please Enter Employee_UserName: "<<endl;
				cin>>userName;
				char ch;
				string password="";
				cout<<"Please Enter Employee_Password: "<<endl;
				
				ch=_getch();
				while(ch != 13){
				      password.push_back(ch);
				      cout << '*';
				      ch = _getch();
			   }
				if((userName=="Ahmed"||userName=="ahmed")&&password=="123")
				{
				
					return true;
			 	}
			 	 else{
			 		return false;
				 }	
		}
			else if(Employee_Number_Selected == 2){
				
				string userName;
				cout<<"Please Enter Employee_UserName: "<<endl;
				cin>>userName;
				char ch;
				string password="";
				cout<<"Please Enter Employee_Password: "<<endl;
				ch=_getch();
		    	while(ch != 13){
					
				      password.push_back(ch);
				      cout << '#';
				      ch = _getch();
			   }
				

				
				if((userName=="Abdallah"||userName=="abdallah")&&password=="456"){
			
			 		return true;
			 	}else{
			 		return false;
				 }
			}else{
				cout<<"Invalid Input"<<endl;
			}
			}while(Employee_Number_Selected!=1 && Employee_Number_Selected!=2);
		}	
	

void welcom(){
	cout<<endl;	
	cout<<"***************** Restaurant System *****************"<<endl;	
	cout<<endl;
}
//**********************************************************************************************//
void date(){
	time_t ttime = time(0);
    tm *local_time = localtime(&ttime);
    cout << endl;
    cout <<"[Date]: "<< local_time->tm_mday<<"/"<< 1 + local_time->tm_mon<<"/"<< 1900 + local_time->tm_year<< endl;
    cout << endl;
    cout <<"[Time]: "<<  local_time->tm_hour << ":";
    cout <<  local_time->tm_min << ":";
    cout << local_time->tm_sec << endl;	
    cout <<"_________________"<< endl;
}
//**********************************************************************************************//

//**********************************************************************************************//
// Abstract Class
class shareData{
	public:
		int id;	
		// Abstract Function
		virtual	void setId()=0;	
		virtual	int getId()=0;
};
//**********************************************************************************************//
// inheretance 
class Client:public shareData{
	private:
		string phone;
		string name;
	public:
//*****************************************************************//
		void setId(){
			cout<<"Enter Your Client ID: "<<endl;
			cin>>id;
			if(id<=0){
				cout<<"Enter Correct Client  ID: "<<endl;
				cin>>id;
			}else{
				this->id=id;
			}
			}
		int getId(){
			return id;
		}
//*****************************************************************//
		void setPhone(){
			cout<<"Enter Your Phone Number of Client: "<<endl;
			cin>>phone;
			while(!(phone.size()==11)){
				cout<<"Please Enter Correct Phone Number "<<endl;
				cin>>phone;
				
			}
		}
		string getPhone(){
			return phone;
		}
//*****************************************************************//
		void setName(){
			cout<<"Enter Your Name of Client: "<<endl;
			cin>>name;
			while(int(name.size())<=2){
				cout<<"Enter Correct name: "<<endl;
				cin>>name;
				}
		}
		string getName(){
			return name;
		}
//*****************************************************************//
		void gender(){
			int Gender;
			cout<<"Please Enter Your Gender of Client: "<<endl;
			
			cout<<endl; 
			cout<<"[1] Male   1:  "<<endl;
			cout<<"[2] Female 2:  "<<endl;	
			cout<<endl; 
			do{
				cin>> Gender;
				if(Gender==1){
					string x=name;
					cout<<"Welcom Mr. "<<x<<endl;
				}else if(Gender==2){
					string y=name;
					cout<<"Welcom Mrs. "<<y<<endl;
					}
			}while(Gender!=1 && Gender!=2);	
}	
};
//**********************************************************************************************//
class Orders:public shareData{ 
	public:
		int ans;
		double sum=0;
		string name;
//*****************************************************************//
			void setId(){
			cout<<"Enter Your Order ID: "<<endl;
			cin>>id;
			if(id<=0){
				cout<<"Enter Correct Order  ID: "<<endl;
				cin>>id;
			}else{
				this->id=id;
			}
			}
		int getId(){
			return id;
		}
		
//*****************************************************************//
		void menuData(){	
			int num [] ={1,2,3,4,5,6,7,8,9,10};
			string items [] ={"Pepsi","Water","Orang","Tea","Coffee","Apple","Shawerma","Pizza","Burger","Pasta"};
			double price [] ={20,15,35,10,25,35,100,150,65,120};
				cout<<"____________________________"<<endl;
				cout<<"  No.  "<<"* "<<" Products "<<" * "<<" Price "<<endl;
			for(int i=0;i<10;i++){
				cout<<"____________________________"<<endl;
				cout<<endl;
				cout<<"  "<<num[i]<<"]"<<" * "<<"    "<<items[i]<<" * "<<"     "<<price[i]<<endl;
			

			}
//*****************************************************************//
			do{
				cout<<"____________________________"<<endl;//10
				cout<<endl;
				cout<<"Please Enter number of Order you need: "<<endl;
				cin>>x;
				if(x==1){//Pepsi
					cout<<"How many items do you need? "<<endl;
					cin>>y;
					amount[0]=y;
					Price_Per_Unit=20;
					d1="Pepsi  ";
					sum+=y*Price_Per_Unit;
					printOrders[0]=d1;
					
					cout<<"Item ==> "<<d1<<" , "<<" Quantity = "<<y<<" , "<<" Price_Per_Unit =  "
					<<Price_Per_Unit<<endl;
					
				
					
					 
				}else if(x==2){//Water
					cout<<"How many items do you need? "<<endl;
					cin>>y;
					amount[1]=y;
					d2="Water  ";
					Price_Per_Unit=15;
					sum+=y*Price_Per_Unit;
					printOrders[1]=d2;
					
					
					cout<<"Item ==> "<<d2<<" , "<<"Quantity =  "<<y<<" , "<<"Price_Per_Unit =  "<<Price_Per_Unit<<endl;
			
				}else if(x==3){//Orang
					cout<<"How many items do you need? "<<endl;
					cin>>y;
					amount[2]=y;
					d3="Orang  ";
					Price_Per_Unit=35;
					sum+=y*Price_Per_Unit;
					printOrders[2]=d3;
					cout<<"Item ==> "<<d3<<" , "<<"Quantity =  "<<y<<" , "<<"Price_Per_Unit =  "<<Price_Per_Unit<<endl;
					
				}else if(x==4){//Tea
					cout<<"How many items do you need? "<<endl;
					cin>>y;
				    amount[3]=y;
					d4="Tea  ";
					Price_Per_Unit=10;
					sum+=y*Price_Per_Unit;
					printOrders[3]=d4;
					cout<<"Item ==> "<<d4<<" , "<<"Quantity =  "<<y<<" , "<<"Price_Per_Unit = "<<Price_Per_Unit<<endl;
				
				}
				 else if(x==5){//Coffee
					cout<<"How many items do you need? "<<endl;
					cin>>y;
					amount[4]=y;
					d5="Coffee  ";
					Price_Per_Unit=25;
					sum+=y*Price_Per_Unit;
					printOrders[4]=d5;
					cout<<"Item ==> "<<d5<<" , "<<"Quantity = "<<y<<" , "<<"Price_Per_Unit = "<<Price_Per_Unit<<endl;
					
				}else if(x==6){//Apple
					cout<<"How many items do you need? "<<endl;
					cin>>y;
					amount[5]=y;
					d6="Apple  ";
					Price_Per_Unit=35;
					sum+=y*Price_Per_Unit;
					printOrders[5]=d6;
					cout<<"Item ==> "<<d6<<" , "<<"Quantity = "<<y<<" , "<<"Price_Per_Unit = "<<Price_Per_Unit<<endl;
					
				}else if(x==7){//Shawerma
					cout<<"How many items do you need? "<<endl;
					cin>>y;
					amount[6]=y;
					d7="Shawerma  ";
					Price_Per_Unit=100;
					sum+=y*Price_Per_Unit;
					printOrders[6]=d7;
					cout<<"Item ==> "<<d7<<" , "<<"Quantity = "<<y<<" , "<<"Price_Per_Unit = "<<Price_Per_Unit<<endl;
					
				}else if(x==8){//Pizza
					cout<<"How many items do you need? "<<endl;
					cin>>y;
					amount[7]=y;
					d8="Pizza  ";
					Price_Per_Unit=150;
					sum+=y*Price_Per_Unit;
					printOrders[7]=d8;
					cout<<"Item ==> "<<d8<<" , "<<"Quantity = "<<y<<" , "<<"Price_Per_Unit = "<<Price_Per_Unit<<endl;
			
				}else if(x==9){//Burger
					cout<<"How many items do you need? "<<endl;
					cin>>y;
					amount[8]=y;
					d9="Burger ";
					Price_Per_Unit=65;
					sum+=y*Price_Per_Unit;
					printOrders[8]=d9;
					cout<<"Item ==> "<<d9<<" , "<<"Quantity = "<<y<<" , "<<"Price_Per_Unit = "<<Price_Per_Unit<<endl;
				
					
				}
				else if(x==10){//Pasta
					cout<<"How many items do you need? "<<endl;
					cin>>y;
					amount[9]=y;
					d10="Pasta ";
					Price_Per_Unit=120;
					sum+=y*Price_Per_Unit;
					printOrders[9]=d10;
					cout<<"Item ==> "<<d10<<" , "<<"Quantity = "<<y<<" , "<<"Price_Per_Unit = "<<Price_Per_Unit<<endl;
					
				}
				cout<<"Do you need Again--> ? 1 or -1"<<endl;
				cin>>ans;
				
			}
			while(ans==1);// true
			double TotalSum=sum;
			cout<<"Total Sum= "<<sum<<" EL"<<endl;
//********************************************************************************//
			}

//********************************************************************************//
		void Purchases(){
			cout<<"Total Sum= "<<sum<<" EL"<<endl;
		}
		
};
//**********************************************************************************************//
class RecepitData:public Client{

	public:
		double totalPrice;	
		void setId(){
			cout<<"Enter Your Recepit ID: "<<endl;
			cin>>id;
			if(id<=0){
				cout<<"Enter Correct Recepit ID: "<<endl;
				cin>>id;
			}else{
				this->id=id;
			}
			}
						
		int getId(){
			return id;
		}
		void welcom(){
			cout<<endl;		
			cout<<"******************* Receipt **********************"<<endl;	
		}		
};
//**********************************************************************************************//
void welcom_COUT(){
	cout<<endl;
	cout<<"************************ WELCOM IN COUT RESTAURANT ************************"<<endl;
	cout<<endl;	
		}
int main(){
	
	welcom_COUT();
do{
	if(login()==true){
		
//**************************//
		date();
		welcom();
		
//**************************//	
		Client c;
				
		c.setId();
		c.getId();
		c.setName();
		c.getName();
		c.gender();
		
		c.setPhone();
		c.getPhone();
//**************************//
		Orders o;
			
		o.setId();
		o.getId();
		o.menuData();
	
		
//**************************//
		RecepitData r;
		cout<<endl;	
		r.setId();
		r.getId();
		r.welcom();
		cout<<endl;
		date();
		cout<<endl;
		cout<<"Receipt Id => "<<r.getId()<<endl;
		cout<<"Order Id => "<<o.getId()<<endl;
		cout<<"Client Id => "<<c.getId()<<endl;
		cout<<"Client Name => "<<c.getName()<<endl;
		cout<<"Client Phone => "<<c.getPhone()<<endl;
	
		cout<<"--------------------------------------"<<endl;
		int count=0;
		
		for(int i=0;i<10;i++){
			if(printOrders[i].empty()){// to remove space between products
				continue;	
			}else{
			    count++;
			    double final=amount[i]*price[i];
				cout<<count<<"- "<<" "<<printOrders[i]<<"   "<<amount[i]<<"  *  "<<price[i]<<"= "<<final<<" EL"<<endl;
			}
			
		}
		
		cout<<"--------------------------------------"<<endl;	
		
		o.Purchases();
		
	}else{
		cout<<"\n User Name Or Password Wrong"<<endl;
			
			}

}while(login()==false);
	}



