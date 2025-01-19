//Easy level
//return true if the number is palindrome
//take care of the negative sign if the number is negative
//take long int so that any integer is handled

bool checkPalindrome(int n){
    long int reverse = 0;

    long int temp = n;

    if(temp>0){while(temp != 0){
        reverse = (reverse*10) + (temp%10);
        temp = temp/10;
    }}
    else{
    long int temp2 = abs(n);
    while(temp2 != 0){
        long int reverse1 = 0;
        reverse1 = (reverse1*10) + (temp2%10);
        temp2 = temp2/10;
        string reverse2 = to_string(reverse1);
        string reverse3 = reverse2.append("-");
        long int reverse = stoi(reverse3);

    }
    }

    return (reverse == n);
}
//time complexity is O(logN)
