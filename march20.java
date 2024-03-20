import java.util.LinkedList;
import java.util.Scanner;

class ListNode{
    int val;
    ListNode next;

    ListNode(int val){
        this.val=val;
    }
}
public class march20 {


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
        
        ListNode head=takeInput();
        print(head);
     Scanner s=new Scanner(System.in);
        ListNode list1= takeInput();
        int a,b;
        a=s.nextInt();
        b=s.nextInt();
        
        ListNode list2=takeInput();
         ListNode ans=mergeInBetween(list1,a,b,list2);

         print(ans);
    }


    public static int length(ListNode head){
        int count=0;
        while(head!=null){
            count++;
            head=head.next;
        }
        return count;
    }
    public static ListNode mergeInBetween(ListNode list1, int a, int b, ListNode list2) {
        LinkedList<Integer> l1=new LinkedList<>();
        int len1=length(list1);
        ListNode head=list1;
        while(a>0 && list1!=null){
            l1.add(list1.val);
            list1=list1.next;
            a--;
        }
        list1=head;
        while(b>=0&& list1!=null){
            list1=list1.next;
            b--;
        }
        while(list2!=null){
            l1.add(list2.val);
            list2=list2.next;
        }
    
        while(b<len1-1&& list1!=null){
   l1.add(list1.val);
   list1=list1.next;
     b++;
        }
    
     ListNode dummy = new ListNode(-1);
        ListNode current = dummy;
        for (int num : l1) {
            current.next = new ListNode(num);
            current = current.next;
        }
        
        return dummy.next;

    }



}
