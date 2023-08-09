# mySql4cpp
  用CPP简单封装一下C语言的mysql API
  ## 如何使用
    直接将mySql4cpp.cc和头文件放入工程对应文件夹中即可
    如果需要生成测试程序，可以进入build文件夹，使用cmake ..后再进行make,可执行文件将会放在bin目录下
  
  ## 测试用例
    测试了connect()、write()、getError()、read()等函数，如果需要生成测试用例，请先修改test.cc中数据库的地址，用户名，密码等信息。并将write()和read()中的sql语句修改成适合您自己数据库的sql语句。
  
  ## 函数功能
  bool connect(host, user, passwd, db, port, unix_socket, client_flag)
  
    连接数据库，需要数据数据库的地址，用户名，密码，数据库名，port填0，unix_socket填nullptr， client_flag填0。后面三个参数并没有默认缺省，如果您不知道他们的作用请按我的填写。如果想了解他们的具体作用，请自行查阅相关文档。
  
  bool write(mysqlQuery)
  
    输入一句用于写入的sql语句，成功返回true，失败返回false并设置mysql的errno。
  
  pair<Result, bool> read(mysqlQuery)
  
    输入一句用于读取的sql语句，成功返回读取到的结果和true，失败返回false并设置mysql的errno。
      Result类型实际上是vector<vector<string>>类型
  
  int query(mysqlQuery)
  
    输入一句用于任意的sql语句，成功返回0，失败返回mysql的errno。读取指令请使用read()。
  
  string getError()
  
    当有mysql的errno被设置时，可以使用此函数获取对应的报错信息。

