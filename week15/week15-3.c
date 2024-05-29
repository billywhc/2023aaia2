// LeetCode 1208. Get Equal Substrings Within Budget
// ��Ӫ��׬ۦP���r�� s, t�A�Q��u�̪��� substring�v��b�ק��ۦP�C
// �]�ק�ݭn cost, ����Ϊ�cost���W���^
// substring �O�r�ꤤ�u�Y�q�v�s�򪺦r���C�i�H�Q�� sliding window ��
// �ޥ��G���u����Ρv�@�ˡA�Y�]�k��^���k�e�i�B���]����^�A�ɰh�Y�C
int equalSubstring(char* s, char* t, int maxCost) {
    int ans = 0, i = 0, j = 0;  // �Ч� i �Q���� head �Y�Aj�Q���� tail ��
    for(int i=0; s[i]!=0; i++) { //�r�ꪺ for �j��A�r�굲���O'\0'�]�N�O0
        maxCost -= abs(s[i]-t[i]);  // �̦r���Z���A�α����� cost
        while(maxCost<0) {  // �p�G�����ΡB�ܦ��t���A�u�n�����Y�u�B�q�����٦^�h
            maxCost += abs(s[j]-t[j]);  // ���گ��٦^�h�� cost
            j++;
        }
        if(i-j+1>ans) ans = i-j+1;  // ��s����
    }
    return ans;
}
