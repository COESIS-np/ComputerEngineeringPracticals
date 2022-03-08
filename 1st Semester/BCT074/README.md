# C-programming - practical worksheet programs
## first semester - Batch - 2074 - BCT
***Especially for Sagarmatha Engineering college***

This repo contains C programs that need to be run on practical classes . These are the codes present in the sheets given during practical or the codes you have to write.

- Each sheets have corresponding `SHEET-n ` folder. [Click me for note](#noted)
- The Questions given in sheet are named as `Q-n.C`.
- The Sub-questions are named as `Q-n-X.C`.
- The answers to *Write a program* are named as `Q-n-A.C`.
- The code for programs that contains errors and are needed to be analyzed are named as `Q-n-X-N.C` 

### **Before SHEET-4** 
> The programs written are solely compatible in `Turbo C++`,*an old stupid program for today's world.* Hence program contains weird things like:

```C
    #include <conio.h>
    void main(){ 
        clrscr(); // what ??
        getch(); // To terminate the running program ??? LoL
    }

```

> Hence avoid using editors like `code::blocks,geany` which use compilers like `gcc`,`mingw`

### **SHEET-4 and after**
> I have commented out all those weird things . And also :
```C
    void main(){
    
    }
```
> has been replaced by :
```C
    int main(){
    
        return 0;
    }
```
> Obvious but still! Who knows?

## Edit
- If you really want to run it in such editors or use other compilers, While compiling/building avoid strict compile check flags like *`-Wall` in `gcc`*, 
> `gcc -o `~-Wall~ `"output-file" "file.c"`
- Omit `#include <conio.h>` *that won't work* ,
- Omit `getch()`,`clrscr()`;
- `void main()` works good if you remove **strict** flag.
- ***Even after doing all this, `TurboC++` gives different result while doing complex operator precedence problems like :***
`c = b++ - --a + ++a - --b + a * b` *LoL*
---
<a name="noted">*note*</a> :

- `n` represents number. Example 1,2,3.
- `X` represents sub questions that are usually written in roman . Example : I,II
- `N` represents analytical questions that contains error by design.
- `BCT` represents Bachelors in computer engineering (group).
