import java.util.Scanner;
public class pallindrome {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter:");
        int temp = sc.nextInt();
        int rev=0;
        while(temp!=0){
            int rem=temp%10;
            rev=rev*10+rem;
            temp=temp/10;
        }
        System.out.println(rev);
        System.out.println(temp);
//        if(num==temp){
//            System.out.println("Pallindrome.");
//        }
//        System.out.println("Not pallindrome.");
    }
}
