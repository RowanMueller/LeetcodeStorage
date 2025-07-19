class Palindrome_9 {
    public:
        //create a boolean function to check if the number is a palindrome
        bool isPalindrome(int x) {
            //any negative number is not a palindrome
            if(x<0)
                return false;
            
            //create a variable to store the number
            int n=x;
            //create a variable to store the reversed number
            long rev=0;
    
            //while the number is not 0, we will reverse the number
            while(n){
                rev=10*rev+n%10;
                n/=10;
            }
            
            //if the reversed number is equal to the original number, then it is a palindrome
            if(rev==x)
                return true;
            //if the reversed number is not equal to the original number, then it is not a palindrome
            return false;
        }
    };