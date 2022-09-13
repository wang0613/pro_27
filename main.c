#include <stdio.h>

//文件操作
//文件分为：程序文件  数据文件

int main() {

    int a = 10000;
    FILE* pf = fopen("test.txt","wb");

    fwrite(&a,4,1,pf); //二进制的形式写到文件中

    fclose(pf);
    pf = NULL;
    return 0;
}
