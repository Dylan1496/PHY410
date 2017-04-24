from root_finding import * #root finding methods
from math import *  #trig functions

def f(x) :
    return tan(x);

def g(x) :
    return tanh(x);

def df(x) :
    return 1./((cos(x))**2);

def dg(x) :
    return (2.)/(cosh(2*x)+ 1);

x0 = 1.0886594922
root_tan = root_tangent(f, df, x0, root_debug = True)
root_tanh = root_tangent(g, dg, x0, root_debug = True)
print("Root of tangent function: " + str(root_tan))
print("Root of hyperbolic tangent function: " + str(root_tanh))
