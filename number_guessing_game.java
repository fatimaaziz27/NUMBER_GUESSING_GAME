import java.util.*;
public class Main {
    public static void main(String[] args) {
      
    Random rand = new Random();
    int n = rand.nextInt(100) + 1;   
    
    int a = -1;
    int guesses=0;

    Scanner sc = new Scanner(System.in);
    while (a!=n){
      guesses ++;

      System.out.println("Enter a number: ");
      a = sc.nextInt();
      
      if (a > n){
        System.out.println("Enter lower number");
      }

      else if(a < n){
        System.out.println("Enter higher number");
      }
    } 
    System.out.println("The number you guessed in "+ guesses +" attempts.");
  }
}
