项目级架构：
一般会把源文件放到src目录下，把头文件放入到include文件下，生成的对象文件放入到build目录下，最终输出的可执行程序文件会放到bin目录下，这样整个结构更加清晰。
add_subdirectory：这个语句的作用是增加编译子目录。其基本语法格式是：
add_subdirectory(source_dir [binary_dir] [EXCLUDE_FROM_ALL])
source_dir 源代码目录, binary_dir 二进制代码目录, EXCLUDE_FROM_ALL标记

这里指定src目录下存放了源文件，当执行cmake时，就会进入src目录下去找src目录下的CMakeLists.txt，所以在src目录下也建立一个CMakeLists.txt:
    EXECUTABLE_OUTPUT_PATH ：目标二进制可执行文件的存放位置
    PROJECT_SOURCE_DIR：工程的根目录