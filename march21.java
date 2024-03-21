import java.util.LinkedList;
import java.util.Scanner;

class ListNode{
    int val;
    ListNode next;

    ListNode(int val){
        this.val=val;
    }
}
public class march21{


 public static  ListNode takeInput(){
ListNode head=null;
ListNode tail=null;
Scanner s=new Scanner(System.in);

int data;
data=s.nextInt();
while(data!=-1){
    ListNode newnode=new ListNode(data);
    if(head==null){
        head=newnode;
        tail=newnode;
    }
    else{
        tail.next=newnode;
        tail=tail.next;
    }
    data=s.nextInt();
}
  s.close();
    return head;
 }

 public static void print(ListNode head){
     ListNode temp=head;
     while(temp!=null){
        System.out.print(temp.val+ " ");
        temp=temp.next;
     }
     return;
 }

    

    public static void main(String[] args) {
        

        ListNode head= takeInput();
        head=reverseList(head);
         

         print(head);
    }

    public static ListNode reverseList(ListNode head) {
        ListNode curr=head;
        ListNode prev=null;
        while(curr!=null){
            ListNode temp=curr.next;
            curr.next=prev;
            prev=curr;
            curr=temp;
        }

        return prev;
    }




}
