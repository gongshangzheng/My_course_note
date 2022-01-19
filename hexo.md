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

### 建站

```bash
hexo init <folder>
cd <folder>
npm install
```

### 配置

在`config.yml`中修改
[官网](https://hexo.io/zh-cn/docs/configuration)

`package.json`
修改应用程序信息以及需要的安装模块
