import numpy as np 
import matplotlib.pyplot as plt 
from numpy import linalg as LA 
import math 
import sys     #for path to external scripts 
 
 

A = np.array(([2,3,-1])) 
B = np.array(([1,-2,1]))
C = A+B
D = np.linalg.norm(C)
E = C/D
F = 5*E
print("the expected vector is",F)
