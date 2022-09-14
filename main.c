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


int main()
{


}




