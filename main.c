#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//文件操作
//文件分为：程序文件  数据文件

/*int main() {

    int a = 10000;
    //文件指针 FILE*
    //fopen(const char* filename,const char* mode);
    FILE* pf = fopen("test.txt","wb");

    fwrite(&a,4,1,pf); //二进制的形式写到文件中

    fclose(pf);
    pf = NULL;
    return 0;
}*/
/*
int main()
{

//    FILE* f = fopen("test.txt","r"); //只读模式
    FILE* f = fopen("test.txt","r"); //写
    if(f == NULL)
    {
        printf("%s\n",strerror(errno));
    }
    //写文件
//    fputc('a',f);
//    fputc('b',f);
//    fputc('c',f);
    //读文件
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
    char buf[1024] =  {0}; //缓冲区
    FILE* fp = fopen("test.txt","r");
    if(fp == NULL)
    {
        return 0;
    }

    //读文件
    fgets(buf,1024,fp);
    printf("%s",buf);


    fclose(fp);
    fp = NULL;
}*/
//scanf() printf(): 只针对标准输入流和输出流的格式化输入\输入语句
//fscanf() fprintf(); 是针对所有输入流或者所有输出流的格式化输入输出语句
//sscanf()  是从字符串中读取字符串的数据
//sprintf(); 吧格式化的数据 存储到字符串中
struct S {
    char name[20];
    int age;
    double score;
};

int main2() {
//    struct S  s = {"张三",20,55.7};
    struct S tmp = {0};
    //二进制输入
    FILE *pf = fopen("test.txt", "wb"); //二进制写
    if (pf == NULL) {
        return 0;
    }
    //二级制的形式写文件
//    fwrite(&s,sizeof(struct S),1,pf); //写入一个struct s结构到pf

    //二进制读取文件
    fread(&tmp, sizeof(struct S), 1, pf);

    printf("%s\n", tmp.name);
    printf("%d\n", tmp.age);
    printf("%lf\n", tmp.score);
    fclose(pf);
    pf = NULL;


}

int main3() {
    FILE *pf = fopen("Test.txt", "r");
    //定位指针 读取文件
    if (pf == NULL) {
        return 0;
    }
    //文件的随机读写
//    fseek(pf,2,SEEK_END);
    int pos = ftell(pf); //返回文件指针相对于起始位置的偏移量

    //读取文件
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
        perror("哈哈");  //哈哈: No such file or directory
        //perror(); 打印自定以错误信息+错误代码
        return 0;
    }
    //读取文件

    //关闭文件
    fclose(pf);

}






