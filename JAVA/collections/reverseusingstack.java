import java.util.Stack;

public class reverseusingstack {
    public static void main(String[] args) {
        Stack<Character> st = new Stack<>();
        String name = "Tanisk";
        System.out.println(name);
        for(char i : name.toCharArray()){
            st.push(i);
        }
        while(!st.isEmpty()){
            System.out.print(st.pop());
        }
    }
}
