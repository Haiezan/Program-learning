// 01fwrite.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int main()
{
    // 使用 "wb" 二进制写的方式打开文件
    FILE* p = fopen("D:\\a.txt", "wb");

    // 用于写出数据的缓冲区
    char buffer[1024] = { 0 };

    // 设置缓冲区数值
    buffer[0] = 'H';
    buffer[1] = 'e';
    buffer[2] = 'l';
    buffer[3] = 'l';
    buffer[4] = 'o';

    // buffer : 将指针对应的内存的写出到文件中
    // sizeof(char) : 写出的基本单元字节长度
    // sizeof(buffer) : 写出的基本单元个数,
    //       写出字节个数是 sizeof(buffer) * sizeof(char)
    // p : 文件指针
    // 返回值 : fwrite 函数返回值表示写出到的 基本单元 的个数
    size_t count = fwrite(buffer, sizeof(char), 5, p);

    // 打印写出的内容和写出的 基本单元 个数
    printf("fread : buffer = %s , write count = %u\n", buffer, count);

    // 逐个字节打印读取出数据的 ASCII 码
    int i = 0;
    for (i = 0; i < count; i++) {
        printf("buffer[%d] = %x, %c\n", i, buffer[i], buffer[i]);
    }

    printf("Main End\n");
    return 0;
}