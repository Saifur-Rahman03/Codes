# -*- coding: utf-8 -*-
"""Hopfield Algorithm

Automatically generated by Colaboratory.

Original file is located at
    https://colab.research.google.com/drive/1hXM_Rz-i0CXrPfNhMGsXforCTKApXW2-
"""

import pandas as pd
import random
import math
import numpy as np

"""# Input Data"""

(pattern, feat) = 24, 8
data = np.random.choice([-1, 1], size=(pattern, feat))
df = pd.DataFrame(data)
#print(df.head())

x = df.values.tolist()
x = np.array(x)
#print(x)

"""# Functions

Initialize weight matrix
"""

def initialize_weight(feat, train):
  rows, cols = (feat, feat)
  w = np.zeros((rows, cols))
  for i in range(0, rows):
    for j in range(0, cols):
      if i == j: 
        w[i][j] = 0
      else:
        w[i][j] = np.sum(train[:, i] * train[:, j])
  return w

"""Match row"""

def match_row(train, updated):
  matched_row = None
  i = 0
  for row in train:
      if np.array_equal(row, updated):
          matched_row = row
          break
      i = i + 1
  return i

"""Train-Test Splitting"""

def splitting(percentage, x):
  m = math.ceil(len(x) * percentage / 100) # no of training examples
  train = x[:m][:]
  test = x[m:][:]
  return train, test

"""Pattern matching"""

def matched_pattern(w, test):  
  j = 0
  matched = 0
  updated = test[t]
  while True:
    prev_updated = updated
    sum = np.sum(updated * w[j])
    if sum > 0:
      updated[j] = 1
    elif sum < 0:
      updated[j] = -1
    j = j + 1
    j = j % feat

    if np.array_equal(prev_updated, updated):
      matched = matched + 1
    if matched >= 4:
      break
  return updated

"""# Examples"""

percentage = 80
train, test = splitting(percentage, x)

#print("Training Data")
#print(train)

#print("Testing Data")
#print(test)

print(train[:, 0] * train[:, 1])

print(np.sum(train[:, 0] * train[:, 1]))

w = initialize_weight(feat, train)

#print(w)

"""# Implementation"""

percentage = 60
center = 10
train, test = splitting(percentage, x)
w = initialize_weight(feat, train)
print('Test Index\tConverged at Train Index')
print('-------------------------------------')
for t in range(0, len(test)):
  updated = matched_pattern(w, test)
  i = match_row(train, updated)
  print(str(t).center(center), '\t     ', str(i).center(center))
