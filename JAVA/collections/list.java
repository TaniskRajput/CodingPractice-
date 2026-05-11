
import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;
import java.util.Iterator;

class list {

    public static void main(String[] args) {
        ArrayList<Integer> arr = new ArrayList();
        ArrayList<Integer> arr2 = new ArrayList<>();
        arr.add(30);
        arr.add(2);
        arr.add(23);
        //Iterator
        Iterator <Integer> it = arr.iterator();
        while(it.hasNext()){
            System.out.println(it.next()+"   ");
        }
        System.out.println(arr);
        arr.set(2, 30);
        System.out.println(arr);
        //remove by value
        arr.remove(Integer.valueOf(24));
        System.out.println(arr);
        System.out.println(arr.size());
        for (int i : arr) {
            System.out.print(i+" ");
        }
        System.out.println("\n");
        //sorting
        Collections.sort(arr);
        for (int i : arr) {
            System.out.print(i+" ");
        }
        System.out.println("\n");
        //copying one arraylist to another
        arr2.addAll(arr);
        System.out.println(arr2);
    }
}
