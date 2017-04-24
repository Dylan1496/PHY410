from trapezoid import *  #Trapezoid rule
from simpson import *  #Simpson's rule
from math import *  #exp(x)

#set parameters
n = 1000  #number of subintervals to take
a = 0.  #starting endpoint
b = 1.  #finishing endpoint
f = exp  #function to integrate

#calculate the integral using simpson's rule and the trapezoid rule
ans1 = trapezoid(f, a, b, n)
ans2 = simpson(f, a, b, n)

print("Value from trapezoid rule: " + str(ans1))
print("Value from Simpson's rule: " + str(ans2))
