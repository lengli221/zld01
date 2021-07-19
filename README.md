# ZLD01

#### 介绍
MD BootLoader 6A

#### 软件架构
软件架构说明


#### 安装教程

1.  xxxx
2.  xxxx
3.  xxxx

#### 使用说明

20210717--备注
功能:
1.  美团6A bootloader 仅支持485远程升级接口
存在问题:
1. bootloader与App层协议不兼容

20210719--分析
问题:
--》现象:
	--》远程升级将主控升挂掉
--》实质:
	--》升级在操作App区域市,看门狗复位
		--》上一版看门复位时间为:1.25S--》根据官方数据手册--》擦除FLASH扇区中128KB时间,type=1,max=2
解决方案:
--》1.将看门狗时间由1.5S修改为2.5S
--》2.在擦除备份区成功之后,清楚FLASH操作标志(仅用于优化)


#### 参与贡献

1.  Fork 本仓库
2.  新建 Feat_xxx 分支
3.  提交代码
4.  新建 Pull Request


#### 特技

1.  使用 Readme\_XXX.md 来支持不同的语言，例如 Readme\_en.md, Readme\_zh.md
2.  Gitee 官方博客 [blog.gitee.com](https://blog.gitee.com)
3.  你可以 [https://gitee.com/explore](https://gitee.com/explore) 这个地址来了解 Gitee 上的优秀开源项目
4.  [GVP](https://gitee.com/gvp) 全称是 Gitee 最有价值开源项目，是综合评定出的优秀开源项目
5.  Gitee 官方提供的使用手册 [https://gitee.com/help](https://gitee.com/help)
6.  Gitee 封面人物是一档用来展示 Gitee 会员风采的栏目 [https://gitee.com/gitee-stars/](https://gitee.com/gitee-stars/)
