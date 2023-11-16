命令：aux_source_directory(dir var)
作用：可以将dir目录下所有的源文件存储在var变量中.
aux_source_directory()也存在弊端，它会把指定目录下的所有源文件都加进来，可能会加入一些我们不需要的文件，此时我们可以使用set命令去新建变量来存放需要的源文件，如下：
cmake_minimum_required (VERSION 2.8)

project (demo)

set( SRC_LIST
	 ./main.c
	 ./testFunc1.c
	 ./testFunc.c)

add_executable(main ${SRC_LIST})
