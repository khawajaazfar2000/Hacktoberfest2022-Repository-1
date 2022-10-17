class Solution {
public:
    bool isHappy(int n) 
    {
        // using the division and modulus operators
        // to repeatedly take digits off the number until none remain,
        // and then squaring each removed digit and adding them together
        // using a set each time generating the next number in the chain, 
        // and checking if it's already in our HashSet.
        // If it is not in the HashSet, add it.
        // If it is in the HashSet, that means we are in a cycle and so should return false.

        set<int> myset;
        int val;
        int index;
        while(true)
        {
            val = 0;
            while(n)
            {
                index = n % 10;
                val += index*index;
                n /= 10;
            }
            if(val == 1)
                return true;
            else if(myset.find(val) !=  myset.end())
                return false;
            myset.insert(val);
            n = val;
        }
        return false;
    }
};

// T.C. :O(log n)
// S.C. :O(log n)




// keeping track of 2 values, called the slow and the fast. At each step, the slow goes forward by 1 number in the chain, 
// and the fast goes forward by 2 numbers (nested calls to the getNext(n) function)
// If n is a happy number, i.e. there is no cycle, then the fast will eventually get to 1 
// before the slow and If n is not a happy number, then eventually the fast and the slow will be on the same number


class Solution {
public:

    bool isHappy(int n) 
    {
        int slow = n;
        int fast = getNext(n);
        while(fast != 1 && slow != fast)
        {
            slow = getNext(slow);
            fast = getNext(getNext(fast));
        }
        return fast = 1;
    }



    int getNext(int n)
    {
        int sum = 0;
        while(n > 0)
        {
            int d = n % 10;
            n = n / 10;
            sum += d*d;
        }
        return sum;
    }
};


// T.C. :O(log n)
