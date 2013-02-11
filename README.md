Gimp-User-Guide-zh
==================

##Gimp用户手册翻译

#### 注意事项：

- 原版PDF下载地址[http://pan.baidu.com/share/link?shareid=223152&uk=1343714529](http://pan.baidu.com/share/link?shareid=223152&uk=1343714529)
- 翻译前先在[wiki页面](https://github.com/nonoDevil/Gimp-User-Guide-zh/wiki)认领文章。
- 请大家在文章首注明自己的职责和ID 。(雷锋做好事还记在日记本呢)
- 对于内容很长的部分，“翻译”处可填写多人名字，参与翻译该章节的协作者协调具体分工。
- 为了提高翻译质量，请大家对照 PDF 进行翻译。
- 每篇 PDF 基本上都有作者介绍，为了不重复进行此段翻译，我将此段删除了。
- 文本内容是直接从 PDF 上复制下来的，所以没有分段，且部分内容乱序，请大家翻译时候对照着 PDF 分段，这样方便校对。


#### 需要的git操作：

- 如果是初次使用github，需要在本机生成一个 ssh-key, 方法如下：
	
	$ cd ~/.ssh   #没有的话在～目录建立一个.ssh目录

	$ ssh-keygen -t rst -C "example@example.com"  #引号里面是你的github帐号

	接着会出现让你为rsa 和 rsa.pub 输入存放路径的提示语，都按下回车键保存在默认路径即可

	$ sudo apt-get install xclip   #安装复制工具
	
	$ xclip -sel clip < ~/.ssh/id_rsa.pub #这是将id_rsa.pub里的内容复制到粘贴板上

	接着进入你的github主页，右上角有个扳手和螺丝的 Account settings 图标，点击进入，点击左侧的 SSH Keys，然后单击主页面的Add SSH key, title输入一个可以用来表示本机的名字比如ubuntu，然后下面的key就用CTRL + v 把复制的id_rsa.pub粘贴进来，最后点击Add key即可，这样就完成了github仓库与本机之间的ssh密钥配置

- 如何开始进行工作：

	$ cd ~

	$ mkdir git

	$ cd git 

	$ git clone git@github.com:yourname/Gimp-User-Guide-zh.git  #yourname是你的githubID

	然后等clone完就可以进行翻译了

	翻译完对应的文章后

	$ git add theFileYouTranslate    #theFileYouTranslate 是你翻译的那篇文章的名字如 LXF114_tut_gimp.txt

	$ git commit -m "本次提交的一些注释提醒"    #提醒简短意赅, 如114的翻译, 114的错别字订正

	$ git push origin master

	最后，在你的github中的Gimp-User-Guide-zh仓库右上角点击 Pull Request 按钮即可。

- 获取nonoDevil(项目主仓库)的最新内容

	$ git remote add nonoDevil git://github.com/nonoDevil/Gimp-User-Guide-zh.git

	$ git remote
	origin
	nonoDevil

	$ git fetch nonoDevil

	$ git merge nonoDevil/master

	这样你的仓库和nonoDevil的仓库都是最新的了

	$ git add . 

	$ git commit -m "update"

	$ git push origin master 

	这样你github帐号上的仓库也是最新的了
	
	以上命令等价于 

	$ git pull git://github.com/nonoDevil/Gimp-User-zh.git    

	强烈建议在翻译前执行此命令来确保你当前的仓库是最新的，这样能做大大的避免冲突

#### FYI:
- git - 简易指南：[http://rogerdudler.github.com/git-guide/index.zh.html](http://rogerdudler.github.com/git-guide/index.zh.html)

#### 翻译格式:
- 文章内容
	正文按pdf的顺序翻译，每页最底下的文字在前面加上圆括号，标注为页底（如：（页底）×××××）
	插画下的文字，前面加上圆括号标注为插话（如：（插话）×××××××），然后按顺序均放在正文的最底部。
	结尾的 LXF 标志在中外杂志中都很常见。它本质上是个图形符号，不是文本；而且它是用于标明杂志结构的，不是文章的一部分。不需要翻译
- 专业名词
	所有专业词语，均以如下方式出现：
	词语的汉语释义（词语的英文）	例如：蒙版（mask）
	增加词语的时候加入任意一行，保存后，执行：
	$ ./sortfile   #自动对wordMap.txt进行按字母顺序的排序 
