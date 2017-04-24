from root_finding import * #root finding methods
from math import tan, tanh #tangent, hyperbolic tangent

def f(x) :
    return tan(x);

def g(x) :
    return tanh(x);

#note: tanh(x) has a root at 0, and tan(x) has a root at +- n*pi
#we will find the root at x = 0
x1 = -.25
x2 = .9
accuracy = 1.0e-9
max_steps_bisection = 2000
max_steps_secant = 50

print ("Results for finding roots for the tangent function")
root1 = root_bisection(f, x1, x2, accuracy, max_steps_bisection, True)
root2 = root_secant(f, x1, x2, accuracy, max_steps_secant, True)
print ("Root via bisection found at " + str(root1))
print ("Root by secant method found at " + str(root2))

print ("Results for finding roots for the hyperbolic tangent function")
root3 = root_bisection(g, x1, x2, accuracy, max_steps_bisection, True)
root4 = root_secant(g, x1, x2, accuracy, max_steps_secant, True)
print ("Root via bisection found at " + str(root3))
print ("Root by secant method found at " + str(root4))
