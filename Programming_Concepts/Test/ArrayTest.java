public class ArrayTest
{
    public static void main(String[] args)
    {
        int [] nums = new int[10];
        
        for (int i = 0; i < 10; i++)
        {
            nums[i] = (i + 1) * 2;
        }
        
        for (int i = 0; i < 10; i++)
        {
            System.out.println(nums[i]);
        }
    }
}