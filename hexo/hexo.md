# 学习使用hexo

## 参考

[知乎1](https://zhuanlan.zhihu.com/p/85037427)
[CSDN1](https://blog.csdn.net/sinat_37781304/article/details/82729029)

## hexo是什么？

`hexo`是一个快速、简洁且高效的博客框架。Hexo 使用 `Markdown`（或其他渲染引擎）解析文章，在几秒内，即可利用靓丽的主题生成静态网页。即把用户的 markdown 文件，按照指定的主题解析成静态网页。

## 安装

需要先安装`Node.js`和`Git`

`npm`是`node.js`的包管理工具(Node Package Manager)

检测安装是否成功的方法是一致的，在命令行程序中输入`** --version`
**是该项目的名称，如npm，git或是node

<u>是否安装了呢？</u>

### 安装hexo

```bash
npm install -g hexo-cli
```

## 建站

先选择一个文件夹进入，输入以下内容

```bash
hexo init <folder>
cd <folder>
npm install
```

此时文件夹目录下有：

node_modules: 依赖包
public：存放生成的页面
scaffolds：生成文章的一些模板
source：用来存放你的文章
themes：主题
**_config.yml: 博客的配置文件**

在命令行程序中输入以下内容

```bash
hexo g
hexo server
```

其中，g for generate， 在本地生成数据库文件，目录等

## GitHub配置

### 创建个人仓库

[GitHub创建个人仓库](https://blog.csdn.net/sinat_37781304/article/details/82729029)

### 生成SSH

### 配置

在`config.yml`中修改
[官网](https://hexo.io/zh-cn/docs/configuration)

`package.json`
修改应用程序信息以及需要的安装模块

## 绑定个人网站

[个人博客](https://blog.csdn.net/heimu24/article/details/81159099)

在`custom domain`处写入你的网址

此处注意国内购买网址的话需要备案。

在博客文件source中创建一个名为`CNAME`的文件，注意不要有后缀，如果是txt文件，就打开隐藏模式，删除后缀`.txt`。

在`CNAME`中写上域名即可。

而后进入命令行程序，输入：

```bash
hexo clean
hexo g #generate the files
hexo d #deploy the website
```

## 写文章

```bash
hexo new newpapername
```

## hexo配置

进入`_config.yml`

### 网站

| 参数       | 描述                 |
| ---------- | -------------------- |
| layout     | 布局                 |
| title      | 标题                 |
| date       | 建立日期             |
| updated    | 更新日期             |
| comments   | 开启文章的评论功能   |
| tags       | 标签（不适用于分页） |
| categories | 分类（不适用于分页） |
| permalink  | 覆盖文章网址         |

### 网址

| 参数               | 描述                   |
| ------------------ | ---------------------- |
| url                | 网址                   |
| root               | 网站根目录             |
| permalink          | 文章的 永久链接 格式   |
| permalink_defaults | 永久链接中各部分默认值 |

`permalink`有这些值
[permalink](https://hexo.io/zh-cn/docs/permalinks)
