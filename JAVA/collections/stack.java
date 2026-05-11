import java.util.Stack;

public class stack {
    public static void main(String[] args) {
        Stack<Integer> st = new Stack<>();
        st.push(23);
        st.push(33);
        st.push(45);
        System.out.println(st);
        st.pop();
        System.out.println(st);
    }
}
