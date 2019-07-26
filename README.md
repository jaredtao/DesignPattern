# Design Pattern
设计模式

## 简介

参考书籍 《图解设计模式》，实现各种设计模式

使用C++11实现

## Build status

| [Linux][lin-link] | [Windows][win-link] | [Coveralls][cov-link] |
| :---------------: | :-----------------: | :-------------------: |
| ![lin-badge]      | ![win-badge]        | ![cov-badge]          |

[lin-badge]: https://travis-ci.org/jaredtao/DesignPattern.svg?branch=master "Travis build status"
[lin-link]: https://travis-ci.org/jaredtao/DesignPattern "Travis build status"
[win-badge]: https://ci.appveyor.com/api/projects/status/cckdwxaagrh2ncvo?svg=true "AppVeyor build status"
[win-link]: https://ci.appveyor.com/project/jiawentao/designpattern "AppVeyor build status"
[cov-badge]: https://coveralls.io/repos/github/wentaojia2014/DesignPattern/badge.svg?branch=master "Coveralls coverage"
[cov-link]: https://coveralls.io/github/wentaojia2014/DesignPattern?branch=master "Coveralls coverage"

## License
[![License](https://img.shields.io/badge/license-MIT-blue.svg)](https://github.com/jaredtao/TaoJson/blob/master/LICENSE)

## 目录

|编号| 类型   | 模式         | 说明                                                                                                |
|:----:| :----: | :----------: | :-------------------------------------------------------------------------------------------------: |
| 1 | 创建型 | 工厂方法模式 | [工厂方法模式](code/Create/FactoryMethod/README.md)                                                 |
| 2 | 创建型 | 抽象工厂模式 | [抽象工厂模式](code/Create/AbstractFactory/README.md)                                               |
| 3 | 创建型 | 构建模式     | [构建模式](code/Create/Builder/README.md)                                                           |
| 4 | 创建型 | 单例模式     | [单例模式](code/Create/Singleton/README.md)                                                         |
| 5 | 创建型 | 原型模式     | [原型模式](code/Create/Prototype/README.md)                                                         |
| 6 | 结构型 | 复合模式     | [复合模式](code/Struct/Composite/README.md)                                                         |
| 7 | 结构型 | 适配器模式   | [类适配器模式](code/Struct/Adapter_01/README.md) [对象适配器模式](code/Struct/Adapter_02/README.md) |
| 8 | 结构型 | 装饰模式     | [装饰模式](code/Struct/Decorator/README.md)                                                         |
| 9 | 结构型 | 窗口模式     | [窗口模式](code/Struct/Facade/README.md)                                                            |
| 10 | 结构型 | 轻量模式     | [轻量模式](code/Struct/FlyWeight/README.md)                                                         |
| 11 | 结构型 | 代理模式     | [代理模式](code/Struct/Proxy/README.md)                                                             |
| 12 | 结构型 | 桥接模式     | [桥接模式](code/Struct/Bridge/README.md)                                                            |
| 13 | 行为型 | 迭代器模式   | [迭代器模式](code/Behavior/Iterator/README.md)                                                      |
| 14 | 行为型 | 模板方法模式 | [模板方法模式](code/Behavior/TemplateMethod/README.md)                                              |
| 15 | 行为型 | 策略模式     | [策略模式](code/Behavior/Strategy/README.md)                                                        |
| 16 | 行为型 | 访问者模式   | [访问者模式](code/Behavior/Visitor/README.md)                                                       |
| 17 | 行为型 | 责任链模式   | [责任链模式](code/Behavior/ResponsibilityChain/README.md)                                           |
| 18 | 行为型 | 仲裁者模式   | [仲裁者模式](code/Behavior/Mediator/README.md)                                                      |
| 19 | 行为型 | 观察者模式   | [观察者模式](code/Behavior/Observer/README.md)                                                      |
| 20 | 行为型 | 备忘录模式   | [备忘录模式](code/Behavior/Memento/README.md)                                                       |
| 21 | 行为型 | 状态模式     | [状态模式](code/Behavior/State/README.md)                                                           |
| 22 | 行为型 | 命令模式     | [命令模式](code/Behavior/Command/README.md)                                                         |
| 23| 行为型 | 解释器模式   | [解释器模式](code/Behavior/Interpreter/README.md)                                                   |
## 总结

### 创建型模式
创建型模式对类的实例化过程进行抽象，将软件中对象的创建和使用分离。
为了使软件的结构更加清晰，外界对于这些对象只需要知道共同的接口，而不清楚其内部实现细节，使整个系统的设计更加符合单一职责原则。

创建型模式在创建什么（what） 、由谁创建（who）、何时创建（when）等方面都为软件设计者提供了尽可能大的灵活性，隐藏了类的实例创建细节，通过隐藏对象
如何被创建和组合在一起，达到整个系统独立的目的

### 结构型模式

描述如何将类和对象结合在一起形成更大的结构，就像搭积木，通过简单积木的组合形成结构复杂、功能强大的结构
分为 类结构型模式 和 对象结构型模式：
* 类结构型模式 

 关心类的组合，由多个类可以组合成一个更大的
系统，在类结构型模式中一般只存在继承关系和实现关系

* 对象结构型模式

 关心类与对象的组合，通过关联关系使得在一 个类中定义另一个类的实例对象，然后通过该对象调用其方法。 根据“合成复用原则”，在系统中尽量使用关联关系来替代继 承关系，因此大部分结构型模式都是对象结构型模式。
### 行为型模式
对不同的对象之间划分责任和算法的抽象。
行为型模式不仅仅关注类和对象的结构，而且重点关注它们之间的相互作用。
通过行为型模式，可以更加清晰地划分类与对象的职责，并研究系统在运行时实例对象 之间的交互。在系统运行时，对象并不是孤立的，它们可以通过相互通信与协作完成某些复杂功能，一个对象在运行时也将影响到其他对象的运行。

行为型模式分为类行为型模式和对象行为型模式两种：

* 类行为型模式

    类的行为型模式使用继承关系在几个类之间分配行为，类行为型模式主要通过多态等方式来分配父类与子类的职责。
* 对象行为型模式

    对象的行为型模式则使用对象的聚合关联关系来分配行为，对象行为型模式主要是通过对象关联等方式来分配两个或多个类的职责。根据“合成复用原则”，系统中要尽量使用关联关系来取代继承关系，因此大部分行为型设计模式都属于对象行为型设计模式。

### 代码结构

-code  上面"23种指针的使用方式"

    Create  5种创建型

    Behavior 11种行为型

    Struct  7种结构型

-Template 用C++模板技巧实现的，个别能复用的设计模式
    
    Create -> SingleTon  
    
    单例模板，继承模板以实现复用。
    
    c++11的static保证多线程唯一实例, c++17的inline保证创建顺序在main之前。
    
    “双检测锁定手法”、Boost那个占位器单例、《C++设计新思维》那种“凤凰单例” 都可以被消灭。。。
    
    懒汉模式：需要时才创建，就用static足够了。
    饿汉模式：main之前创建。static inline足够了。

    Behavior -> Observer

    观察者模板，继承模板以复用。

### 联系方式:

***

| 作者 | 涛哥                           |
| ---- | -------------------------------- |
|开发理念 | 弘扬鲁班文化，传承工匠精神 |
| 博客 | https://jaredtao.github.io/ |
|知乎专栏| https://zhuanlan.zhihu.com/TaoQt |
|微信公众号| Qt进阶之路 |
|QQ群| 734623697(高质量群，只能交流技术、分享书籍、帮助解决实际问题）|
| 邮箱 | jared2020@163.com                |
| 微信 | xsd2410421                       |
| QQ、TIM | 759378563                      |
***

QQ(TIM)、微信二维码

<img src="https://github.com/jaredtao/jaredtao.github.io/blob/master/img/qq_connect.jpg?raw=true" width="30%" height="30%" /><img src="https://github.com/jaredtao/jaredtao.github.io/blob/master/img/weixin_connect.jpg?raw=true" width="30%" height="30%" />


###### 请放心联系我，乐于提供咨询服务，也可洽谈有偿技术支持相关事宜。

***
#### **打赏**
<img src="https://github.com/jaredtao/jaredtao.github.io/blob/master/img/weixin.jpg?raw=true" width="30%" height="30%" /><img src="https://github.com/jaredtao/jaredtao.github.io/blob/master/img/zhifubao.jpg?raw=true" width="30%" height="30%" />

###### 觉得分享的内容还不错, 就请作者喝杯奶茶吧~~
***
