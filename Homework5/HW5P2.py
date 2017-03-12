#Problem 2 of Homework 5
#Purpose: to compute the average of the scores in "records.txt"
#define the average function
def average(vec):
    #initialize sum to 0.0
    sum = 0.0
    for i in range(len(vec)):
        #convert element to a float if it isn't already.
        vec[i] = float(vec[i])
        #add the ith component of list vec to sum
        sum += vec[i]
    return sum/(float(len(vec)))    #return the average
#Now open "records.txt"
File = open("records.txt")
#Read the file
Filetext = File.read()
#replace line breaks with commas and split words at every comma
Filetext = Filetext.replace("\n", ",")
Filetext = Filetext.split(",")
#Doing the above appends a empty element at the end.
#The following deletes that element.
del Filetext[-1]
#Initialize an empty scores list
#Append every third entry, starting with the third
#Compute the average and show it to the user
score_average = average(Filetext[2::3])
print "The average of the scores in the student record is " + str(score_average) + "."
