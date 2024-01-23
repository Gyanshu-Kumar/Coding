class Node {
    public int val;
    public Node next;

    public Node(int data) {
        val = data;
        next = null;
    }
}

public class LinkedList {
    // Note the use of 'Node' instead of 'Node head' for pass by reference
    public static void insertAtHead(Node head, int val) {
        Node new_node = new Node(val);
        new_node.next = head.next;
        head.next = new_node;
    }

    public static void display(Node head) {
        Node temp = head.next;
        while (temp != null) {
            System.out.print(temp.val + "->");
            temp = temp.next;
        }
        System.out.println("NULL");
    }

    public static void main(String[] args) {
        Node head = new Node(0); // Dummy head node
        insertAtHead(head, 2);
        display(head);
        insertAtHead(head, 1);
        display(head);
    }
}
