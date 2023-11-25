#include <bits/stdc++.h> 
void sort012(int *nums, int n)
{
   //   Write your code here
         // int n=nums.size()-1;
        int i=0,j=0;  
        n--;     
        while(i<=n)
        {
            if(nums[i]==0)
            {
                nums[i]=nums[j];
                nums[j]=0;
                i++;
                j++;
            }
            else if(nums[i]==2)
            {
                nums[i]=nums[n];
                nums[n]=2;
                n--;
            }
            else
                i++;
        } 
}