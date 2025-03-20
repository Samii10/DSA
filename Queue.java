import java.util.LinkedList;
import java.util.Queue;

public class Main{
    public static void main(String[] args) {
        Queue<String> queue= new LinkedList<String>();

        //Concepts:
        // In queue, first or the top object is that object, which we write at the first. This is opposite of stack
        //In stack, first or the top object is that object, which we write at the last

        System.out.println(queue.isEmpty()); // we didnt hav added any elements, it will print true

        queue.offer("Super Man"); // first object of the queue
        queue.offer("Batman");
        queue.offer("Flash");
        queue.offer("Salman Khan");
        queue.offer("Hero Alam"); // last object of the queue

        System.out.println(queue); // will print every elements of the queue
        System.out.println(queue.size()); // 5 elements here, it will print 5

        System.out.println(queue.peek()); // "peek" will print first object, "Super man"

        String myhero= queue.poll(); // "poll" will remove the first object of the queue

        System.out.println(queue); // it will print every object, except "Super man"

        System.out.println(queue.size()); // we removed one element by using "poll", so the size is 4

        System.out.println(queue.isEmpty()); // added many elements in the queue, so it will print false

        System.out.println(queue.contains("Salman Khan"));  //as queue contains "Salman khan", it will print true

        System.out.println(queue.contains("Yusuf Shorkar")); // as queue don't have any elements like "Yusuf Shorkar",
                                                             // it will print false
        
        //Concept needs to remember
        //System.out.println(queue.search("Super man")); [This is wrong!]
        //Queue interface doesn't have any "search" method. "search method only can be use in Stack

    }
}  // Don't copy code after this line


//Outputs:

true
[Super Man, Batman, Flash, Salman Khan, Hero Alam]
5
Super Man
[Batman, Flash, Salman Khan, Hero Alam]
4
false
true
false
