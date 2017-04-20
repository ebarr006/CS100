#!/bin/sh

# Write a script “createEmptyClassFiles.sh” that takes in parameter the class name (e.g., 
# “MyClass”) and produces in the working directory two files “MyClass.cc” and “MyClass.hh”, 
# the source and header files respectively. In addition, the last lines of  
# “MyClass.hh”/“MyClass.cc” are: ** see lab manual**

newline=$'\n'

echo "#ifndef $1_hh" > "$1.hh"
echo "#define $1_hh" >> $1.hh
echo >> $1.hh
echo "class $1 $newline{$newline	public:$newline	$1();$newline	~$1();$newline" >> $1.hh
echo "	private: $newline};$newline#endif" >> $1.hh 


echo "#include \"./$1.hh\"" > $1.cc
echo $newline >> $1.cc
echo "$1::$1()$newline{}$newline$newline$1::~$1()$newline{}" >> $1.cc
