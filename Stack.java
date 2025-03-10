public class Stack {
    public static void main(String[] args) {
        java.util.Stack<String> stack= new java.util.Stack<>();
        stack.push("Minecraft"); // last object of the stack
        stack.push("Valorant");
        stack.push("COD");
        stack.push("GTA V");
        stack.push("Red Dead Redemption"); // top object of the stack

        // pop method use to remove the object of the top
        
        String myFavGame= stack.pop(); // calling the top obj, it will print "Read dead redemption"

        System.out.println(myFavGame);
        System.out.println(stack); // it will not print Red dead as we used pop method
        System.out.println(stack.peek());

        // peek method will call top object
        // as RDR removed by using pop, so the last object is GTA V
        // So "peek" will print GTA V

        System.out.println(stack.search("GTA V")); // it will print 1, as it is the top object after using "pop"
        System.out.println(stack.search("COD"));  // it will print 2, as it is the second top object GTA V
        
        System.out.println(stack.search("Red Dead Redemption")); // as we removed it by pop(),it will be not more in memory. print (-1)
        System.out.println(stack.search("Summertime Saga"));// Summertime saga was never in the stack, it will print (-1)

        System.out.println(stack.empty());
    }
}


//outputs of this code:

Red Dead Redemption
[Minecraft, Valorant, COD, GTA V]
GTA V
1
2
-1
-1
false
