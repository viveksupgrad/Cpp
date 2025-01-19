//Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.



long int reverseInteger(long int n) {
    long int reverse = 0;
    long int rev = 0;
    long int temp = abs(n);
    
    while(temp != 0){
        reverse = (reverse*10) + (temp%10);
        temp = temp/10;
    }
    if(n>0){
    rev =  reverse;}

    else{
        rev = -reverse;}
    long int num = rev;
    if (num > pow(2,31)-1 || num < -pow(2,31)){
        return 0;}
    else{
        return num;
    }
    }
