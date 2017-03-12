#Student Record class definition

class StudentRecord:
    #elements in the class
    def __init__(self):
        self.lastnames_ = []
        self.firstnames_ = []
        self.scores_ = []
    #define an input function, to add to the vectors in the class
    def input(self, lastname, firstname, score):
        self.lastnames_.append(lastname)
        self.firstnames_.append(firstname)
        self.scores_.append(score)

    #define a delete function, to delete the last element of each vector
    def delete(self):
        del self.lastnames_[-1]
        del self.firstnames_[-1]
        del self.scores_[-1]

    #define an average function
    def average(self):
      sum = 0.0
      for i in range(len(self.scores_)):
          self.scores_[i] = float(self.scores_[i])
          sum += self.scores_[i]
      return sum/float(len(self.scores_))
    
