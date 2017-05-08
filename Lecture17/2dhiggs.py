from cpt import *
from math import *
import numpy as np

#Define the potential
def V(p):
    x = p[0]
    y = p[1]
    #V = -1/2*r^2+1/4*r^4
    #where r = sqrt(x^2+y^2)
    return -(pow(x, 2.) + pow(y, 2.))/2. + pow(pow(x, 2.) + pow(y, 2.), 2.)/4.

#Define the derivative of the potential
def dV(p):
    x = p[0]
    y = p[1]
    x = x*(pow(x, 2.) + pow(y, 2.) - 1.)
    y = y*(pow(x, 2.) + pow(y, 2.) - 1.)
    return np.array( [x,y] )

print "Minimization of the 2D Higgs potential using BFGS Algorithm"
print "Find minimum of V(x,y) given an initial guess for x and y"
p = input(" Enter starting point coordinates [x,y]: ")
gtol = input( " Enter desired accuracy: ")
V_min = -0.25
iterations = 0
res = scipy.optimize.fmin_bfgs(f = V, fprime = dV, x0 = p, gtol = gtol)
print res
print sqrt(res[0]**2. + res[1]**2.)
