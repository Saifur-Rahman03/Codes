#!/usr/bin/env python
# coding: utf-8

# In[1]:


print('Welcome all to python RE')


# In[5]:


a = input('Enter whatever u want: ')
print(a)
print(type(a))
aa = int(a)
print(type(aa))


# In[10]:


for i in range(0, 10, 1):
    if i % 2 == 0:
        print(i, end = ' ' )


# In[21]:


import numpy as np

#numpy
'''
mat1 = np.array( [ (1, 2, 3), (4, 5, 6), (7, 8, 9), (7, 4, 1) ] )
print(mat1)

dimension = mat1.shape
print(dimension[0])
print(dimension[1])
print(dimension)

mat2 = np.array( [ (1, 2, 3, 4), (4, 5, 7, 8), (9, 6, 3, 1) ] )

mat3 = np.dot(mat1, mat2)
print(mat3)
print(mat3.shape) #shape is a property
'''
mat_zeros = np.zeros((4, 3))
mat_ones = np.ones((3, 4))
'''
print(mat_zeros)
print(mat_ones)

print(type(mat_zeros))
print(type(mat_zeros[1][1]))
'''

for i in range(0, mat_zeros.shape[0]):
    for ii in range(0, mat_zeros.shape[1]):
        mat_zeros[i][ii] = i + ii
        
print(mat_zeros)        


# In[73]:


import re

data = '''
Hello everyone, I am MrA.In 11/Jan/2020 I met Messi and got his phone number +8801728366059.But his manager MrAugust 
gave me another number +8801987533108 and requested to enjoy a football match at 20/Mar/2021 and I accepted his offer.
'''

date_pattern = re.compile(r'\d+/[A-Z][a-z]+/\d{4}')

scraping_dates = date_pattern.findall(data)
print(scraping_dates)

phone_number_pattern = re.compile(r'\+[8][8][0][1][3|5|6|7|8|9]\d{8}')
scraping_numbers = phone_number_pattern.findall(data)
print(scraping_numbers)

name_pattern = re.compile(r' [A-Z][a-z][A-Z]*[a-z]*')
scraping_names = name_pattern.findall(data)
print(scraping_names)


# In[67]:


#re Personal Assesment
import numpy as np

mat1 = np.array( ['+8801738663624', '+88017205266h20', '+8801720526652', '+8801738663i245', '+8801776604777', '+880177o6047778' ] )
phone_number_pattern = re.compile(r'\+[8][8][0][1][3|5|6|7|8|9]\d{8}')


for i in range(0, mat1.shape[0]):
    if phone_number_pattern.findall(mat1[i]):
        print('Valid number: ' + mat1[i])
    else:
        print('invalid number: ' + mat1[i])


# In[ ]:





# In[ ]:




