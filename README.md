# kernel module

[Linuxのカーネルモジュールを書いてみた \- mcommit's message]( http://mcommit.hatenadiary.com/entry/2017/12/14/234643 )

## まずはじめに読むとわかりやすい
* [1\.カーネルとカーネルモジュール\(第1章カーネル:基本管理コースII\)]( https://users.miraclelinux.com/technet/document/linux/training/2_1_1.html )
* [カーネルモジュール作成によるlinuxカーネル開発入門 \- 第一回 hello world \- Qiita]( https://qiita.com/satoru_takeuchi/items/83c8e2f38176d2724f48 )

## memo
* `printk()`: `dmesg`で確認可能
* kernel moduleは`*.ko`をfindするとよい
* `depmod -a`でモジュールを検索し直す(`/lib/modules/$(uname -r)/kernel`配下)
* `lsmod`: moudle確認
* `modprobe`: 依存関係を考慮可能
  * `-r`: lsmodで依存関係を確認しながら外すこと
* `insmod`,`rmmod`: 依存関係を考慮しない
* `/lib/modules/$(uname -r)`: kernel modulesの配置場所

* kernel moduleの`Makefile`
  * `KERNEL_SRC`の先には`Makefile`があるはず
    * e.g. `/lib/modules/$(uname -r)/build`
```
# e.g.
make -C $(KERNEL_SRC) M=$(PWD) modules
```

`/lib/modules/$(uname -r)/build/Makefile`
```
Use make M=dir to specify directory of external module to build
```
```
help:
	@echo  '  Building external modules.'
	@echo  '  Syntax: make -C path/to/kernel/src M=$$PWD target'
	@echo  ''
	@echo  '  modules         - default target, build the module(s)'
	@echo  '  modules_install - install the module'
	@echo  '  clean           - remove generated files in module directory only'
	@echo  ''
```
