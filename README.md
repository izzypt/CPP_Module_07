# CPP_Module_07

This document contains the exercises of Module 07 from C++ modules.

# Table of Content

- [What are templates](#templates)
- [Templates types](#templates_types)
- [How templates work](#templates_work)


<a id="templates"></a>
# What are templates

A template is a simple yet very powerful tool in C++. 

The simple idea is to <ins>pass the data type as a parameter</ins> so that we don’t need to write the same code for different data types. 

For example, a software company may need to sort() for different data types. Rather than writing and maintaining multiple codes, we can write one sort() and pass the datatype as a parameter. 

C++ adds two new keywords to support templates: ````template```` and ```type name```. The second keyword can always be replaced by the keyword ```class```.


<a id="templates_types"></a>
# Templates types

![image](https://github.com/izzypt/CPP_Module_07/assets/73948790/d9671a03-f657-453a-aece-b969569026f5)

### Function template

A function template in c++ is a single function template that works with multiple data types simultaneously, but a standard function works only with one set of data types.

```cpp
  template<class type> return-type function-name(parameter list)
  {
    //body of the function
  }
```

Here, ```type``` is a placeholder name for a data type used by the function. It is used within the function definition.

The class keyword is used to specify a generic type in a template declaration.

### Class template

The class template in c++ is like function templates. They are known as generic templates. They define a family of classes in C++. 

Syntax of Class Template:
```cpp
    template<class Ttype>
    class class_name
    {
        //class body;
    }
```

<a id="templates_work"></a>
# How templates work

Templates are expanded at compiler time. This is like macros. 

The difference is, that the compiler does type-checking before template expansion. 

The idea is simple, source code contains only function/class, but compiled code may contain multiple copies of the same function/class. 

![image](https://github.com/izzypt/CPP_Module_07/assets/73948790/a8aafc84-fe50-4828-bb81-5d7dfc4bb3cf)
