#include<iostream>
class Phone
{
     String name;
     long price;
    
 
    
     void create_Contact(String ph_no, String name)
    {
        cout<<"Contact saved as:\t" <<name <<" \t"<< ph_no;
    }
    
    void playMusic(String song)
    {
        cout<<"Song playing: "<<song;
    }
    
       void calling(String ph_no, String name)
    {
        cout<<"calling to: "<< name <<"\n"<< ph_no;
    }
  
    
     void SMS(String ph_no, String name, String msg)  
    {  
        cout<<"Receiver name: "<<name <<"\nReceiver ph_no:" <<ph_no;
        cout<<msg; 
    }
    
     void phonepay(){
        cout<<"You are using phonepay App"<<endl;
    }
     void Googlepay(){
        cout<<"You are using Googlepay App"<<endl;
    }
    void paypal(){
        cout<<"You are using paypal App"<<endl;
    }
    void paytm(){
        cout<<"You are using paytm App"<<endl;
    } 
    void tez(){
        cout<<"You are using tez App"<<endl;
    }
    void usingApp(int option){
        switch(option)
        {
            case 1:
            phonepay();
            break;

            case 2:
            Googlepay();
            break;

            case 3:
            paypal();
            break;

            case 4:
             paytm();
            break;
            
            case 5:
            tez();
            break;


            default:
            cout<<"Invalid Input"<<endl;
            break;

        }
    }
};




class MI :public Phone
{
    void MI_Store()
    {
        cout<<"Please Sign-in with your MI Account";
    }
};

class Apple :public Phone
{
    void App_Store()
    {
        cout<<"\n\nWelcome to the App Store";
    }
};   

int Main()
{
	
	   
    cout<<"select brand for Mobilephone"<<endl;
    cout<<"1.MI \n"<<"2.iphone \n";
   
    int choice;
    cin>>choice;
    cout<<endl;
    cout<<"Enter your choice which transaction app you want to use:"<<endl;
    cout<<"1.PhonePay \n"<<"2.GooglePay \n"<<"3.PayPal \n"<<"4.Paytm \n"<<"5.Tez \n";
  
    int option;
    cin>>option;
	    
	    
	    switch(choice)
	    {
	     case 1:
	    Apple ap = new Apple();
	    ap.App_Store();
	    ap.calling("7988039889", "Deepak");
	    ap.playMusic("Bruno Mars");
	    ap.usingApp(option);
	    break;
	    
	    case 2:
	    MI mi = new MI();
	    mi.create_Contact("7988039885", "Achal");
	    mi.SMS("7988039885", "Achal", "Hey! All good?");
	    mi.usingApp(option);
	    break;
	    
	     default :
	     cout<<"Invalid Input";
	     break;
	    
	    }
	    
	 return 0;   
	    
}

