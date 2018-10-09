# 访问者模式

## 双重分发 

accept 调用方法是 element.accept(visitor)

visit调用方法是visitor.visit(element)

## 将处理算法从数据结构中分离出来

易于增加Visitor

难以增加Element

Element必须向Visitor公开足够的信息