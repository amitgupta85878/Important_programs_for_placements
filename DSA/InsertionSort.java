import java.util.Scanner;

public class In_sort {

	public static void main(String[] args) {
		  Scanner in=new Scanner(System.in);
		  System.out.println("Enter total number of elements in array");
	      int num=in.nextInt();
		  int array[]=new int[num];
		  System.out.println("Enter values");
		  for(int i=0;i<num;i++) {
			  array[i]=in.nextInt();
		  }
          insertion(array);
          System.out.println("Sorted array is");
          for(int i=0;i<array.length;i++) {
			  System.out.print(array[i]+" ");
		  }
	}
	public static void insertion(int arr[]) {
		int length=arr.length;
  	    for(int i=1;i<length;i++) { 
  	    	int index=i;
  	    	int j=index-1;               
  	    	int value=arr[index];
  	    	while(j>=0) {
  	    		if(arr[j]>arr[index]) {  //start comparing with left part of array
  	    			int temp=arr[index]; //swap
  	    			arr[index]=arr[j];
  	    			arr[j]=temp;
  	    			}
  	    		index=j;
	    		j--;
  	    	}
  	    }
	}
}
