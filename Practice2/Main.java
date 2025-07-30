public class Main {
    public static void main(String[] args) {
        // ListNode a = new ListNode(1);
        // ListNode b = new ListNode(2);
        // ListNode c = new ListNode(3);
        // ListNode d = new ListNode(4);
        // ListNode e = new ListNode(5);
        // a.next = b;
        // b.next = c;
        // c.next = d;
        // d.next = e;

        // ListNode temp = a;
        // int length = 0;
        // while(temp != null){
        //     System.out.print(temp.data +" ");
        //     temp = temp.next;
        //     length += 1;
        // }
        // System.out.println();
        // System.out.println("The size of LL is " + length);

        // object of LinkedList 
        LinkedList ll = new LinkedList();
        ll.addLast(2);
        ll.addLast(3);
        ll.addLast(4);
        ll.addFirst(1);
        ll.addAnywhere(3 ,5);
        ll.removeLast();
         ll.display();
    }
}