# 对象的适配器模式

Painter为要适配的对象

Banner为适配者

PainterBanner是适配器。

适配器继承了Painter接口，内部聚合了一个Banner对象，利用Banner已有的功能 实现Painter的接口