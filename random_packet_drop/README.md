# random_packet_drop

[Creating a simple ‘hello world’ Netfilter module \| Paul Kiddie]( https://www.paulkiddie.com/2009/10/creating-a-simple-hello-world-netfilter-module/ )

working dirがsshfs上のディレクトリで`sudo insmod`を行ったときのエラーの例
```
insmod: ERROR: could not load module ../random_packet_drop.ko: Permission denied
```

## WARN
なぜかlsするとterminalがfreezeするため，どこかにバグが存在する
