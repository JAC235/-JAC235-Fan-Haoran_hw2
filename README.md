# 嵌入式基础自学笔记

## 安装PlatformIO

因为VScode上面直接安装拓展程序所以没有遇到什么问题

![](https://p.ipic.vip/4ppt2h.png)

## 组装板子

最开始不知道板子组装是什么原理，问了学长才知道

**面包板**横向一列点位相等、纵向没有关联，中间有空格的不相互连接，旁边正负级竖向一列点位相等，一般用于接地和接正极

Arduino里面“A”对应的引脚表示模拟信号，“D”对应的引脚表示数字信号（本次使用），其他如下

![](https://p.ipic.vip/mm1k15.png)

最后组装完成

![](https://p.ipic.vip/usx8pi.jpeg)

## 初始化调试

复制初始化程序代码

![](https://p.ipic.vip/wx5ehh.png)

编译程序上传，运行成功

<video src="https://p.ipic.vip/spol0d.mp4">


## 任务一

代码如下，令3脚对应LED灯间歇亮灭：

![](https://p.ipic.vip/c01j6e.png)

效果视频：

<video src="https://p.ipic.vip/lcxjkp.mp4">
## 任务二


因为mac不能下载提供的串口监视器，所以下载ArduinoIDE进行串口通讯

错误一：不能用串口烧录程序

![](https://p.ipic.vip/1903vp.png)

显示错误如上，因为发现直接用USB线连接开发板可以进行程序烧录，所以解决了此问题

错误二：向串口发送信息的时候选择了有结束符，结果串口多接收了两个空格

![](https://p.ipic.vip/8fj1jy.png)

选择没有结束符解决了此问题

简单代码：

![](https://p.ipic.vip/eb44ep.png)

效果视频

<video src="https://p.ipic.vip/u62ggq.mp4">


## 任务三

问题：v0所接继电器阻值太高，导致显示亮度太低，只看得见背光

![](https://p.ipic.vip/cpcfnj.jpeg)

成功代码：

![](https://p.ipic.vip/zd0wal.png)

成功图片：

![](https://p.ipic.vip/zzsyqm.jpeg)
