#Problem 3 of HW 5
#Purpose: to redo Problem 1 of HW 4 in Python
from StudentRecord import StudentRecord as sr    #Student Record vectors, input, delete, average
#Main function
def main():
    #Initalize class reference
    records = sr()
    #Initalize name strings and score
    lastname = ""
    firstname = ""
    score = 0.0
    #Input a file
    Filename = open(input("Enter a file name (.txt files only, wrap filename with quotes): "))
    Filetext = Filename.read()
    Filetext = Filetext.replace("\n", ",")
    Filetext = Filetext.split(",")
    del Filetext[-1]
    for i in range(len(Filetext)):
        if i % 3 == 0:
            lastname = Filetext[i]
        elif i % 3 == 1:
            firstname = Filetext[i]
        else:
            score = Filetext[i]
            records.input(lastname, firstname, score)
    score_average = records.average()
    print "The average of the scores in the student record is " + str(score_average) + "."
    
if __name__ == "__main__":
    main()
