# LKM_Rootkit 

It is a simple Loadable Kernel Module to prevent a kill to a process with a specific process id.

## How to build and use

```
$ make
$ sudo insmod dogdoor.ko
$ ./bingo <target_pid> 
$ sudo rmmod dogdoor
```
You can build a module `dogdoor` and a a user program `bingo` using `Makefile`. 

### dogdoor
- `dogdoor` is a LKM to prevent a kill to a process with `<target_pid>`.
- You can install and remove this module using the commands `insmod` and `rmmod`.
- When you install the module, the proc file `dogdoor` is created under the directory `/proc`. This file will be removed when the module is removed.
- While this module is installed, the process with pid specified in the `/proc/dogdoor` cannot be killed.

### bingo
- `bingo` is a user program that you can deliver the target pid to the module through the proc file `/proc/dogdoor`.
- BUG : It shows an I/O error message even though it was successfully executed.
