public class Main {

    // public static void reverse(ListNode head) {
    //     if(head == null) return;
    //     reverse(head.next);
    //     System.out.print(head.data+" ");
    // }

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
        // int length = 0;
        // ListNode temp = a;
        // while(temp != null) {
        //     System.out.print(temp.data+" ");
        //     length += 1;
        //     temp = temp.next;
        // } System.out.println();
        // System.out.println("The length of ll is "+length);
        // reverse(a);

        LinkedList ll = new LinkedList();

        // addLast
        ll.addLast(2);
        ll.addLast(3);
        ll.addLast(4);
        ll.addLast(6);
        ll.addLast(8);
        ll.addLast(9);
        ll.addLast(10);
        ll.addLast(11);

        // display
        // ll.display();

        // clear
        // ll.clear();
        // ll.display();
        // System.out.println("The length of ll is "+ll.size);  

        ll.display();

        // removeLast
        ll.removeLast();
        ll.display();
        System.out.println("The size of ll is "+ll.size);

        // removeFirst
        ll.removeFirst();
        ll.display();
        System.out.println("The size of ll is "+ll.size);

        // remove
        ll.remove(3);
        ll.display();
        System.out.println("The size of ll is "+ll.size);

        // isEmpty
        ll.isEmpty();

        // contains
        ll.contains(100);

        // addFirst
        ll.addFirst(100);
        
        // add
        ll.add(3, 56);
        ll.display();
    }
}
