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
/*
int main()
{

//    FILE* f = fopen("test.txt","r"); //ֻ��ģʽ
    FILE* f = fopen("test.txt","r"); //д
    if(f == NULL)
    {
        printf("%s\n",strerror(errno));
    }
    //д�ļ�
//    fputc('a',f);
//    fputc('b',f);
//    fputc('c',f);
    //���ļ�
    printf("%c", fgetc(f));
    printf("%c", fgetc(f));
    printf("%c", fgetc(f));


    fclose(f);
    f = NULL;
    return 0;
}
*/

//FILE* stdin
//stdout
//stderr

/*int main()
{

    int ch = fgetc(stdin);
    fputc(ch,stdout);


}*/

/*int main()
{
    char buf[1024] =  {0}; //������
    FILE* fp = fopen("test.txt","r");
    if(fp == NULL)
    {
        return 0;
    }

    //���ļ�
    fgets(buf,1024,fp);
    printf("%s",buf);


    fclose(fp);
    fp = NULL;
}*/
//scanf() printf(): ֻ��Ա�׼��������������ĸ�ʽ������\�������
//fscanf() fprintf(); �����������������������������ĸ�ʽ������������
//sscanf()  �Ǵ��ַ����ж�ȡ�ַ���������
//sprintf(); �ɸ�ʽ�������� �洢���ַ�����


int main()
{


}




