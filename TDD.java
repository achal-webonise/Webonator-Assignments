import static org.junit.Assert.*;
import org.junit.test;
import java.util.Scanner;

public class PasswordValidator
{
 @test
 Scanner myObj = new Scanner(System.in);  
 System.out.println("Enter Password");
  String Pass = myObj.nextLine();
 public void validornot()
  {
   assertEquals(true,Validator(Pass);
  }
}

public static boolean Validator(String pass)
{
 int min_passlength=6;
 int max_passlength=10;
 String pswrd="Abc@123456";
 if(pass==pswrd)
  {
    return pass.length()>=min_passlength && pass.length<=max_passlength;
  }
  else
  return false;
}
