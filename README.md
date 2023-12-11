# CPP_Module_07

This module is designed to help you understand Templates in CPP. 

# Table of Content

- [What are templates](#templates)
- [Templates types](#templates_types)
- [How templates work](#templates_work)


<a id="templates"></a>
# What are templates

A template is a simple yet very powerful tool in C++. 

The simple idea is to <ins>pass the data type as a parameter</ins> so that we don’t need to write the same code for different data types. 

For example, a software company may need to ```sort()``` for different data types. Rather than writing and maintaining multiple codes, we can write one ```sort()``` and pass the datatype as a parameter. 

C++ adds two new keywords to support templates: ````template```` and ```typename```. The second keyword can always be replaced by the keyword ```class```.


<a id="templates_types"></a>
# Templates types

![image](https://github.com/izzypt/CPP_Module_07/assets/73948790/d9671a03-f657-453a-aece-b969569026f5)

### Function template

A function template in c++ is a single function template that works with multiple data types simultaneously, but a standard function works only with one set of data types.

A function template starts with the keyword ```template``` followed by template parameter(s) inside <> which is followed by the function definition.

```cpp
  template <typename T>
  T functionName(T parameter1, T parameter2, ...)
  {
    // code
  }
```
In the above code, T is a template argument that accepts different data types (int, float, etc.), and ```typename``` is a keyword.

When an argument of a data type is passed to functionName(), the compiler generates a new version of functionName() for the given data type.

### Calling a Function Template

Once we've declared and defined a function template, we can call it in other functions or templates (such as the main() function) with the following syntax

functionName<dataType>(parameter1, parameter2,...);

For example, let us consider a template that adds two numbers:

```cpp
  template <typename T>
  T add(T num1, T num2)
  {
    return (num1 + num2);
  }
```

We can then call it in the main() function to add int and double numbers.

```cpp
int main() {

    int result1;
    double result2;
    // calling with int parameters
    result1 = add<int>(2, 3);
    cout << result1 << endl;

    // calling with double parameters
    result2 = add<double>(2.2, 3.3);
    cout << result2 << endl;

    return 0;
}    
```
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

A class template starts with the keyword template followed by template parameter(s) inside <> which is followed by the class declaration.

```cpp
    template <class T>
    class className
    {
        private:
          T var;
          ... .. ...
        public:
          T functionName(T arg);
          ... .. ...
    };
```

In the above declaration, T is the template argument which is a placeholder for the data type used, and class is a keyword.

Inside the class body, a member variable var and a member function functionName() are both of type T.

### Creating a Class Template Object

Once we've declared and defined a class template, we can create its objects in other classes or functions (such as the main() function) with the following syntax

```cpp
className<dataType> classObject;
```

For example,

```cpp
className<int> classObject;
className<float> classObject;
className<string> classObject;
```

<a id="templates_work"></a>
# How templates work

Templates are expanded at compiler time. This is like macros. 

The difference is, that the compiler does type-checking before template expansion. 

The idea is simple, source code contains only function/class, but compiled code may contain multiple copies of the same function/class. 

![image](https://github.com/izzypt/CPP_Module_07/assets/73948790/a8aafc84-fe50-4828-bb81-5d7dfc4bb3cf)
