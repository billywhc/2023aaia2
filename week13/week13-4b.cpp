/// week13-4b.cpp �D��Ƥ��̤j���]��
#include <stdio.h>
int gcd(int a, int b) {
    if(a==0) return b;
    if(b==0) return a; ///�o��i���μg
    return gcd(b, a%b);
} ///�禡�I�s�禡, ����۰��k

int main()
{ ///�U���O C �y�����g�k, �Ѯv���˳o��
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", gcd(a,b) );
}
