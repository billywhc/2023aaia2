/// week13-2.cpp �n�F�ѫ�򰵯x�}���k
///  �ڭ̭n���� 3 �� Parts �ӸѨM�C�o�̥u�Ψ� Part 1 Ū�J a[i][j] �M Part 2 �L�X a[i][j] �p�߮榡
# include <stdio.h>
int main()
{
    int a[10][10],b[10][10],c[10][10];
    int i,j,k,n;
    //yourcode
    //Part 1: input a[i][j]
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &a[i][j] );
        }
    }
    //Part 2: output a[i][j]
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%3d ", a[i][j] );
        }
        printf("\n");
    }
}
