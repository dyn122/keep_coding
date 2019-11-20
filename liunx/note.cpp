/*
->linux
---linux文件目录分割用正 /  ，相对地，dos和windows用的是反 \ （可以记忆为linux是积极正面的）
   windows以盘符开始，linux以空开始
   绝对位置： /home/dyn/file.txt
   相对位置：./  当前目录
            ../  当前目录的上一目录
   目录创建规则：不超过256，不能包含特殊字符，见名知意
   目录结构：
           /: 根目录
		   /usr/bin :可执行的二进制文件
		   /opt/ 主机额外安装软件使用的文件夹
		   /proc 系统核心，外部设备，网络状态等系统文件，文件存放在内存中
		   /root 超级管理员的家目录
		   /sbin 放置超级管理员可以使用的可执行命令
		   /tmp  临时文件目录
		   /srv  服务启动之后需要访问的数据目录
		   /usr  应用程序存放目录，其中bin存放应用程序，share存放共享数据，lib存放函数库文件
		         local存放软件升级包，share/doc存放系统说明文件，share/man存放程序说明文件
           /var 存放在系统运行中经常改变的文件，例如log文件
---linux中有5种文件 目录文件 设备文件 管道文件 链接文件 普通问文件 通常以颜色区分
---文件的权限 r w x 读，写，执行
   d rwx rwx rwx    文件类型 文件的所属用户 所属用户所在用户组 其他用户
   对应 111 111 111 十进制 7 7 7 ，同理 110 000 000 对应十进制 6 0 0
---linux常用命令
   如果一个命令不知道怎么用 ls --help
   或者可以调出手册         man ls
   --ls 查看所有文件 ls -a 显示所有文件，包含隐藏文件
     ll 所有文件包含隐藏文件的列表形式  ls -lh 按照1024倍数显示文件大小显示
	 ls 通配符 例如 ls 0* 找到所有以0开头的文件
	    *匹配0-256个 ？匹配任意一个字符
		[a-z]区间法匹配，也可以写[abcde]
   --linux中的转义符\，例如*，\*则代表*本身而不会发生匹配
   --linux区分大小写
   --ctrl+l 清屏
   --mkdir 创建文件夹  ，mkdir dyn/123.txt -p 递归创建
   --输出重定向 ls > a.txt    一个> 输出重定向 两个>>叫做附加重定向附加重定向不会覆盖而会追加
---管道 一个命令的输出可以通过管道作为另一个命令的输入
    ll | more  页面很大的时候使用more来分屏
---who am i 来查询当前登录的账户
   首次设置linux的root密码，sudo passwd root
---删除操作
   rmdir 删除空目录
   rm -r 强制递归删除 -i 交互式删除  -f 不交互但不能递归删除
---链接 分为软链接和硬链接
   --ln a.txt b.txt 创建的是硬链接，相当于复制，但是链接会随着源文件的改变而改变
        即修改其中任意一个，另一个随之修改
   --ln -s a.txt（源文件) b.txt（链接文件）  后者是新建的软链接，相当于快捷方式
     删除原文件，影响链接文件
---文本搜索
---拷贝 cp
   cp -a 递归拷贝  -f 覆盖目标目录而不提示  -i 交互式拷贝
---与拷贝类似地 有mv 即移动，不赘述
---显示文件类型   file  a.txt
---归档和压缩
   归档 tar -cvf 归档文件名.tar 文件1  文件2 目录1  目录2
   解压 tar -xvf 归档文件名.tar -c 指定路径

   

   






*/