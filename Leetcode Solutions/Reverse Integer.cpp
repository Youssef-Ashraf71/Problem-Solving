class Solution {
public:
    long long reverse(long long x) {
 string s;s=""; s+=to_string(x);
long long rev=0,i;
long long power=1;
if(s[0]!='-') {
    for (i = 0; i < s.size(); i++) {
        rev += power * (s[i] - '0');
        power *= 10;
    }
}else{
    for (i = 1; i < s.size(); i++) {
        rev += power * (s[i] - '0');
        power *= 10;
    }
}
   long long bnd1=
-2147483648;
        long long bnd2=
2147483648-1;
 if(x>0 && rev<bnd2)
     return (int)rev;
        else if(x<0 && -rev>bnd1)
            return -(int)rev;
        else
            return 0;
    }

};