public class Main {
    public static void main(String[] args) {
        int nums[]={6, 5, 7 ,3 ,9, 1};   //Entering given values
        int size= nums.length;
        int temp=0;

        System.out.println("Before sorting");
        for(int num: nums){
            System.out.println(num +" ");
        }

        for(int i=0; i<size; i++){
            for(int j=0; j<size-1; j++){     // (size-1) because "j" ends before the last value
                if (nums[j] > nums[j+1]){
                    temp=nums[j];            // Storing the nums value in "temp"
                    nums[j]=nums[j+1];
                    nums[j+1]=temp;
                }
            }
        }

        System.out.println("After sorting");
        for(int num: nums){
            System.out.println(num);
        }
    }
}