/*Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

 

Example 1:

Input: nums = [1,2,3,1]
Output: true
Example 2:

Input: nums = [1,2,3,4]
Output: false
Example 3:

Input: nums = [1,1,1,3,3,4,3,2,4,2]
Output: true
*/
bool containsDuplicate(int* nums, int numsSize){
    int i,j,n,sameelement;
    n=numsSize;
    for(i=0 ; i <n ; i++){
        sameelement=nums[i];
        for(j=i+1; j<n ; j++){
            if(sameelement==nums[j]){
                return true;
            }
             }
        }
    return false;
       
        }

    
 
