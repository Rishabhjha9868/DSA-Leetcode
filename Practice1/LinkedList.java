
public class LinkedList {
    ListNode head = null;
    int size = 0;

    public void addLast(int data) {
        ListNode node = new ListNode(data);
        if(head == null) {
            head = node;
        } else {
            ListNode temp = head;
            while(temp.next != null) {
                temp = temp.next;
            } temp.next = node;
        } size += 1;
    }

    public void display() {
        ListNode temp = head;
        while(temp != null) {
            System.out.print(temp.data+" ");
            temp = temp.next;
        } System.out.println();
    }

    public void clear() {
        head = null;
        size = 0;
    }

    public void removeLast() {
        if(head == null) {
            System.out.println("Ll is empty, you cannot delete from empty ll");
        } else if(head.next == null) {
            head = null;
            size--;
        } else {
            int pointer = 0;
            ListNode node = head;
            while (pointer < size-2) {
                node = node.next;
                pointer++;
            } node.next = null;
            size--;
        }
    }

    public void removeFirst() {
        if(head == null) {
            System.out.println("Ll is empty, you cannot delete from empty ll");
        } else {
            head = head.next;
            size--;
        }
    }

    public void remove(int position) {
        if(position == 0) {
            removeFirst();
        } else if(position == size-1) {
            removeLast();
        } else if(position > size-1) {
            System.out.println("IndexOutOfBound...");
        } else {
            int pointer = 0;
            ListNode temp = head;
            while(pointer < position-1) {
                temp = temp.next;
                pointer++;
            } temp.next = temp.next.next;
            size--;
        }
    }

    public void isEmpty() {
        if(size == 0) {
            System.out.println("The ll is empty");
        } else {
            System.out.println("The ll is not empty");
        }
    }

    public void contains(int element) {
        ListNode temp = head;
        boolean flag = false;
        while(temp != null) {
            if(temp.data == element) {
                System.out.println("LL contains");
                flag = true;
                break;
            } temp = temp.next;
        }
        if(!flag) {
            System.out.println("LL not contains");
        }
    }

    public void addFirst(int element) {
        ListNode temp = new ListNode(element);
        temp.next = head;
        head = temp;
        size++;
    }

    public void add(int position, int element) {
        if(position == 0) {
            addFirst(element);
            size++;
        } else if(position == size-1) {
            addLast(element);
            size++;
        } else if(position > size-1) {
            System.out.println("IndexOutOfBound...");
        } else {
            ListNode temp = head;
            ListNode node = new ListNode(element);
            int pointer = 0;
            while(pointer < position-1) {
                temp = temp.next;
                pointer++;
            } node.next = temp.next;
            temp.next = node;
            size++;
        }
    }
}
