// C++ code to find nth element of spiral matrix
// https://practice.geeksforgeeks.org/problems/find-nth-element-of-spiral-matrix/1

class Solution
{
    public:
    /*You are required to complete this method*/
    int findK(int a[MAX][MAX],int n,int m,int k)
    {
 		// Your code goes here.
 		int up=0,left=0,right=m-1,down=n-1;
 		while(up<=down && left<=right){
 		    for(int i=left;i<=right;i++){
 		        k--;
 		        if(k==0)
 		            return a[up][i];
 		    }
 		    up++;
 		    
 		    for(int i=up;i<=down;i++){
 		        k--;
 		        if(k==0)
 		            return a[i][right];
 		    }
 		    right--;
 		    
 		    for(int i=right;i>=left;i--){
 		        k--;
 		        if(k==0)
 		            return a[down][i];
 		    }
 		    down--;
 		    
 		    for(int i=down;i>=up;i--){
 		        k--;
 		        if(k==0)
 		            return a[i][left];
 		    }
 		    left++;
 		    
 		}
    }
};

