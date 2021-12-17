import java.util.Scanner;

class Phone
{
     long price;
     String name;	
    
 
    
     void create_Contact(String ph_no, String name)
    {
        System.out.println("Contact saved as:\t" + name +" \t"+ ph_no);
    }
    
    void playMusic(String song)
    {
        System.out.println("Song playing: "+song);
    }
    
       void calling(String ph_no, String name)
    {
        System.out.println("calling to: "+ name + "\n"+ ph_no);
    }
  
    
     void SMS(String ph_no, String name, String msg)  
    {  
        System.out.println("Receiver name: "+name + "\nReceiver ph_no:" + ph_no);
        System.out.println(msg);  
    }
}

class MI extends Phone
{
    void MI_Store()
    {
        System.out.println("Please Sign-in with your MI Account");
    }
}

class Apple extends Phone
{
    void App_Store()
    {
        System.out.println("\n\nWelcome to the App Store");
    }
}   

public class Main
{
	public static void main(String[] args) 
	{
	    Scanner sc = new Scanner(System.in);
            long Price = sc.nextLong();
	    String str = sc.nextLine();
	    
	    
	    Apple ap = new Apple();
	    ap.App_Store();
	    ap.calling("7988039889", "Deepak");
	    ap.playMusic("Bruno Mars");
	    
	    MI mi = new MI();
	    
	    System.out.println("You are using the "+str+" and its price is "+Price);
	    mi.MI_Store();
	    mi.create_Contact("7988039885", "Achal");
	    mi.SMS("7988039885", "Achal", "Hello! How are you?");
	    
	    
	    
	}
}
