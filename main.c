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
int main()
{

    FILE* f = fopen("test.txt","r"); //只读模式
    if(f == NULL)
    {
        printf("%s",strerror(errno));
    }

    fclose(f);
    return 0;
}
