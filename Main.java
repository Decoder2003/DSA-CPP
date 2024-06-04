public class Main {
    public static void fun(int n){
        if(n==1){
            return;
        }
        fun(--n);
        System.out.println(n);
    }

    public static void main(String[] args){
        Main obj = new Main();
        fun(10);
    }
}