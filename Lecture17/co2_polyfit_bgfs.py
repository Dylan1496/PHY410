from cpt import *
from numpy import linspace

#fetch the CO2 data
#CO2 data from ftp://ftp.cmdl.noaa.gov/ccg/co2/trends/co2_mm_mlo.txt
print ' C02 Data from Mauna Loa'
data_file_name = 'co2_mm_mlo.txt'
file = open(data_file_name, 'r')
lines = file.readlines()
file.close()
print ' read ', len(lines), 'lines from', data_file_name

xvec = []
yvec = []

for line in lines:
    if line[0] != '#' :
        try:
            words = line.split()
            xval = float( words[2] )
            yval = float( words[4] )
            yvec.append( yval )
            xvec.append( xval )
        except ValueError :
            print 'bad data:', line

N = len(xvec)
sigma = [0.001] * N

#define the chi square value
def chi_square(x, y, sigma, a, b, c):
    chi_square = 0.0
    for i in xrange(len(x)):
        chi_square += pow((y[i] - (a*pow(x[i], 2.) + b*x[i]+c))/(sigma[i]), 2.)
    return chi_square

#define choices for a, b, and c
a = linspace(0.011, .015, 101)
b = linspace(-50., -40., 101)
c = linspace(42800, 47500, 101)

#initalize the best chi square and the parameters
chi_square_best = 0.0
a_best = 0.0
b_best = 0.0
c_best = 0.0

#loop over the parameters in the parameter arrays
for i in xrange(len(a)):
    for j in xrange(len(b)):
        for k in xrange(len(c)):
            #in case you want to see the program run through everything,
            #uncomment the line below
            #print i, j, k
            chi_test = chi_square(x = xvec, y = yvec, sigma = sigma, a = a[i], b = b[j], c = c[k])
            if i == 0 and j == 0 and k == 0:
                #store values in the best values
                chi_square_best = chi_test
                a_best = a[i]
                b_best = b[j]
                c_best = c[j]
            else:
                #check if this run is better than the best
                if chi_test < chi_square_best:
                    #update parameters
                    chi_square_best = chi_test
                    a_best = a[i]
                    b_best = b[j]
                    c_best = c[k]

#at the end of the loop give the chi square and
#the fitting parameters
print chi_square_best
print a_best, b_best, c_best
                
