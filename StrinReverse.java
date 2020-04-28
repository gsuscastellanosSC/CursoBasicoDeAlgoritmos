public class StrinReverse{

    public String reverseString(String str){
        if(str.isEmpty()){
            return str;
        }else{
            return reverseString(str.substring(1))+str.charAt(0);
        }
    }
    public static void main(String[] args){
        StrinReverse obj = new StrinReverse();
        String result = obj.reverseString("Algorithms are love");
        System.out.println(result);
    }
}