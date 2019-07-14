import java.util.*;

class Aniket{


    
    static boolean checkPalindrome(String check){

        Queue<Character> storeChars = new LinkedList<> ();
        boolean flag = false;
        for(int index = check.length()-1 ; index >= 0 ; index--){
            storeChars.add(check.charAt(index));
        }

        for(int i = 0 ; i < check.length() ; i++){
            char element = storeChars.remove();
            if(check.charAt(i) == element){
                flag = true;
            }else{
                return false;
            }
        }

        return flag;
    }
    public static void main(String [] args){

        Scanner scan = new Scanner(System.in);
        String check = scan.nextLine();
        
        boolean result =  checkPalindrome(check);

        if(result == true){
            System.out.println("It's a palindrome ");
        }else{
            System.out.println("It's not a palindrome");
        }

        scan.close();
    }
}