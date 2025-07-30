public class LinkedList {

   Listnode head = null;
    int size = 0;
     public void addLast(int data) {
        Listnode node = new Listnode(data);
        if(head == null) {
            head = node;
        } else {
            Listnode temp = head;
            while(temp.next != null) {
                temp = temp.next;
            } temp.next = node;
        } size += 1;
    }
      public void display() {
        Listnode temp = head;
        while(temp != null) {
            System.out.print(temp.data+" ");
            temp = temp.next;
        } System.out.println();
        System.out.println(size);
    }
 }


