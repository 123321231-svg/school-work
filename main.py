import time
import functools

def timer(func):
    @functools.wraps(func)  # 可以让被装饰函数的名字等信息保留，防止被后续wrapper改变函数名字等属性
    def wrapper(*args, **kwargs):  # 括号内的数字可以用来导入函数的值
        start_time = time.time()
        result = func(*args, **kwargs)  # 解包,保证原函数参数不发生改变
        end_time = time.time()
        print(end_time - start_time)
        return result  # 不让装饰把结果吃掉
    return wrapper  # 传送装饰器一个旧函数,会返回一个包装好的新函数,实际调用新函数,不返回的话python不知道啊用谁替代旧函数

@timer  # 快捷写法，等同于fib=timer(fib)
def fib(n):
    if n == 1:
        return 0
    if n == 2:
        return 1
    else:
        return fib(n - 1) + fib(n - 2)

if __name__ == '__main__':  # 只有当这个文件被执行的时候才会执行，如果不加导入就会自动运行
    n = int(input())
    print(fib(n))


