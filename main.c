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
struct S {
    char name[20];
    int age;
    double score;
};

int main2() {
//    struct S  s = {"����",20,55.7};
    struct S tmp = {0};
    //����������
    FILE *pf = fopen("test.txt", "wb"); //������д
    if (pf == NULL) {
        return 0;
    }
    //�����Ƶ���ʽд�ļ�
//    fwrite(&s,sizeof(struct S),1,pf); //д��һ��struct s�ṹ��pf

    //�����ƶ�ȡ�ļ�
    fread(&tmp, sizeof(struct S), 1, pf);

    printf("%s\n", tmp.name);
    printf("%d\n", tmp.age);
    printf("%lf\n", tmp.score);
    fclose(pf);
    pf = NULL;


}

int main3() {
    FILE *pf = fopen("Test.txt", "r");
    //��λָ�� ��ȡ�ļ�
    if (pf == NULL) {
        return 0;
    }
    //�ļ��������д
//    fseek(pf,2,SEEK_END);
    int pos = ftell(pf); //�����ļ�ָ���������ʼλ�õ�ƫ����

    //��ȡ�ļ�
    int ch = fgetc(pf);
    printf("%c\n", ch);

    fclose(pf);
    pf = NULL;
}


int main() {

//    feof(); end of file

//    perror();
    FILE *pf = fopen("TTT.txt", "r");;
    if(NULL == pf)
    {
        perror("����");  //����: No such file or directory
        //perror(); ��ӡ�Զ��Դ�����Ϣ+�������
        return 0;
    }
    //��ȡ�ļ�

    //�ر��ļ�
    fclose(pf);

}






