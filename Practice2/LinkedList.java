public class LinkedList {
    ListNode head = null;
    int length = 0;


    // AddLast 
    public void addLast(int element) {
        ListNode node = new ListNode(element);
        if(length == 0){
            head = node;
        } else {
            ListNode temp = head;
            while(temp.next != null){
                temp = temp.next; 
            }
            temp.next = node;           
        }
         length += 1;

        
        }

        // AddFirst 
        public void addFirst(int element){
            ListNode temp = new ListNode(element);
            temp.next =head;
            head = temp;
            length += 1;
        }

        // AddAnyWhere 
        public void addAnywhere(int element, int data){
            ListNode node = new ListNode(data);
            ListNode temp = head;
            int position = 0;
            if(head == null){
                addFirst(element);
            } else if (temp.next == null){
                addLast(element);
            } else{
            while (position < element-1) {
                temp = temp.next;
                length ++; 
                position++;               
            }
             node.next = temp.next;
            temp.next = node;
            length++;
        }
        }

        // RemoveLast 
        public void removeLast(){
            ListNode temp = head;
            int pointer = 0;
            if(head == null){
                System.out.println("Invald....");
            } else if(head.next == null){
                head =null;
            } 
            else {
                while (pointer < length-2) {
                    temp = temp.next;
                    pointer++;
                }
                temp.next = null;
                 length--;
            }
           



        }


























       public void display() {
        ListNode temp = head;
        while(temp != null) {
            System.out.print(temp.data+" ");
            temp = temp.next;
        } System.out.println();
        System.out.println("The length is " + length);
    }
    }
    
