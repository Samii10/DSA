public class Stack {
    public static void main(String[] args) {
        java.util.Stack<String> stack= new java.util.Stack<>();
        stack.push("Minecraft"); // highest priority of the stack
        stack.push("Valorant");
        stack.push("COD");
        stack.push("GTA V");
        stack.push("Red Dead Redemption"); // lowest priority of the stack

        // pop method use to remove the last called objects

        String myFavGame= stack.pop(); // called last obj -Read dead to print it

        System.out.println(myFavGame);
        System.out.println(stack); // it will not print Red dead as we used pop method
        System.out.println(stack.peek());

        // peek method will call last object
        // as RDR removed by using pop, so the last object is GTA V
        // So it will print GTA V

        System.out.println(stack.search("GTA V"));

        System.out.println(stack.search("Red Dead Redemption")); // as we removed it by pop(),it will be not more in memory. print (-1)
        System.out.println(stack.search("Summertime Saga"));// Summertime saga was never in the stack, it will print (-1)

        System.out.println(stack.empty());
    }
}