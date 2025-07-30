public class Main {

    public static void main(String[] args) {
    //     Listnode a = new Listnode(1);
    //     Listnode b = new Listnode(2);
    //     Listnode c = new Listnode(3);
    //     Listnode d = new Listnode(4);
    //     Listnode e = new Listnode(5);
    

    // a.next = b;
    // b.next = c;
    // c.next = d;
    // d.next = e;
    //     int length = 0;
    //     Listnode temp = a;
    //     while(temp != null) {
    //         System.out.print(temp.data+" ");
    //         length += 1;
    //         temp = temp.next;
    //     } 
    //     System.out.println();
    //     System.out.println("The length of ll is "+length);
    LinkedList ll =new LinkedList();
        ll.addLast(1);
        ll.addLast(2);
        ll.addLast(3);
        ll.addLast(4);
        ll.addLast(5);
        ll.display();
    }
}