///week09-4.cpp �r�ꪺ�禡 �ҥ� Page 4-8
#include <stdio.h>
#include <string.h> ///�n�ϥΡu�r�ꪺ�禡�v
int main()
{
    char line[100]; ///�i��100�Ӧr��,�ܪ�
    printf("�п�J�@��r��,���n���Ů�,�̫���浲����J\n");
    scanf("%s", line);

    int N = strlen(line); ///�d�X�r����� string length
    printf("�r�ꪺ���׬O:%d\n", N);
    ///�U���μg���Ѫ��N�n�F
    ///strcpy(a, "Hello");  �r����� string copy
    ///strcat(a, b); �r�굲�X ��k��b ���쥪��a���᭱ string concatenate
    ///strcmp(a, b); �r����(�v�r�����,�ݽ֤���j string compare
}
