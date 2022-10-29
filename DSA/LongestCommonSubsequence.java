import java.util.Scanner;
class findSubsequence{
	int lcs(int x, int y, String s1, String s2)
     {
        int[][] store=new int[x+1][y+1];
        for(int i=0;i<=x;i++){  //i=str1
            for(int j=0;j<=y;j++){  //j=str2
                if(i==0 || j==0){
                    store[i][j]=0;  //when no character present, common length will be 0
                }
                else if(s1.charAt(i-1)==s2.charAt(j-1)){
                   store[i][j]=1+store[i-1][j-1];
                }
                else{
                    store[i][j]=Math.max(store[i][j-1],store[i-1][j]);
                    //store[i][j-1] , including char of str1
                    //store[i-1][j] , including char of str2
                }
            }
        }
        return store[x][y];
      }
}
public class LCS {

	public static void main(String[] args) {
		Scanner in=new Scanner(System.in);
		System.out.println("Enter Two Strings");
		String s1=in.next();
		String s2=in.next();
		int s1_length=s1.length();
		int s2_length=s2.length();
		findSubsequence obj=new findSubsequence();
		System.out.println("Length of the longest common subsequence is "+obj.lcs(s1_length,s2_length,s1,s2));
	}

}
