// 01fwrite2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int main()
{
    // 使用 "wb" 二进制写的方式打开文件
    FILE* p = fopen("D:\\a.txt", "wb");

    // 设置写入变量
    int number = 0x12345678; //0x 16进制

    // buffer : 将指针对应的内存的写出到文件中
    // sizeof(char) : 写出的基本单元字节长度
    // sizeof(buffer) : 写出的基本单元个数,
    //       写出字节个数是 sizeof(buffer) * sizeof(char)
    // p : 文件指针
    // 返回值 : fwrite 函数返回值表示写出到的 基本单元 的个数
    size_t count = fwrite(&number, sizeof(int), 1, p);

    printf("Main End\n");
    return 0;
}