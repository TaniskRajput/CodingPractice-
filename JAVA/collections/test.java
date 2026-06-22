public class test {
    public static void main(String[] args) {
        int result = getReturnValue();
        System.out.println("The function returned: " + result);
    }

    public static int getReturnValue() {
        try {
            return 10;
        } catch (Exception e) {
            return 20;
        } finally {
            return 30;
        }
    }
}
