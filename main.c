#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//�ļ�����
//�ļ���Ϊ�������ļ�  �����ļ�

/*int main() {

    int a = 10000;
    //�ļ�ָ�� FILE*
    //fopen(const char* filename,const char* mode);
    FILE* pf = fopen("test.txt","wb");

    fwrite(&a,4,1,pf); //�����Ƶ���ʽд���ļ���

    fclose(pf);
    pf = NULL;
    return 0;
}*/
int main()
{

    FILE* f = fopen("test.txt","r"); //ֻ��ģʽ
    if(f == NULL)
    {
        printf("%s",strerror(errno));
    }

    fclose(f);
    return 0;
}
