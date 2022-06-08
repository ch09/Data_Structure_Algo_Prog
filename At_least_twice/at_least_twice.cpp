class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        //set<int> s; //define empty set //ordered way //unordred_set() // every value is unique 
        set<int>::iterator itr;  // we do not need this !! 

        //Assign nums to s 
        set<int> s(nums.begin(),nums.end()); 

        //1,2,3,1  --> set : 1,2,3
        //if s and nums has the same size means are all distincts so false 
        
        if (s.size() == nums.size())
            return false; 
        else 
            return true;
            
    
    }
};