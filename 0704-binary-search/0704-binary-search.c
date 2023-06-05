int search(int* nums, int numsSize, int target){
int i;
         int s=-1;

         for(int i=0;i<numsSize;i++)
         {
             if(target==nums[i])
             {
                 s=i;
                 
             }
             
         }
         return s;
}
