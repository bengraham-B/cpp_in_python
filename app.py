import ctypes

lib = ctypes.CDLL('./silly.so')
lib.sayHello()
lib.addNumbers(25, 67)

lib.addNumbers(37, -117)
lib.addNumbers(15, 198)
