import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

// class TreeNode {
//     int val;
//     TreeNode left;
//     TreeNode right;

//     TreeNode(int val) {
//         this.val = val;
//     }
// }

public class april14 {


    class TreeNode {
        int val;
        TreeNode left;
        TreeNode right;
    
        TreeNode(int val) {
            this.val = val;
        }
    }

    public static TreeNode takeinput() {
        Scanner s = new Scanner(System.in);
        int data = s.nextInt();
        if (data == -1) {
            s.close();
            return null;
        }
        april14 temp=new april14();
        TreeNode root = temp.new TreeNode(data);
        Queue<TreeNode> q = new LinkedList<>();
        q.add(root);
        while (!q.isEmpty()) {
            TreeNode front = q.poll();

            int leftchild = s.nextInt();
            if (leftchild != -1) {
                TreeNode child = temp.new TreeNode(leftchild);
                front.left = child;
                q.add(child);
            }
            int rightchild = s.nextInt();
            if (rightchild != -1) {
                TreeNode child = temp.new TreeNode(rightchild);
                front.right = child;
                q.add(child);
            }
        }
        s.close();

        return root;
    }

    public static int sumOfLeftLeaves(TreeNode root) {

        return helper(root, 0);

    }

    public static int helper(TreeNode root, int isleft) {
        if (root == null) {
            return 0;
        }
        if (root.left == null && root.right == null && isleft == 1) {
            return root.val;
        }
        int a = helper(root.left, 1);
        int b = helper(root.right, 0);
        return a + b;

    }

    public static void main(String[] args) {
        TreeNode root = takeinput();

        int ans = sumOfLeftLeaves(root); 
        System.out.println(ans);

    }

}
