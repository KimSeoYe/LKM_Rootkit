# LKM_Rootkit 

### How to build and use

```
$ make
$ sudo insmod dogdoor.ko
$ ./bingo <target_pid>  // then it prevents a kill to a process with target_pid
$ sudo rmmod dogdoor
```